/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QAction *newFile;
    QAction *openFile;
    QAction *saveFile;
    QAction *exportFile;
    QAction *exit;
    QAction *undo;
    QAction *redo;
    QAction *clear;
    QAction *zoom;
    QAction *gridView;
    QAction *connServer;
    QAction *joinRoom;
    QAction *saveAs;
    QAction *about;
    QAction *version;
    QAction *document;
    QAction *update;
    QAction *disconnect;
    QWidget *centralwidget;
    QWidget *function_btn;
    QPushButton *eraser_btn;
    QToolButton *color_btn;
    QPushButton *line_btn;
    QPushButton *pen_btn;
    QPushButton *is_full_btn;
    QPushButton *text_btn;
    QPushButton *elli_btn;
    QPushButton *rect_btn;
    QPushButton *zoom_big_btn;
    QPushButton *zoom_small_btn;
    QSpinBox *linew_spinBox;
    QLabel *room_id;
    QGraphicsView *whiteBoard;
    QMenuBar *menubar;
    QMenu *newCreateMenu;
    QMenu *editMenu;
    QMenu *viewMenu;
    QMenu *cooperationMenu;
    QMenu *help;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName("Client");
        Client->resize(589, 505);
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(12);
        Client->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/client.png"), QSize(), QIcon::Normal, QIcon::Off);
        Client->setWindowIcon(icon);
        newFile = new QAction(Client);
        newFile->setObjectName("newFile");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/newFile.png"), QSize(), QIcon::Normal, QIcon::Off);
        newFile->setIcon(icon1);
        openFile = new QAction(Client);
        openFile->setObjectName("openFile");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/openFile.png"), QSize(), QIcon::Normal, QIcon::Off);
        openFile->setIcon(icon2);
        saveFile = new QAction(Client);
        saveFile->setObjectName("saveFile");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/saveFile.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveFile->setIcon(icon3);
        exportFile = new QAction(Client);
        exportFile->setObjectName("exportFile");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/exportFile.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportFile->setIcon(icon4);
        exit = new QAction(Client);
        exit->setObjectName("exit");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon5);
        undo = new QAction(Client);
        undo->setObjectName("undo");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        undo->setIcon(icon6);
        redo = new QAction(Client);
        redo->setObjectName("redo");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        redo->setIcon(icon7);
        clear = new QAction(Client);
        clear->setObjectName("clear");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clear->setIcon(icon8);
        zoom = new QAction(Client);
        zoom->setObjectName("zoom");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoom->setIcon(icon9);
        gridView = new QAction(Client);
        gridView->setObjectName("gridView");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/grid.png"), QSize(), QIcon::Normal, QIcon::Off);
        gridView->setIcon(icon10);
        connServer = new QAction(Client);
        connServer->setObjectName("connServer");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/conn_server.png"), QSize(), QIcon::Normal, QIcon::Off);
        connServer->setIcon(icon11);
        joinRoom = new QAction(Client);
        joinRoom->setObjectName("joinRoom");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/role.png"), QSize(), QIcon::Normal, QIcon::Off);
        joinRoom->setIcon(icon12);
        saveAs = new QAction(Client);
        saveAs->setObjectName("saveAs");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/saveAs.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveAs->setIcon(icon13);
        about = new QAction(Client);
        about->setObjectName("about");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        about->setIcon(icon14);
        version = new QAction(Client);
        version->setObjectName("version");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/version.png"), QSize(), QIcon::Normal, QIcon::Off);
        version->setIcon(icon15);
        document = new QAction(Client);
        document->setObjectName("document");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/document.png"), QSize(), QIcon::Normal, QIcon::Off);
        document->setIcon(icon16);
        update = new QAction(Client);
        update->setObjectName("update");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        update->setIcon(icon17);
        disconnect = new QAction(Client);
        disconnect->setObjectName("disconnect");
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/disconnect.png"), QSize(), QIcon::Normal, QIcon::Off);
        disconnect->setIcon(icon18);
        centralwidget = new QWidget(Client);
        centralwidget->setObjectName("centralwidget");
        function_btn = new QWidget(centralwidget);
        function_btn->setObjectName("function_btn");
        function_btn->setGeometry(QRect(10, 0, 571, 91));
        eraser_btn = new QPushButton(function_btn);
        eraser_btn->setObjectName("eraser_btn");
        eraser_btn->setGeometry(QRect(70, 10, 51, 31));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/eraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        eraser_btn->setIcon(icon19);
        eraser_btn->setIconSize(QSize(21, 21));
        color_btn = new QToolButton(function_btn);
        color_btn->setObjectName("color_btn");
        color_btn->setGeometry(QRect(250, 50, 51, 31));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/palette.png"), QSize(), QIcon::Normal, QIcon::Off);
        color_btn->setIcon(icon20);
        color_btn->setIconSize(QSize(22, 22));
        line_btn = new QPushButton(function_btn);
        line_btn->setObjectName("line_btn");
        line_btn->setGeometry(QRect(130, 10, 51, 31));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/line.png"), QSize(), QIcon::Normal, QIcon::Off);
        line_btn->setIcon(icon21);
        line_btn->setIconSize(QSize(37, 33));
        pen_btn = new QPushButton(function_btn);
        pen_btn->setObjectName("pen_btn");
        pen_btn->setGeometry(QRect(10, 10, 51, 31));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/images/pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        pen_btn->setIcon(icon22);
        pen_btn->setIconSize(QSize(19, 20));
        is_full_btn = new QPushButton(function_btn);
        is_full_btn->setObjectName("is_full_btn");
        is_full_btn->setGeometry(QRect(250, 10, 51, 31));
        is_full_btn->setIconSize(QSize(21, 21));
        text_btn = new QPushButton(function_btn);
        text_btn->setObjectName("text_btn");
        text_btn->setGeometry(QRect(10, 50, 51, 31));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/images/text.png"), QSize(), QIcon::Normal, QIcon::Off);
        text_btn->setIcon(icon23);
        text_btn->setIconSize(QSize(17, 17));
        elli_btn = new QPushButton(function_btn);
        elli_btn->setObjectName("elli_btn");
        elli_btn->setGeometry(QRect(190, 10, 51, 31));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/images/epllise.png"), QSize(), QIcon::Normal, QIcon::Off);
        elli_btn->setIcon(icon24);
        elli_btn->setIconSize(QSize(21, 21));
        rect_btn = new QPushButton(function_btn);
        rect_btn->setObjectName("rect_btn");
        rect_btn->setGeometry(QRect(70, 50, 51, 31));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/images/rect.png"), QSize(), QIcon::Normal, QIcon::Off);
        rect_btn->setIcon(icon25);
        rect_btn->setIconSize(QSize(21, 21));
        zoom_big_btn = new QPushButton(function_btn);
        zoom_big_btn->setObjectName("zoom_big_btn");
        zoom_big_btn->setGeometry(QRect(130, 50, 51, 31));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/images/mangify.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoom_big_btn->setIcon(icon26);
        zoom_big_btn->setIconSize(QSize(21, 21));
        zoom_small_btn = new QPushButton(function_btn);
        zoom_small_btn->setObjectName("zoom_small_btn");
        zoom_small_btn->setGeometry(QRect(190, 50, 51, 31));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/images/shrink.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoom_small_btn->setIcon(icon27);
        zoom_small_btn->setIconSize(QSize(21, 21));
        linew_spinBox = new QSpinBox(function_btn);
        linew_spinBox->setObjectName("linew_spinBox");
        linew_spinBox->setGeometry(QRect(310, 10, 51, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(17);
        linew_spinBox->setFont(font1);
        linew_spinBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        linew_spinBox->setMinimum(3);
        room_id = new QLabel(function_btn);
        room_id->setObjectName("room_id");
        room_id->setGeometry(QRect(370, 10, 121, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(11);
        room_id->setFont(font2);
        room_id->setAlignment(Qt::AlignmentFlag::AlignCenter);
        whiteBoard = new QGraphicsView(centralwidget);
        whiteBoard->setObjectName("whiteBoard");
        whiteBoard->setGeometry(QRect(10, 90, 571, 361));
        Client->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Client);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 589, 20));
        newCreateMenu = new QMenu(menubar);
        newCreateMenu->setObjectName("newCreateMenu");
        editMenu = new QMenu(menubar);
        editMenu->setObjectName("editMenu");
        viewMenu = new QMenu(menubar);
        viewMenu->setObjectName("viewMenu");
        cooperationMenu = new QMenu(menubar);
        cooperationMenu->setObjectName("cooperationMenu");
        help = new QMenu(menubar);
        help->setObjectName("help");
        Client->setMenuBar(menubar);
        statusbar = new QStatusBar(Client);
        statusbar->setObjectName("statusbar");
        Client->setStatusBar(statusbar);

        menubar->addAction(newCreateMenu->menuAction());
        menubar->addAction(editMenu->menuAction());
        menubar->addAction(viewMenu->menuAction());
        menubar->addAction(cooperationMenu->menuAction());
        menubar->addAction(help->menuAction());
        newCreateMenu->addAction(newFile);
        newCreateMenu->addAction(openFile);
        newCreateMenu->addSeparator();
        newCreateMenu->addAction(saveFile);
        newCreateMenu->addAction(saveAs);
        newCreateMenu->addSeparator();
        newCreateMenu->addAction(exportFile);
        newCreateMenu->addAction(exit);
        editMenu->addAction(undo);
        editMenu->addAction(redo);
        editMenu->addAction(clear);
        viewMenu->addAction(zoom);
        viewMenu->addAction(gridView);
        cooperationMenu->addAction(connServer);
        cooperationMenu->addAction(joinRoom);
        cooperationMenu->addAction(disconnect);
        help->addAction(about);
        help->addAction(version);
        help->addAction(document);
        help->addAction(update);

        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QMainWindow *Client)
    {
        Client->setWindowTitle(QCoreApplication::translate("Client", "Client", nullptr));
        newFile->setText(QCoreApplication::translate("Client", "\346\226\260\345\273\272", nullptr));
        openFile->setText(QCoreApplication::translate("Client", "\346\211\223\345\274\200", nullptr));
        saveFile->setText(QCoreApplication::translate("Client", "\344\277\235\345\255\230", nullptr));
        exportFile->setText(QCoreApplication::translate("Client", "\345\257\274\345\207\272", nullptr));
        exit->setText(QCoreApplication::translate("Client", "\351\200\200\345\207\272", nullptr));
        undo->setText(QCoreApplication::translate("Client", "\346\222\244\351\224\200", nullptr));
        redo->setText(QCoreApplication::translate("Client", "\351\207\215\345\201\232", nullptr));
        clear->setText(QCoreApplication::translate("Client", "\346\270\205\351\231\244", nullptr));
        zoom->setText(QCoreApplication::translate("Client", "\347\274\251\346\224\276", nullptr));
        gridView->setText(QCoreApplication::translate("Client", "\347\275\221\346\240\274\346\230\276\347\244\272", nullptr));
        connServer->setText(QCoreApplication::translate("Client", "\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", nullptr));
        joinRoom->setText(QCoreApplication::translate("Client", "\345\212\240\345\205\245\346\210\277\351\227\264", nullptr));
        saveAs->setText(QCoreApplication::translate("Client", "\345\217\246\345\255\230\344\270\272", nullptr));
        about->setText(QCoreApplication::translate("Client", "\345\205\263\344\272\216", nullptr));
        version->setText(QCoreApplication::translate("Client", "\347\211\210\346\234\254", nullptr));
        document->setText(QCoreApplication::translate("Client", "\346\226\207\346\241\243", nullptr));
        update->setText(QCoreApplication::translate("Client", "\346\233\264\346\226\260", nullptr));
        disconnect->setText(QCoreApplication::translate("Client", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        eraser_btn->setText(QString());
        color_btn->setText(QCoreApplication::translate("Client", "...", nullptr));
        line_btn->setText(QString());
        pen_btn->setText(QString());
        is_full_btn->setText(QCoreApplication::translate("Client", "\345\241\253\345\205\205", nullptr));
        text_btn->setText(QString());
        elli_btn->setText(QString());
        rect_btn->setText(QString());
        zoom_big_btn->setText(QString());
        zoom_small_btn->setText(QString());
        room_id->setText(QCoreApplication::translate("Client", "\346\210\277\351\227\264\345\217\267", nullptr));
        newCreateMenu->setTitle(QCoreApplication::translate("Client", "\346\226\207\344\273\266", nullptr));
        editMenu->setTitle(QCoreApplication::translate("Client", "\347\274\226\350\276\221", nullptr));
        viewMenu->setTitle(QCoreApplication::translate("Client", "\350\247\206\345\233\276", nullptr));
        cooperationMenu->setTitle(QCoreApplication::translate("Client", "\345\215\217\344\275\234", nullptr));
        help->setTitle(QCoreApplication::translate("Client", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
