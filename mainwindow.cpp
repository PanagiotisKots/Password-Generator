#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QEventLoop>
#include <QTimer>
#include <QFile>
#include <QTextStream>
#include <QThread>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect button signals to their respective slots
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::exitButton_clicked);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::okButton_clicked);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::generate_Button_clicked);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::saveUserInputs);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &MainWindow::ClearTextEdit);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::save_Button_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::exitButton_clicked()
{
    QApplication::quit(); // Exit the application
}

void MainWindow::print_ok_message()
{
    QMessageBox::information(this, "Information", "OK Message"); // Display OK message
}

void MainWindow::okButton_clicked()
{
    print_ok_message(); // Call the slot to display the message
}

void MainWindow::print_generate_message()
{
    QMessageBox::information(this, "Information", "Generate button clicked!"); // Display message
}

void MainWindow::saveUserInputs()
{
    // Get text from all QLineEdit widgets
    userInput1 = ui->lineEdit->text();
    userInput2 = ui->lineEdit_2->text();
    userInput3 = ui->lineEdit_3->text();

    // Check if any input is empty
    if (userInput1.isEmpty() || userInput2.isEmpty() || userInput3.isEmpty()) {
        // Show an error message if any field is empty
        QMessageBox::warning(this, "Input Error", "Please fill in all fields. Try again.");
        return; // Exit the function to prevent further processing
    }

    // Append the user inputs to the QTextEdit widget
    ui->textEdit->append(QString("Input 1: %1").arg(userInput1));
    ui->textEdit->append(QString("Input 2: %1").arg(userInput2));
    ui->textEdit->append(QString("Input 3: %1").arg(userInput3));

    // Optionally, you can add more status or result messages below
    ui->textEdit->append("Waiting for generation...");

    // Wait for 1000 milliseconds (1 second) without freezing the GUI
    waitFor(1000);
    // Append a separator line
    ui->textEdit->append("--------------------------");

    // Append the generation status and results
    ui->textEdit->append("Generation Executed with:");
    ui->textEdit->append("- Warnings : 0");
    ui->textEdit->append("- Errors : 0");
    ui->textEdit->append("- Output File : <Filepath>");
    ui->textEdit->append("--------------------------");
}

void MainWindow::waitFor(int milliseconds)
{
    QEventLoop loop;
    QTimer::singleShot(milliseconds, &loop, &QEventLoop::quit);
    loop.exec();
}

void MainWindow::ClearTextEdit()
{
    // Clear the contents of the QTextEdit widget
    ui->textEdit->clear();

    ui->textEdit->append("Generation results");
    ui->textEdit->append("------------------");
}

void MainWindow::generateAllPasswords(const QString &charset, QString prefix, int length, QVector<QString> &passwords, QAtomicInteger<int> &progress)
{
    if (length == 0) {
        passwords.push_back(prefix);
        progress++;
        return;
    }

    for (QChar ch : charset) {
        generateAllPasswords(charset, prefix + ch, length - 1, passwords, progress);
    }
}

QString MainWindow::savePasswordsToFile(const QVector<QString> &passwords, const QString &filename)
{
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        return "error";
    }

    QTextStream out(&file);
    for (const auto &password : passwords) {
        out << password << "\n";
    }

    file.close();
    return "success";
}

void MainWindow::generate_Button_clicked()
{
    // Collect user inputs
    QString charset = ui->lineEdit->text();  // Charset input
    int length = ui->lineEdit_2->text().toInt(); // Length input

    passwords.clear(); // Clear previous passwords

    // Start password generation in a separate thread
    QThread *thread = QThread::create([=] {
        QVector<QString> localPasswords;
        QAtomicInteger<int> progress(0);
        generateAllPasswords(charset, "", length, localPasswords, progress);
        passwords = localPasswords;
    });

    connect(thread, &QThread::finished, thread, &QObject::deleteLater);
    thread->start();
}

void MainWindow::save_Button_clicked()
{
    // Get filename from user input
    QString filename = ui->lineEdit_3->text();
    QString result = savePasswordsToFile(passwords, filename);

    if (result == "success") {
        QMessageBox::information(this, "Success", "Passwords saved successfully.");
    } else {
        QMessageBox::warning(this, "Error", "Failed to save passwords.");
    }
}

