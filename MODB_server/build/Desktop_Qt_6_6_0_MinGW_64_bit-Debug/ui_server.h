/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Server
{
public:
    QWidget *centralwidget;
    QPushButton *exit_btn;
    QPlainTextEdit *chat_frame;
    QPushButton *close_btn;
    QPushButton *listen_btn;
    QTextEdit *ip_text;
    QPushButton *search_btn;
    QLabel *quality_label;
    QSpinBox *port_box;
    QLabel *frame_ratio_label;
    QLabel *status_label;

    void setupUi(QMainWindow *Server)
    {
        if (Server->objectName().isEmpty())
            Server->setObjectName("Server");
        Server->resize(522, 342);
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(15);
        Server->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/server.png"), QSize(), QIcon::Normal, QIcon::Off);
        Server->setWindowIcon(icon);
        centralwidget = new QWidget(Server);
        centralwidget->setObjectName("centralwidget");
        exit_btn = new QPushButton(centralwidget);
        exit_btn->setObjectName("exit_btn");
        exit_btn->setGeometry(QRect(340, 290, 81, 41));
        chat_frame = new QPlainTextEdit(centralwidget);
        chat_frame->setObjectName("chat_frame");
        chat_frame->setGeometry(QRect(10, 10, 261, 321));
        close_btn = new QPushButton(centralwidget);
        close_btn->setObjectName("close_btn");
        close_btn->setGeometry(QRect(280, 120, 141, 41));
        listen_btn = new QPushButton(centralwidget);
        listen_btn->setObjectName("listen_btn");
        listen_btn->setGeometry(QRect(280, 60, 141, 41));
        ip_text = new QTextEdit(centralwidget);
        ip_text->setObjectName("ip_text");
        ip_text->setGeometry(QRect(280, 10, 141, 31));
        ip_text->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        ip_text->setOverwriteMode(false);
        search_btn = new QPushButton(centralwidget);
        search_btn->setObjectName("search_btn");
        search_btn->setGeometry(QRect(280, 180, 141, 41));
        quality_label = new QLabel(centralwidget);
        quality_label->setObjectName("quality_label");
        quality_label->setGeometry(QRect(560, 250, 40, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(10);
        quality_label->setFont(font1);
        port_box = new QSpinBox(centralwidget);
        port_box->setObjectName("port_box");
        port_box->setGeometry(QRect(430, 10, 81, 31));
        port_box->setAlignment(Qt::AlignmentFlag::AlignCenter);
        port_box->setMinimum(1000);
        port_box->setMaximum(9999);
        port_box->setValue(8080);
        frame_ratio_label = new QLabel(centralwidget);
        frame_ratio_label->setObjectName("frame_ratio_label");
        frame_ratio_label->setGeometry(QRect(560, 190, 40, 21));
        frame_ratio_label->setFont(font1);
        status_label = new QLabel(centralwidget);
        status_label->setObjectName("status_label");
        status_label->setGeometry(QRect(280, 250, 231, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(11);
        status_label->setFont(font2);
        status_label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Server->setCentralWidget(centralwidget);

        retranslateUi(Server);

        QMetaObject::connectSlotsByName(Server);
    } // setupUi

    void retranslateUi(QMainWindow *Server)
    {
        Server->setWindowTitle(QCoreApplication::translate("Server", "Server", nullptr));
        exit_btn->setText(QCoreApplication::translate("Server", "\351\200\200\345\207\272", nullptr));
        close_btn->setText(QCoreApplication::translate("Server", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        listen_btn->setText(QCoreApplication::translate("Server", "\345\274\200\345\247\213\347\233\221\345\220\254", nullptr));
        ip_text->setHtml(QCoreApplication::translate("Server", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:17pt; color:#0ff1f5;\">10.17.72.253</span></p></body></html>", nullptr));
        search_btn->setText(QCoreApplication::translate("Server", "\346\237\245\347\234\213\350\277\236\346\216\245\347\212\266\346\200\201", nullptr));
        quality_label->setText(QString());
        frame_ratio_label->setText(QString());
        status_label->setText(QCoreApplication::translate("Server", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Server: public Ui_Server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
