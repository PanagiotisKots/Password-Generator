/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actiontest2;
    QAction *actiontest3;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QTextBrowser *textBrowser;
    QLabel *label_9;
    QPushButton *pushButton_4;
    QLabel *label_10;
    QLabel *label_11;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(801, 468);
        actiontest2 = new QAction(MainWindow);
        actiontest2->setObjectName("actiontest2");
        actiontest3 = new QAction(MainWindow);
        actiontest3->setObjectName("actiontest3");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 60, 231, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Banner")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(430, 80, 191, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka Display")});
        font1.setPointSize(10);
        label_2->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(580, 420, 80, 24));
        pushButton->setStyleSheet(QString::fromUtf8("/* Exit Button */\n"
"QPushButton#pushButton {\n"
"  background-color: #F44336;  /* Red background color */\n"
"    color: white;               /* White text color */\n"
"\n"
"    font-size: 14px;            /* Font size */\n"
"    font-weight: bold;   \n"
"}\n"
"\n"
"QPushButton#pushButton:hover {\n"
"    background-color: #E53935;  /* Slightly darker red when hovering */\n"
"}\n"
"\n"
"QPushButton#pushButton:pressed {\n"
"    background-color: #C62828;  /* Even darker red when pressed */\n"
"}\n"
""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(470, 420, 80, 24));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_2 {\n"
"    background-color: #4CAF50;  /* Green background color */\n"
"    color: white;               /* White text color */\n"
"    font-size: 14px;            /* Font size */\n"
"    font-weight: bold;          /* Bold text */\n"
"}\n"
"\n"
"QPushButton#pushButton_2:hover {\n"
"    background-color: #45A049;  /* Slightly darker green when hovering */\n"
"}\n"
"\n"
"QPushButton#pushButton_2:pressed {\n"
"    background-color: #388E3C;  /* Even darker green when pressed */\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(430, 300, 131, 31));
        QFont font2;
        font2.setBold(true);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        pushButton_3->setFont(font2);
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;  /* Blue background color */\n"
"    color: white;               /* White text color */\n"
"    font-size: 16px;            /* Font size */\n"
"    font-weight: bold;          /* Bold text */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;  /* Darker blue when hovering */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1f5673;  /* Even darker blue when pressed */\n"
"}\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 430, 71, 16));
        QFont font3;
        font3.setBold(false);
        label_3->setFont(font3);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 80, 301, 181));
        textEdit->setAcceptDrops(true);
        textEdit->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(430, 100, 231, 24));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(430, 180, 231, 24));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(430, 260, 231, 24));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(430, 160, 171, 16));
        label_4->setFont(font1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(430, 240, 171, 16));
        label_5->setFont(font1);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 20, 241, 21));
        QFont font4;
        font4.setPointSize(15);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setUnderline(true);
        label_6->setFont(font4);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(480, 340, 301, 16));
        QFont font5;
        font5.setItalic(true);
        label_7->setFont(font5);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(90, 430, 231, 16));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Segoe UI Light")});
        font6.setPointSize(10);
        font6.setBold(true);
        font6.setItalic(true);
        label_8->setFont(font6);
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(20, 300, 301, 101));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 280, 191, 16));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Sitka Small")});
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setItalic(true);
        label_9->setFont(font7);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(270, 50, 51, 24));
        pushButton_4->setStyleSheet(QString::fromUtf8("/* Apply styles to the button with the object name 'pushButton_4' */\n"
"#pushButton_4 {\n"
"    background-color: #3498db;  /* Blue background color */\n"
"    color: white;               /* White text color */\n"
"\n"
"    font-weight: bold;          /* Bold text */\n"
"\n"
"\n"
"}\n"
"\n"
"/* Apply styles when the button is hovered over */\n"
"#pushButton_4:hover {\n"
"    background-color: #2980b9;  /* Darker blue when hovering */\n"
"}\n"
"\n"
"/* Apply styles when the button is pressed */\n"
"#pushButton_4:pressed {\n"
"    background-color: #1f5673;  /* Even darker blue when pressed */\n"
"}\n"
""));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(430, 340, 91, 16));
        QFont font8;
        font8.setPointSize(10);
        font8.setBold(false);
        font8.setItalic(true);
        label_10->setFont(font8);
        label_10->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(430, 50, 251, 16));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actiontest2->setText(QCoreApplication::translate("MainWindow", "test2", nullptr));
        actiontest3->setText(QCoreApplication::translate("MainWindow", "test3", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "RESULT LOG", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Enter characters ex.(abc123)", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "GENERATE", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Created by : ", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Generation results</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">--------</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /><"
                        "/p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Enter password length ex.(6)", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Ente Output filename.txt", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "PASSWORD GENERATOR", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "https://github.com/PanagiotisKots/Password-Generator", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "KOTSORGIOS PANAGIOTIS", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">MIT License</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Copyright (c) 2024 </span"
                        "><span style=\" font-weight:700; font-style:italic;\">panagiotis kotsorgios</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Permission is hereby granted, free of charge, to any person obtaining a copy</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">of this software and associated documentation files (the &quot;Software&quot;), to deal</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">in the Software without restriction, including without limitation the rights</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">to use, copy, modify, m"
                        "erge, publish, distribute, sublicense, and/or sell</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">copies of the Software, and to permit persons to whom the Software is</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">furnished to do so, subject to the following conditions:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The above copyright notice and this permission notice shall be included in all</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">copies or substantial portions of the Software.</p>\n"
"<p style=\"-qt-paragraph-type:empty"
                        "; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">THE SOFTWARE IS PROVIDED &quot;AS IS&quot;, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0"
                        "px; -qt-block-indent:0; text-indent:0px;\">LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">SOFTWARE.</p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Project's  LICENCE", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "GitHub :", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "*Fill in all fields to generate your paswordList", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
