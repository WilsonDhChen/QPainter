/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Move;
    QAction *action_Edit;
    QAction *action_Save;
    QAction *action_ZoomIn;
    QAction *action_ZoomOut;
    QAction *action_Rotate;
    QAction *action_Clear;
    QAction *action_Draw;
    QAction *action_Exit;
    QAction *actionNew_N;
    QAction *actionOpen_O;
    QAction *actionSave_S;
    QAction *actionSaveAs_A;
    QAction *actionAbout_Us;
    QAction *actionRotate;
    QAction *actionShowToolBar;
    QAction *actionCircle;
    QAction *actionRectangle;
    QAction *actionTriangle;
    QAction *actionText;
    QAction *actionRoundRectangle;
    QAction *actionLine;
    QAction *actionCurveLine;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menuTool;
    QMenu *menuHelp;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *shapeComboBox;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QComboBox *penStyleComboBox;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QSpinBox *penWidthSpinBox;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser_Pen;
    QToolButton *penColorToolButton;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QGridLayout *gridLayout_2;
    QTextBrowser *textBrowser_Brush;
    QToolButton *brushColorToolButton;
    QSpacerItem *verticalSpacer_5;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(632, 456);
        MainWindow->setMouseTracking(true);
        action_Move = new QAction(MainWindow);
        action_Move->setObjectName(QStringLiteral("action_Move"));
        action_Move->setCheckable(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/move.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Move->setIcon(icon);
        action_Edit = new QAction(MainWindow);
        action_Edit->setObjectName(QStringLiteral("action_Edit"));
        action_Edit->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Edit->setIcon(icon1);
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QStringLiteral("action_Save"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/save.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon2);
        action_ZoomIn = new QAction(MainWindow);
        action_ZoomIn->setObjectName(QStringLiteral("action_ZoomIn"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/zoom_in.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_ZoomIn->setIcon(icon3);
        action_ZoomOut = new QAction(MainWindow);
        action_ZoomOut->setObjectName(QStringLiteral("action_ZoomOut"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/zoom_out.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_ZoomOut->setIcon(icon4);
        action_Rotate = new QAction(MainWindow);
        action_Rotate->setObjectName(QStringLiteral("action_Rotate"));
        action_Clear = new QAction(MainWindow);
        action_Clear->setObjectName(QStringLiteral("action_Clear"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Clear->setIcon(icon5);
        action_Draw = new QAction(MainWindow);
        action_Draw->setObjectName(QStringLiteral("action_Draw"));
        action_Draw->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/NewShape.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_Draw->setIcon(icon6);
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QStringLiteral("action_Exit"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Exit->setIcon(icon7);
        actionNew_N = new QAction(MainWindow);
        actionNew_N->setObjectName(QStringLiteral("actionNew_N"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_N->setIcon(icon8);
        actionOpen_O = new QAction(MainWindow);
        actionOpen_O->setObjectName(QStringLiteral("actionOpen_O"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/prefix1/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_O->setIcon(icon9);
        actionSave_S = new QAction(MainWindow);
        actionSave_S->setObjectName(QStringLiteral("actionSave_S"));
        actionSave_S->setIcon(icon2);
        actionSaveAs_A = new QAction(MainWindow);
        actionSaveAs_A->setObjectName(QStringLiteral("actionSaveAs_A"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/prefix1/saveAs.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAs_A->setIcon(icon10);
        actionAbout_Us = new QAction(MainWindow);
        actionAbout_Us->setObjectName(QStringLiteral("actionAbout_Us"));
        actionRotate = new QAction(MainWindow);
        actionRotate->setObjectName(QStringLiteral("actionRotate"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/new/prefix1/rotate.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotate->setIcon(icon11);
        actionShowToolBar = new QAction(MainWindow);
        actionShowToolBar->setObjectName(QStringLiteral("actionShowToolBar"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/new/prefix1/sendtoback.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowToolBar->setIcon(icon12);
        actionCircle = new QAction(MainWindow);
        actionCircle->setObjectName(QStringLiteral("actionCircle"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/new/prefix1/circle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCircle->setIcon(icon13);
        actionRectangle = new QAction(MainWindow);
        actionRectangle->setObjectName(QStringLiteral("actionRectangle"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/new/prefix1/rectangle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRectangle->setIcon(icon14);
        actionTriangle = new QAction(MainWindow);
        actionTriangle->setObjectName(QStringLiteral("actionTriangle"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/new/prefix1/triangle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTriangle->setIcon(icon15);
        actionText = new QAction(MainWindow);
        actionText->setObjectName(QStringLiteral("actionText"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/new/prefix1/text.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionText->setIcon(icon16);
        actionRoundRectangle = new QAction(MainWindow);
        actionRoundRectangle->setObjectName(QStringLiteral("actionRoundRectangle"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/new/prefix1/roundrect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRoundRectangle->setIcon(icon17);
        actionLine = new QAction(MainWindow);
        actionLine->setObjectName(QStringLiteral("actionLine"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/new/prefix1/\347\233\264\347\272\277.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLine->setIcon(icon18);
        actionCurveLine = new QAction(MainWindow);
        actionCurveLine->setObjectName(QStringLiteral("actionCurveLine"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/new/prefix1/\346\233\262\347\272\277.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCurveLine->setIcon(icon19);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 632, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menuTool = new QMenu(menuBar);
        menuTool->setObjectName(QStringLiteral("menuTool"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setMaximumSize(QSize(100, 350));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_6 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        shapeComboBox = new QComboBox(dockWidgetContents);
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/new/prefix1/polyline.png"), QSize(), QIcon::Normal, QIcon::Off);
        shapeComboBox->addItem(icon20, QString());
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/new/prefix1/polygon.png"), QSize(), QIcon::Normal, QIcon::Off);
        shapeComboBox->addItem(icon21, QString());
        shapeComboBox->setObjectName(QStringLiteral("shapeComboBox"));
        shapeComboBox->setMaxCount(2147483642);

        verticalLayout->addWidget(shapeComboBox);


        verticalLayout_6->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        penStyleComboBox = new QComboBox(dockWidgetContents);
        penStyleComboBox->setObjectName(QStringLiteral("penStyleComboBox"));

        verticalLayout_2->addWidget(penStyleComboBox);


        verticalLayout_6->addLayout(verticalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(dockWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        penWidthSpinBox = new QSpinBox(dockWidgetContents);
        penWidthSpinBox->setObjectName(QStringLiteral("penWidthSpinBox"));
        penWidthSpinBox->setMinimum(1);
        penWidthSpinBox->setValue(1);

        verticalLayout_3->addWidget(penWidthSpinBox);


        verticalLayout_6->addLayout(verticalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_4 = new QLabel(dockWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_5->addWidget(label_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser_Pen = new QTextBrowser(dockWidgetContents);
        textBrowser_Pen->setObjectName(QStringLiteral("textBrowser_Pen"));
        textBrowser_Pen->setMinimumSize(QSize(30, 30));
        textBrowser_Pen->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(textBrowser_Pen, 0, 0, 1, 1);

        penColorToolButton = new QToolButton(dockWidgetContents);
        penColorToolButton->setObjectName(QStringLiteral("penColorToolButton"));
        penColorToolButton->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(penColorToolButton, 0, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout);


        verticalLayout_6->addLayout(verticalLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_6 = new QLabel(dockWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_4->addWidget(label_6);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        textBrowser_Brush = new QTextBrowser(dockWidgetContents);
        textBrowser_Brush->setObjectName(QStringLiteral("textBrowser_Brush"));
        textBrowser_Brush->setMinimumSize(QSize(30, 30));
        textBrowser_Brush->setMaximumSize(QSize(40, 40));

        gridLayout_2->addWidget(textBrowser_Brush, 0, 0, 1, 1);

        brushColorToolButton = new QToolButton(dockWidgetContents);
        brushColorToolButton->setObjectName(QStringLiteral("brushColorToolButton"));

        gridLayout_2->addWidget(brushColorToolButton, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);


        verticalLayout_6->addLayout(verticalLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menuTool->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menu->addAction(actionNew_N);
        menu->addAction(actionOpen_O);
        menu->addSeparator();
        menu->addAction(actionSave_S);
        menu->addAction(actionSaveAs_A);
        menu->addSeparator();
        menu->addAction(action_Exit);
        menuTool->addAction(actionShowToolBar);
        menuHelp->addAction(actionAbout_Us);
        mainToolBar->addAction(action_Draw);
        mainToolBar->addAction(action_Move);
        mainToolBar->addAction(action_Edit);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Save);
        mainToolBar->addAction(action_Clear);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_ZoomIn);
        mainToolBar->addAction(action_ZoomOut);
        mainToolBar->addSeparator();
        toolBar->addAction(actionRotate);
        toolBar->addAction(actionCircle);
        toolBar->addAction(actionText);
        toolBar->addAction(actionRectangle);
        toolBar->addAction(actionTriangle);
        toolBar->addAction(actionRoundRectangle);
        toolBar->addAction(actionLine);
        toolBar->addAction(actionCurveLine);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_Move->setText(QApplication::translate("MainWindow", "\347\247\273\345\212\250\350\246\201\347\264\240(&M)", 0));
        action_Move->setShortcut(QApplication::translate("MainWindow", "Ctrl+M", 0));
        action_Edit->setText(QApplication::translate("MainWindow", "\347\274\226\350\276\221\350\246\201\347\264\240(&E)", 0));
        action_Edit->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0));
        action_Save->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", 0));
        action_Save->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        action_ZoomIn->setText(QApplication::translate("MainWindow", "\346\224\276\345\244\247", 0));
        action_ZoomIn->setShortcut(QApplication::translate("MainWindow", "Shift+Up", 0));
        action_ZoomOut->setText(QApplication::translate("MainWindow", "\347\274\251\345\260\217", 0));
        action_ZoomOut->setShortcut(QApplication::translate("MainWindow", "Shift+Down", 0));
        action_Rotate->setText(QApplication::translate("MainWindow", "\346\227\213\350\275\254", 0));
        action_Clear->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", 0));
        action_Clear->setShortcut(QApplication::translate("MainWindow", "Shift+Del", 0));
        action_Draw->setText(QApplication::translate("MainWindow", "\347\273\230\345\210\266\350\246\201\347\264\240(&D)", 0));
#ifndef QT_NO_TOOLTIP
        action_Draw->setToolTip(QApplication::translate("MainWindow", "\347\273\230\345\210\266\350\246\201\347\264\240(D)", 0));
#endif // QT_NO_TOOLTIP
        action_Draw->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", 0));
        action_Exit->setText(QApplication::translate("MainWindow", "Exit(&E)", 0));
        action_Exit->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0));
        actionNew_N->setText(QApplication::translate("MainWindow", "New(&N)", 0));
        actionNew_N->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionOpen_O->setText(QApplication::translate("MainWindow", "Open(&O)", 0));
        actionOpen_O->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionSave_S->setText(QApplication::translate("MainWindow", "Save(&S)", 0));
        actionSave_S->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionSaveAs_A->setText(QApplication::translate("MainWindow", "SaveAs(A)", 0));
        actionSaveAs_A->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        actionAbout_Us->setText(QApplication::translate("MainWindow", "About Us", 0));
        actionRotate->setText(QApplication::translate("MainWindow", "Rotate", 0));
        actionRotate->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", 0));
        actionShowToolBar->setText(QApplication::translate("MainWindow", "showToolBar", 0));
        actionCircle->setText(QApplication::translate("MainWindow", "Circle", 0));
        actionRectangle->setText(QApplication::translate("MainWindow", "Rectangle", 0));
        actionTriangle->setText(QApplication::translate("MainWindow", "Triangle", 0));
        actionText->setText(QApplication::translate("MainWindow", "Text", 0));
        actionRoundRectangle->setText(QApplication::translate("MainWindow", "RoundRectangle", 0));
        actionLine->setText(QApplication::translate("MainWindow", "Line", 0));
        actionCurveLine->setText(QApplication::translate("MainWindow", "curveLine", 0));
        menu->setTitle(QApplication::translate("MainWindow", "File", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuTool->setTitle(QApplication::translate("MainWindow", "Tool", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        dockWidget->setWindowTitle(QApplication::translate("MainWindow", "\347\224\273\345\233\276\345\267\245\345\205\267", 0));
        label->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\345\233\276\345\275\242\357\274\232", 0));
        shapeComboBox->setItemText(0, QApplication::translate("MainWindow", "\347\272\277", 0));
        shapeComboBox->setItemText(1, QApplication::translate("MainWindow", "\351\235\242", 0));

        shapeComboBox->setCurrentText(QApplication::translate("MainWindow", "\347\272\277", 0));
        label_2->setText(QApplication::translate("MainWindow", "\347\224\273\347\254\224\347\261\273\345\236\213\357\274\232", 0));
        penStyleComboBox->clear();
        penStyleComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\256\236\347\272\277", 0)
         << QApplication::translate("MainWindow", "\350\231\232\347\272\277", 0)
        );
        label_3->setText(QApplication::translate("MainWindow", "\347\224\273\347\254\224\347\272\277\345\256\275\357\274\232", 0));
        label_4->setText(QApplication::translate("MainWindow", "\347\224\273\347\254\224\351\242\234\350\211\262\357\274\232", 0));
        penColorToolButton->setText(QApplication::translate("MainWindow", "...", 0));
        label_6->setText(QApplication::translate("MainWindow", "\345\241\253\345\205\205\351\242\234\350\211\262\357\274\232", 0));
        brushColorToolButton->setText(QApplication::translate("MainWindow", "...", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
