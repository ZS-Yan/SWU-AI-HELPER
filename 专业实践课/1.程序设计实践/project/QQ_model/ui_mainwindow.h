/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QLabel *label;
    QToolBox *Friend_Operation;
    QWidget *add_new;
    QLineEdit *newNameLineEdit;
    QComboBox *newGroupComboBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *NewPictureLabel;
    QLineEdit *newIDLineEdit;
    QLabel *label_5;
    QLineEdit *newmanualLineEdit;
    QLabel *label_6;
    QPushButton *newUploadPushButton;
    QLabel *label_7;
    QLineEdit *newSignatureLineEdit;
    QLabel *label_8;
    QLineEdit *newRefenrenceLineEdit;
    QPushButton *NewPutinPushButton;
    QTableView *FriendsTableView;
    QLabel *background1;
    QWidget *delete_old;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *preReferenceLineEdit;
    QLabel *label_14;
    QLabel *prePictureLabel;
    QPushButton *DeletePushButton;
    QTableView *FriendsTableView_2;
    QComboBox *preGroupComboBox;
    QComboBox *preNameComboBox;
    QLabel *background2;
    QLabel *preIDLabel;
    QLabel *preManualLabel;
    QLabel *preSignatureLabel;
    QWidget *friend_inf;
    QTableView *FriendsTableView_3;
    QLineEdit *changableReferenceLineEdit;
    QLabel *label18;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *fixedsignatureLabel;
    QLabel *fixedIDLabel;
    QLabel *fixedNameLabel;
    QLabel *fixedmanualLabel;
    QLabel *label_24;
    QLabel *fixedpictureLabel;
    QPushButton *ChangePushButton;
    QLabel *label_19;
    QComboBox *fixedGroupComboBox;
    QLineEdit *SearchLineEdit;
    QPushButton *SearchPushButton;
    QLabel *background;
    QLabel *label_4;
    QLabel *label_15;
    QLabel *QQ_name;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1022, 896);
        QFont font;
        font.setPointSize(20);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 140, 1021, 671));
        stackedWidget->setFrameShape(QFrame::Box);
        stackedWidget->setFrameShadow(QFrame::Sunken);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, -20, 1021, 61));
        QFont font1;
        font1.setPointSize(18);
        label->setFont(font1);
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Sunken);
        label->setLineWidth(5);
        label->setAlignment(Qt::AlignCenter);
        Friend_Operation = new QToolBox(page_2);
        Friend_Operation->setObjectName(QString::fromUtf8("Friend_Operation"));
        Friend_Operation->setGeometry(QRect(0, 30, 1021, 641));
        QFont font2;
        font2.setPointSize(12);
        Friend_Operation->setFont(font2);
        Friend_Operation->setFrameShape(QFrame::Box);
        Friend_Operation->setFrameShadow(QFrame::Sunken);
        add_new = new QWidget();
        add_new->setObjectName(QString::fromUtf8("add_new"));
        add_new->setGeometry(QRect(0, 0, 1017, 523));
        newNameLineEdit = new QLineEdit(add_new);
        newNameLineEdit->setObjectName(QString::fromUtf8("newNameLineEdit"));
        newNameLineEdit->setGeometry(QRect(100, 90, 181, 31));
        newGroupComboBox = new QComboBox(add_new);
        newGroupComboBox->setObjectName(QString::fromUtf8("newGroupComboBox"));
        newGroupComboBox->setGeometry(QRect(110, 30, 141, 31));
        newGroupComboBox->setEditable(false);
        newGroupComboBox->setFrame(true);
        label_2 = new QLabel(add_new);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 30, 81, 17));
        label_2->setFont(font2);
        label_3 = new QLabel(add_new);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 67, 17));
        label_3->setFont(font2);
        NewPictureLabel = new QLabel(add_new);
        NewPictureLabel->setObjectName(QString::fromUtf8("NewPictureLabel"));
        NewPictureLabel->setGeometry(QRect(100, 320, 171, 171));
        NewPictureLabel->setFrameShape(QFrame::Box);
        NewPictureLabel->setFrameShadow(QFrame::Sunken);
        NewPictureLabel->setScaledContents(true);
        newIDLineEdit = new QLineEdit(add_new);
        newIDLineEdit->setObjectName(QString::fromUtf8("newIDLineEdit"));
        newIDLineEdit->setGeometry(QRect(350, 30, 161, 31));
        label_5 = new QLabel(add_new);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(280, 30, 67, 21));
        label_5->setFont(font2);
        newmanualLineEdit = new QLineEdit(add_new);
        newmanualLineEdit->setObjectName(QString::fromUtf8("newmanualLineEdit"));
        newmanualLineEdit->setGeometry(QRect(360, 90, 61, 31));
        label_6 = new QLabel(add_new);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(310, 90, 67, 17));
        label_6->setFont(font2);
        newUploadPushButton = new QPushButton(add_new);
        newUploadPushButton->setObjectName(QString::fromUtf8("newUploadPushButton"));
        newUploadPushButton->setGeometry(QRect(310, 350, 131, 41));
        QFont font3;
        font3.setPointSize(16);
        newUploadPushButton->setFont(font3);
        label_7 = new QLabel(add_new);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 160, 91, 17));
        label_7->setFont(font2);
        newSignatureLineEdit = new QLineEdit(add_new);
        newSignatureLineEdit->setObjectName(QString::fromUtf8("newSignatureLineEdit"));
        newSignatureLineEdit->setGeometry(QRect(100, 150, 431, 41));
        label_8 = new QLabel(add_new);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 220, 67, 21));
        label_8->setFont(font2);
        newRefenrenceLineEdit = new QLineEdit(add_new);
        newRefenrenceLineEdit->setObjectName(QString::fromUtf8("newRefenrenceLineEdit"));
        newRefenrenceLineEdit->setGeometry(QRect(100, 210, 431, 91));
        NewPutinPushButton = new QPushButton(add_new);
        NewPutinPushButton->setObjectName(QString::fromUtf8("NewPutinPushButton"));
        NewPutinPushButton->setGeometry(QRect(310, 420, 131, 41));
        NewPutinPushButton->setFont(font3);
        FriendsTableView = new QTableView(add_new);
        FriendsTableView->setObjectName(QString::fromUtf8("FriendsTableView"));
        FriendsTableView->setGeometry(QRect(580, 10, 411, 501));
        FriendsTableView->horizontalHeader()->setMinimumSectionSize(25);
        FriendsTableView->horizontalHeader()->setDefaultSectionSize(120);
        FriendsTableView->horizontalHeader()->setStretchLastSection(true);
        FriendsTableView->verticalHeader()->setVisible(false);
        background1 = new QLabel(add_new);
        background1->setObjectName(QString::fromUtf8("background1"));
        background1->setGeometry(QRect(0, 0, 1011, 561));
        background1->setPixmap(QPixmap(QString::fromUtf8("elements/background2.jpeg")));
        background1->setScaledContents(true);
        Friend_Operation->addItem(add_new, QString::fromUtf8("\346\267\273\345\212\240\345\245\275\345\217\213"));
        background1->raise();
        newNameLineEdit->raise();
        label_2->raise();
        label_3->raise();
        NewPictureLabel->raise();
        newIDLineEdit->raise();
        label_5->raise();
        newmanualLineEdit->raise();
        label_6->raise();
        newUploadPushButton->raise();
        label_7->raise();
        newSignatureLineEdit->raise();
        label_8->raise();
        newRefenrenceLineEdit->raise();
        NewPutinPushButton->raise();
        FriendsTableView->raise();
        newGroupComboBox->raise();
        delete_old = new QWidget();
        delete_old->setObjectName(QString::fromUtf8("delete_old"));
        delete_old->setGeometry(QRect(0, 0, 1017, 523));
        label_9 = new QLabel(delete_old);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 20, 81, 21));
        label_9->setFont(font2);
        label_10 = new QLabel(delete_old);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(300, 30, 67, 21));
        label_10->setFont(font2);
        label_11 = new QLabel(delete_old);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(40, 80, 67, 21));
        label_11->setFont(font2);
        label_12 = new QLabel(delete_old);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(310, 80, 67, 21));
        label_12->setFont(font2);
        label_13 = new QLabel(delete_old);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(40, 140, 91, 21));
        label_13->setFont(font2);
        preReferenceLineEdit = new QLineEdit(delete_old);
        preReferenceLineEdit->setObjectName(QString::fromUtf8("preReferenceLineEdit"));
        preReferenceLineEdit->setGeometry(QRect(120, 190, 431, 91));
        label_14 = new QLabel(delete_old);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(50, 220, 67, 21));
        label_14->setFont(font2);
        prePictureLabel = new QLabel(delete_old);
        prePictureLabel->setObjectName(QString::fromUtf8("prePictureLabel"));
        prePictureLabel->setGeometry(QRect(120, 320, 171, 171));
        prePictureLabel->setFrameShape(QFrame::Box);
        prePictureLabel->setFrameShadow(QFrame::Sunken);
        prePictureLabel->setScaledContents(true);
        DeletePushButton = new QPushButton(delete_old);
        DeletePushButton->setObjectName(QString::fromUtf8("DeletePushButton"));
        DeletePushButton->setGeometry(QRect(360, 380, 131, 41));
        DeletePushButton->setFont(font3);
        FriendsTableView_2 = new QTableView(delete_old);
        FriendsTableView_2->setObjectName(QString::fromUtf8("FriendsTableView_2"));
        FriendsTableView_2->setGeometry(QRect(580, 20, 411, 501));
        FriendsTableView_2->horizontalHeader()->setMinimumSectionSize(25);
        FriendsTableView_2->horizontalHeader()->setDefaultSectionSize(120);
        FriendsTableView_2->horizontalHeader()->setStretchLastSection(true);
        FriendsTableView_2->verticalHeader()->setVisible(false);
        preGroupComboBox = new QComboBox(delete_old);
        preGroupComboBox->setObjectName(QString::fromUtf8("preGroupComboBox"));
        preGroupComboBox->setGeometry(QRect(120, 20, 141, 31));
        preNameComboBox = new QComboBox(delete_old);
        preNameComboBox->setObjectName(QString::fromUtf8("preNameComboBox"));
        preNameComboBox->setGeometry(QRect(120, 70, 171, 31));
        background2 = new QLabel(delete_old);
        background2->setObjectName(QString::fromUtf8("background2"));
        background2->setGeometry(QRect(0, 0, 1011, 561));
        background2->setPixmap(QPixmap(QString::fromUtf8("elements/background2.jpeg")));
        background2->setScaledContents(true);
        preIDLabel = new QLabel(delete_old);
        preIDLabel->setObjectName(QString::fromUtf8("preIDLabel"));
        preIDLabel->setGeometry(QRect(370, 20, 131, 31));
        preIDLabel->setFrameShape(QFrame::Box);
        preIDLabel->setFrameShadow(QFrame::Sunken);
        preIDLabel->setLineWidth(2);
        preManualLabel = new QLabel(delete_old);
        preManualLabel->setObjectName(QString::fromUtf8("preManualLabel"));
        preManualLabel->setGeometry(QRect(370, 70, 81, 31));
        preManualLabel->setFrameShape(QFrame::Box);
        preManualLabel->setFrameShadow(QFrame::Sunken);
        preManualLabel->setLineWidth(2);
        preSignatureLabel = new QLabel(delete_old);
        preSignatureLabel->setObjectName(QString::fromUtf8("preSignatureLabel"));
        preSignatureLabel->setGeometry(QRect(120, 140, 401, 31));
        preSignatureLabel->setFrameShape(QFrame::Box);
        preSignatureLabel->setFrameShadow(QFrame::Sunken);
        preSignatureLabel->setLineWidth(2);
        Friend_Operation->addItem(delete_old, QString::fromUtf8("\345\210\240\351\231\244\345\245\275\345\217\213"));
        background2->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        preReferenceLineEdit->raise();
        label_14->raise();
        prePictureLabel->raise();
        DeletePushButton->raise();
        FriendsTableView_2->raise();
        preGroupComboBox->raise();
        preNameComboBox->raise();
        preIDLabel->raise();
        preManualLabel->raise();
        preSignatureLabel->raise();
        friend_inf = new QWidget();
        friend_inf->setObjectName(QString::fromUtf8("friend_inf"));
        friend_inf->setGeometry(QRect(0, 0, 1017, 523));
        FriendsTableView_3 = new QTableView(friend_inf);
        FriendsTableView_3->setObjectName(QString::fromUtf8("FriendsTableView_3"));
        FriendsTableView_3->setGeometry(QRect(580, 20, 411, 441));
        FriendsTableView_3->horizontalHeader()->setMinimumSectionSize(25);
        FriendsTableView_3->horizontalHeader()->setDefaultSectionSize(120);
        FriendsTableView_3->horizontalHeader()->setStretchLastSection(true);
        FriendsTableView_3->verticalHeader()->setVisible(false);
        changableReferenceLineEdit = new QLineEdit(friend_inf);
        changableReferenceLineEdit->setObjectName(QString::fromUtf8("changableReferenceLineEdit"));
        changableReferenceLineEdit->setGeometry(QRect(130, 210, 401, 111));
        label18 = new QLabel(friend_inf);
        label18->setObjectName(QString::fromUtf8("label18"));
        label18->setGeometry(QRect(50, 50, 81, 21));
        label18->setFont(font2);
        label_20 = new QLabel(friend_inf);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(290, 50, 67, 21));
        label_20->setFont(font2);
        label_21 = new QLabel(friend_inf);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(60, 100, 67, 21));
        label_21->setFont(font2);
        label_22 = new QLabel(friend_inf);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(310, 100, 67, 21));
        label_22->setFont(font2);
        label_23 = new QLabel(friend_inf);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(50, 150, 91, 21));
        label_23->setFont(font2);
        fixedsignatureLabel = new QLabel(friend_inf);
        fixedsignatureLabel->setObjectName(QString::fromUtf8("fixedsignatureLabel"));
        fixedsignatureLabel->setGeometry(QRect(130, 150, 401, 31));
        fixedsignatureLabel->setFrameShape(QFrame::Box);
        fixedsignatureLabel->setFrameShadow(QFrame::Sunken);
        fixedsignatureLabel->setLineWidth(2);
        fixedIDLabel = new QLabel(friend_inf);
        fixedIDLabel->setObjectName(QString::fromUtf8("fixedIDLabel"));
        fixedIDLabel->setGeometry(QRect(360, 50, 131, 31));
        fixedIDLabel->setFrameShape(QFrame::Box);
        fixedIDLabel->setFrameShadow(QFrame::Sunken);
        fixedIDLabel->setLineWidth(2);
        fixedNameLabel = new QLabel(friend_inf);
        fixedNameLabel->setObjectName(QString::fromUtf8("fixedNameLabel"));
        fixedNameLabel->setGeometry(QRect(130, 100, 131, 31));
        fixedNameLabel->setFrameShape(QFrame::Box);
        fixedNameLabel->setFrameShadow(QFrame::Sunken);
        fixedNameLabel->setLineWidth(2);
        fixedmanualLabel = new QLabel(friend_inf);
        fixedmanualLabel->setObjectName(QString::fromUtf8("fixedmanualLabel"));
        fixedmanualLabel->setGeometry(QRect(360, 100, 51, 31));
        fixedmanualLabel->setFrameShape(QFrame::Box);
        fixedmanualLabel->setFrameShadow(QFrame::Sunken);
        fixedmanualLabel->setLineWidth(2);
        label_24 = new QLabel(friend_inf);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(60, 250, 51, 31));
        label_24->setFont(font2);
        fixedpictureLabel = new QLabel(friend_inf);
        fixedpictureLabel->setObjectName(QString::fromUtf8("fixedpictureLabel"));
        fixedpictureLabel->setGeometry(QRect(130, 340, 171, 171));
        fixedpictureLabel->setFrameShape(QFrame::Box);
        fixedpictureLabel->setFrameShadow(QFrame::Sunken);
        fixedpictureLabel->setScaledContents(true);
        ChangePushButton = new QPushButton(friend_inf);
        ChangePushButton->setObjectName(QString::fromUtf8("ChangePushButton"));
        ChangePushButton->setGeometry(QRect(350, 400, 131, 41));
        ChangePushButton->setFont(font3);
        label_19 = new QLabel(friend_inf);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(0, 0, 1011, 521));
        label_19->setPixmap(QPixmap(QString::fromUtf8("elements/background2.jpeg")));
        label_19->setScaledContents(true);
        fixedGroupComboBox = new QComboBox(friend_inf);
        fixedGroupComboBox->setObjectName(QString::fromUtf8("fixedGroupComboBox"));
        fixedGroupComboBox->setGeometry(QRect(130, 50, 131, 31));
        SearchLineEdit = new QLineEdit(friend_inf);
        SearchLineEdit->setObjectName(QString::fromUtf8("SearchLineEdit"));
        SearchLineEdit->setGeometry(QRect(580, 474, 331, 41));
        SearchPushButton = new QPushButton(friend_inf);
        SearchPushButton->setObjectName(QString::fromUtf8("SearchPushButton"));
        SearchPushButton->setGeometry(QRect(920, 480, 81, 31));
        SearchPushButton->setFont(font3);
        Friend_Operation->addItem(friend_inf, QString::fromUtf8("\345\245\275\345\217\213\344\277\241\346\201\257"));
        label_19->raise();
        FriendsTableView_3->raise();
        changableReferenceLineEdit->raise();
        label18->raise();
        label_20->raise();
        label_21->raise();
        label_22->raise();
        label_23->raise();
        fixedsignatureLabel->raise();
        fixedIDLabel->raise();
        fixedNameLabel->raise();
        fixedmanualLabel->raise();
        label_24->raise();
        fixedpictureLabel->raise();
        ChangePushButton->raise();
        fixedGroupComboBox->raise();
        SearchLineEdit->raise();
        SearchPushButton->raise();
        background = new QLabel(page_2);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 1011, 671));
        background->setPixmap(QPixmap(QString::fromUtf8("elements/login.jpg")));
        background->setScaledContents(true);
        stackedWidget->addWidget(page_2);
        background->raise();
        label->raise();
        Friend_Operation->raise();
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 1021, 141));
        label_4->setFrameShape(QFrame::Box);
        label_4->setFrameShadow(QFrame::Sunken);
        label_4->setPixmap(QPixmap(QString::fromUtf8("elements/background3.jpeg")));
        label_4->setScaledContents(true);
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 20, 111, 111));
        label_15->setFrameShape(QFrame::Box);
        label_15->setFrameShadow(QFrame::Sunken);
        label_15->setPixmap(QPixmap(QString::fromUtf8("elements/head.jpeg")));
        label_15->setScaledContents(true);
        QQ_name = new QLabel(centralwidget);
        QQ_name->setObjectName(QString::fromUtf8("QQ_name"));
        QQ_name->setGeometry(QRect(150, 40, 111, 31));
        QFont font4;
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setWeight(75);
        QQ_name->setFont(font4);
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(150, 90, 241, 31));
        QFont font5;
        font5.setPointSize(16);
        font5.setBold(false);
        font5.setWeight(50);
        label_16->setFont(font5);
        label_16->setFrameShape(QFrame::NoFrame);
        label_16->setFrameShadow(QFrame::Sunken);
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(900, 10, 100, 100));
        label_17->setPixmap(QPixmap(QString::fromUtf8("elements/logo.jpeg")));
        label_17->setScaledContents(true);
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(740, 30, 141, 61));
        MainWindow->setCentralWidget(centralwidget);
        label_4->raise();
        stackedWidget->raise();
        label_15->raise();
        QQ_name->raise();
        label_16->raise();
        label_17->raise();
        label_18->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        Friend_Operation->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "\345\245\275\345\217\213\347\256\241\347\220\206", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\345\245\275\345\217\213\345\210\206\347\273\204\357\274\232", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "YY\346\230\265\347\247\260\357\274\232", nullptr));
        NewPictureLabel->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "YY\350\264\246\345\217\267\357\274\232", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\346\200\247\345\210\253\357\274\232", nullptr));
        newUploadPushButton->setText(QApplication::translate("MainWindow", "\344\270\212\344\274\240...", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\344\270\252\346\200\247\347\255\276\345\220\215\357\274\232", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\345\244\207\346\263\250\357\274\232", nullptr));
        NewPutinPushButton->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\345\245\275\345\217\213", nullptr));
        background1->setText(QString());
        Friend_Operation->setItemText(Friend_Operation->indexOf(add_new), QApplication::translate("MainWindow", "\346\267\273\345\212\240\345\245\275\345\217\213", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\345\245\275\345\217\213\345\210\206\347\273\204\357\274\232", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "YY\350\264\246\345\217\267\357\274\232", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "YY\346\230\265\347\247\260\357\274\232", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "\344\270\252\346\200\247\347\255\276\345\220\215\357\274\232", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "\345\244\207\346\263\250\357\274\232", nullptr));
        prePictureLabel->setText(QString());
        DeletePushButton->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\345\245\275\345\217\213", nullptr));
        background2->setText(QString());
        preIDLabel->setText(QString());
        preManualLabel->setText(QString());
        preSignatureLabel->setText(QString());
        Friend_Operation->setItemText(Friend_Operation->indexOf(delete_old), QApplication::translate("MainWindow", "\345\210\240\351\231\244\345\245\275\345\217\213", nullptr));
        label18->setText(QApplication::translate("MainWindow", "\345\245\275\345\217\213\345\210\206\347\273\204\357\274\232", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "YY\350\264\246\345\217\267\357\274\232", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "YY\346\230\265\347\247\260\357\274\232", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "\344\270\252\346\200\247\347\255\276\345\220\215\357\274\232", nullptr));
        fixedsignatureLabel->setText(QString());
        fixedIDLabel->setText(QString());
        fixedNameLabel->setText(QString());
        fixedmanualLabel->setText(QString());
        label_24->setText(QApplication::translate("MainWindow", "\345\244\207\346\263\250\357\274\232", nullptr));
        fixedpictureLabel->setText(QString());
        ChangePushButton->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        label_19->setText(QString());
        SearchLineEdit->setText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\350\264\246\345\217\267", nullptr));
        SearchPushButton->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
        Friend_Operation->setItemText(Friend_Operation->indexOf(friend_inf), QApplication::translate("MainWindow", "\345\245\275\345\217\213\344\277\241\346\201\257", nullptr));
        background->setText(QString());
        label_4->setText(QString());
        label_15->setText(QString());
        QQ_name->setText(QApplication::translate("MainWindow", "SWU_AI", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "I love AI~AI is fun~", nullptr));
        label_17->setText(QString());
        label_18->setText(QApplication::translate("MainWindow", "QQ_Model", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
