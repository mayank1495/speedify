/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionExit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *fileText;
    QLabel *label;
    QTextEdit *enterText;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *startBut;
    QPushButton *stopBut;
    QPushButton *resetBut;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QTextEdit *resultText;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(628, 619);
        MainWindow->setAnimated(false);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("Colonna MT"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);

        verticalLayout_2->addWidget(label_4);

        fileText = new QTextEdit(centralWidget);
        fileText->setObjectName(QString::fromUtf8("fileText"));
        fileText->setEnabled(true);
        QFont font2;
        font2.setPointSize(16);
        fileText->setFont(font2);
        fileText->setReadOnly(true);

        verticalLayout_2->addWidget(fileText);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        verticalLayout_2->addWidget(label);

        enterText = new QTextEdit(centralWidget);
        enterText->setObjectName(QString::fromUtf8("enterText"));
        enterText->setReadOnly(true);

        verticalLayout_2->addWidget(enterText);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        startBut = new QPushButton(centralWidget);
        startBut->setObjectName(QString::fromUtf8("startBut"));
        startBut->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(startBut->sizePolicy().hasHeightForWidth());
        startBut->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        startBut->setFont(font3);

        horizontalLayout->addWidget(startBut);

        stopBut = new QPushButton(centralWidget);
        stopBut->setObjectName(QString::fromUtf8("stopBut"));
        stopBut->setEnabled(false);
        sizePolicy.setHeightForWidth(stopBut->sizePolicy().hasHeightForWidth());
        stopBut->setSizePolicy(sizePolicy);
        stopBut->setFont(font3);

        horizontalLayout->addWidget(stopBut);


        verticalLayout->addLayout(horizontalLayout);

        resetBut = new QPushButton(centralWidget);
        resetBut->setObjectName(QString::fromUtf8("resetBut"));
        resetBut->setEnabled(false);
        sizePolicy.setHeightForWidth(resetBut->sizePolicy().hasHeightForWidth());
        resetBut->setSizePolicy(sizePolicy);
        resetBut->setFont(font3);

        verticalLayout->addWidget(resetBut);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Courier"));
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        label_2->setFont(font4);

        horizontalLayout_3->addWidget(label_2);

        resultText = new QTextEdit(centralWidget);
        resultText->setObjectName(QString::fromUtf8("resultText"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(resultText->sizePolicy().hasHeightForWidth());
        resultText->setSizePolicy(sizePolicy1);
        resultText->setMinimumSize(QSize(200, 100));
        resultText->setMaximumSize(QSize(300, 100));
        resultText->setBaseSize(QSize(0, 0));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Courier New"));
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setWeight(75);
        resultText->setFont(font5);
        resultText->setReadOnly(true);

        horizontalLayout_3->addWidget(resultText);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);


        verticalLayout_2->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 628, 28));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SPEED TEST APP", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "SPEED-TEST", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Message:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Type out the given message:", 0, QApplication::UnicodeUTF8));
        startBut->setText(QApplication::translate("MainWindow", "START", 0, QApplication::UnicodeUTF8));
        stopBut->setText(QApplication::translate("MainWindow", "STOP", 0, QApplication::UnicodeUTF8));
        resetBut->setText(QApplication::translate("MainWindow", "RESET", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Result:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Note: First open a file", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
