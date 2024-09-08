#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QVector>
#include <QAtomicInteger>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void exitButton_clicked(); // Slot to handle button click
    void okButton_clicked(); // Slot for OK button click
    void print_ok_message();

    void generate_Button_clicked(); // Slot for Generate button click
    void save_Button_clicked();     // Slot for Save button click
    void print_generate_message();

    void saveUserInputs(); // Slot to save user input from QLineEdit widgets
    void waitFor(int milliseconds);
    void ClearTextEdit();

private:
    void generateAllPasswords(const QString &charset, QString prefix, int length, QVector<QString> &passwords, QAtomicInteger<int> &progress);
    QString savePasswordsToFile(const QVector<QString> &passwords, const QString &filename);

    Ui::MainWindow *ui;

    QString userInput1; // Variable to store the input from lineEdit
    QString userInput2; // Variable to store the input from lineEdit_2
    QString userInput3; // Variable to store the input from lineEdit_3

    QVector<QString> passwords; // To store generated passwords
};

#endif // MAINWINDOW_H

