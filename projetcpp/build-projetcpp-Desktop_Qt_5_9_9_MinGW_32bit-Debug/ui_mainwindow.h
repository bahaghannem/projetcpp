/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *Glob;
    QWidget *page;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QWidget *widget;
    QLineEdit *nom;
    QLineEdit *prenom;
    QLineEdit *email;
    QLineEdit *tel;
    QLineEdit *domaine;
    QLineEdit *desc;
    QPushButton *add;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_14;
    QWidget *page_4;
    QPushButton *upp;
    QPushButton *pushButton_2;
    QTableView *tableView_6;
    QLabel *label_16;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QComboBox *comboBox;
    QWidget *page_5;
    QTableView *tableView_17;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *saveFormateur;
    QLineEdit *idInput;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_15;
    QWidget *page_10;
    QPushButton *pushButtonSend;
    QLineEdit *lineEditChatInput;
    QTextEdit *textEditChatHistory;
    QPushButton *pushButton_3;
    QLabel *label_13;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton;
    QPushButton *pushButton_18;
    QWidget *page_2;
    QStackedWidget *stackedWidget_2;
    QWidget *page_6;
    QWidget *widget_2;
    QLineEdit *id;
    QLineEdit *nom1;
    QLineEdit *desc1;
    QLineEdit *prix1;
    QLineEdit *lieu1;
    QPushButton *add_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_37;
    QWidget *page_8;
    QTableView *tableView_18;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QPushButton *modifierformation;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_39;
    QLabel *label_24;
    QWidget *page_7;
    QPushButton *upp_2;
    QPushButton *pushButton_5;
    QTableView *tableView_7;
    QLabel *label_38;
    QComboBox *sortComboBox;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QWidget *page_9;
    QTableView *tableView_19;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_19;
    QPushButton *pushButton_15;
    QLabel *qr;
    QPushButton *pushButton_16;
    QLabel *label_17;
    QPushButton *pushButton_4;
    QLabel *label_10;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_17;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1066, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Glob = new QStackedWidget(centralwidget);
        Glob->setObjectName(QStringLiteral("Glob"));
        Glob->setGeometry(QRect(0, 0, 1071, 561));
        Glob->setStyleSheet(QString::fromUtf8("QStackedWidget\n"
"{\n"
"    border: 2px solid #B0E0E6; /* Bordure bleu poudre */\n"
"    border-radius: 10px; /* Coins arrondis pour un look doux */\n"
"    background-color: #F0F8FF; /* Fond tr\303\250s clair, presque blanc */\n"
"    padding: 5px; /* Un peu d'espace \303\240 l'int\303\251rieur des bordures */\n"
"}\n"
"\n"
"QStackedWidget > QWidget\n"
"{\n"
"    border: 1px solid #87CEEB; /* Chaque widget \303\240 l'int\303\251rieur a une bordure l\303\251g\303\250re */\n"
"    background-color: #FFFFFF; /* Fond blanc pour les widgets internes */\n"
"}\n"
""));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget = new QStackedWidget(page);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(190, 70, 801, 461));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        widget = new QWidget(page_3);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(15, 60, 761, 371));
        widget->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Couleur de d\303\251part : bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Couleur de fin : bleu poudre */\n"
"    border-radius: 40px;\n"
"}\n"
""));
        nom = new QLineEdit(widget);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(390, 50, 221, 31));
        nom->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"    background-color: #FFFFFF; /* Fond blanc */\n"
"    border: 1px solid #B0E0E6; /* Bordure bleu poudre */\n"
"    border-radius: 10px; /* Bordures arrondies */\n"
"    padding: 5px; /* Espacement interne autour du texte */\n"
"    color: #000000; /* Couleur du texte noir */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    box-shadow: 0 0 5px #87CEEB; /* Ombre douce bleu ciel */\n"
"}\n"
""));
        prenom = new QLineEdit(widget);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setGeometry(QRect(390, 90, 221, 31));
        prenom->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"    background-color: #FFFFFF; /* Fond blanc */\n"
"    border: 1px solid #B0E0E6; /* Bordure bleu poudre */\n"
"    border-radius: 10px; /* Bordures arrondies */\n"
"    padding: 5px; /* Espacement interne autour du texte */\n"
"    color: #000000; /* Couleur du texte noir */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    box-shadow: 0 0 5px #87CEEB; /* Ombre douce bleu ciel */\n"
"}\n"
""));
        email = new QLineEdit(widget);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(390, 130, 221, 31));
        email->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"    background-color: #FFFFFF; /* Fond blanc */\n"
"    border: 1px solid #B0E0E6; /* Bordure bleu poudre */\n"
"    border-radius: 10px; /* Bordures arrondies */\n"
"    padding: 5px; /* Espacement interne autour du texte */\n"
"    color: #000000; /* Couleur du texte noir */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    box-shadow: 0 0 5px #87CEEB; /* Ombre douce bleu ciel */\n"
"}\n"
""));
        tel = new QLineEdit(widget);
        tel->setObjectName(QStringLiteral("tel"));
        tel->setGeometry(QRect(390, 170, 221, 31));
        tel->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"    background-color: #FFFFFF; /* Fond blanc */\n"
"    border: 1px solid #B0E0E6; /* Bordure bleu poudre */\n"
"    border-radius: 10px; /* Bordures arrondies */\n"
"    padding: 5px; /* Espacement interne autour du texte */\n"
"    color: #000000; /* Couleur du texte noir */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    box-shadow: 0 0 5px #87CEEB; /* Ombre douce bleu ciel */\n"
"}\n"
""));
        domaine = new QLineEdit(widget);
        domaine->setObjectName(QStringLiteral("domaine"));
        domaine->setGeometry(QRect(390, 210, 221, 31));
        domaine->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"    background-color: #FFFFFF; /* Fond blanc */\n"
"    border: 1px solid #B0E0E6; /* Bordure bleu poudre */\n"
"    border-radius: 10px; /* Bordures arrondies */\n"
"    padding: 5px; /* Espacement interne autour du texte */\n"
"    color: #000000; /* Couleur du texte noir */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    box-shadow: 0 0 5px #87CEEB; /* Ombre douce bleu ciel */\n"
"}\n"
""));
        desc = new QLineEdit(widget);
        desc->setObjectName(QStringLiteral("desc"));
        desc->setGeometry(QRect(390, 250, 221, 31));
        desc->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"    background-color: #FFFFFF; /* Fond blanc */\n"
"    border: 1px solid #B0E0E6; /* Bordure bleu poudre */\n"
"    border-radius: 10px; /* Bordures arrondies */\n"
"    padding: 5px; /* Espacement interne autour du texte */\n"
"    color: #000000; /* Couleur du texte noir */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    box-shadow: 0 0 5px #87CEEB; /* Ombre douce bleu ciel */\n"
"}\n"
""));
        add = new QPushButton(widget);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(300, 320, 171, 41));
        add->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 50, 111, 31));
        label->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 90, 111, 41));
        label_2->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 140, 111, 31));
        label_3->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(220, 180, 111, 41));
        label_4->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(220, 230, 111, 31));
        label_5->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(220, 270, 111, 31));
        label_6->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_14 = new QLabel(page_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(280, 20, 281, 31));
        label_14->setStyleSheet(QLatin1String("color: #2A501F;\n"
"font-family: 'Athiti';\n"
"font-style: normal;\n"
"font-weight: 700;\n"
"font-size: 20px;\n"
"background-color: none;"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        upp = new QPushButton(page_4);
        upp->setObjectName(QStringLiteral("upp"));
        upp->setGeometry(QRect(90, 320, 131, 41));
        upp->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        pushButton_2 = new QPushButton(page_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 320, 121, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        tableView_6 = new QTableView(page_4);
        tableView_6->setObjectName(QStringLiteral("tableView_6"));
        tableView_6->setGeometry(QRect(80, 60, 631, 231));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView_6->sizePolicy().hasHeightForWidth());
        tableView_6->setSizePolicy(sizePolicy);
        tableView_6->setFocusPolicy(Qt::NoFocus);
        tableView_6->setAutoFillBackground(false);
        tableView_6->setStyleSheet(QLatin1String("background:white;\n"
"border:3px solid #11110E;\n"
"border-radius: 15px 15px 50px 50px;\n"
"\n"
""));
        tableView_6->setFrameShape(QFrame::NoFrame);
        tableView_6->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView_6->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableView_6->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_6->setTabKeyNavigation(false);
        tableView_6->setProperty("showDropIndicator", QVariant(false));
        tableView_6->setDragDropOverwriteMode(false);
        tableView_6->setAlternatingRowColors(true);
        tableView_6->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_6->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_6->setTextElideMode(Qt::ElideNone);
        tableView_6->setShowGrid(false);
        tableView_6->setGridStyle(Qt::NoPen);
        tableView_6->setCornerButtonEnabled(false);
        tableView_6->horizontalHeader()->setVisible(false);
        tableView_6->horizontalHeader()->setDefaultSectionSize(120);
        tableView_6->horizontalHeader()->setMinimumSectionSize(30);
        label_16 = new QLabel(page_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(290, 20, 221, 21));
        label_16->setStyleSheet(QLatin1String("color: #2A501F;\n"
"font-family: 'Athiti';\n"
"font-style: normal;\n"
"font-weight: 700;\n"
"font-size: 20px;\n"
"background-color: none;"));
        pushButton_13 = new QPushButton(page_4);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(430, 320, 91, 41));
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        pushButton_14 = new QPushButton(page_4);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(560, 320, 101, 41));
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        comboBox = new QComboBox(page_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(610, 30, 62, 22));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        tableView_17 = new QTableView(page_5);
        tableView_17->setObjectName(QStringLiteral("tableView_17"));
        tableView_17->setGeometry(QRect(60, 60, 281, 301));
        sizePolicy.setHeightForWidth(tableView_17->sizePolicy().hasHeightForWidth());
        tableView_17->setSizePolicy(sizePolicy);
        tableView_17->setFocusPolicy(Qt::NoFocus);
        tableView_17->setAutoFillBackground(false);
        tableView_17->setStyleSheet(QLatin1String("background:white;\n"
"border:3px solid #11110E;\n"
"border-radius: 15px 15px 50px 50px;\n"
"\n"
""));
        tableView_17->setFrameShape(QFrame::NoFrame);
        tableView_17->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView_17->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableView_17->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_17->setTabKeyNavigation(false);
        tableView_17->setProperty("showDropIndicator", QVariant(false));
        tableView_17->setDragDropOverwriteMode(false);
        tableView_17->setAlternatingRowColors(true);
        tableView_17->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_17->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_17->setTextElideMode(Qt::ElideNone);
        tableView_17->setShowGrid(false);
        tableView_17->setGridStyle(Qt::NoPen);
        tableView_17->setCornerButtonEnabled(false);
        tableView_17->horizontalHeader()->setVisible(false);
        tableView_17->horizontalHeader()->setDefaultSectionSize(120);
        tableView_17->horizontalHeader()->setMinimumSectionSize(30);
        lineEdit = new QLineEdit(page_5);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(600, 80, 113, 20));
        lineEdit_2 = new QLineEdit(page_5);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(600, 120, 113, 20));
        lineEdit_3 = new QLineEdit(page_5);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(600, 160, 113, 20));
        lineEdit_4 = new QLineEdit(page_5);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(600, 200, 113, 20));
        lineEdit_5 = new QLineEdit(page_5);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(600, 240, 113, 20));
        lineEdit_6 = new QLineEdit(page_5);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(600, 280, 113, 20));
        saveFormateur = new QPushButton(page_5);
        saveFormateur->setObjectName(QStringLiteral("saveFormateur"));
        saveFormateur->setGeometry(QRect(520, 340, 111, 41));
        saveFormateur->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        idInput = new QLineEdit(page_5);
        idInput->setObjectName(QStringLiteral("idInput"));
        idInput->setGeometry(QRect(600, 40, 113, 20));
        label_30 = new QLabel(page_5);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(430, 270, 111, 31));
        label_30->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_31 = new QLabel(page_5);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(430, 150, 111, 31));
        label_31->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_32 = new QLabel(page_5);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(430, 110, 111, 31));
        label_32->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_33 = new QLabel(page_5);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(430, 190, 111, 31));
        label_33->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_34 = new QLabel(page_5);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(430, 70, 111, 31));
        label_34->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_35 = new QLabel(page_5);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(430, 230, 111, 31));
        label_35->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_36 = new QLabel(page_5);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(430, 30, 111, 31));
        label_36->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_15 = new QLabel(page_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(40, 10, 371, 31));
        label_15->setStyleSheet(QLatin1String("color: #2A501F;\n"
"font-family: 'Athiti';\n"
"font-style: normal;\n"
"font-weight: 700;\n"
"font-size: 20px;\n"
"background-color: none;"));
        stackedWidget->addWidget(page_5);
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        pushButtonSend = new QPushButton(page_10);
        pushButtonSend->setObjectName(QStringLiteral("pushButtonSend"));
        pushButtonSend->setGeometry(QRect(604, 350, 81, 31));
        pushButtonSend->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #007bff; /* Bleu uniforme */\n"
"    border: none; /* Sans bordure */\n"
"    color: white; /* Texte blanc */\n"
"    padding: 8px 16px; /* Espacement interne */\n"
"    border-radius: 4px; /* Coins l\303\251g\303\250rement arrondis */\n"
"    font-size: 14px; /* Taille de la police */\n"
"}"));
        lineEditChatInput = new QLineEdit(page_10);
        lineEditChatInput->setObjectName(QStringLiteral("lineEditChatInput"));
        lineEditChatInput->setGeometry(QRect(100, 350, 491, 31));
        lineEditChatInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #ccc;           /* Bordure gris clair */\n"
"    border-radius: 5px;              /* Coins arrondis */\n"
"    padding: 5px 10px;               /* Espacement interne */\n"
"    background-color: #f9f9f9;       /* Couleur de fond l\303\251g\303\250re */\n"
"    color: #333;                      /* Couleur du texte */\n"
"    font-family: Arial, sans-serif;  /* Police du texte */\n"
"    font-size: 14px;                 /* Taille de la police */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #0078d4;       /* Bordure bleue lorsqu'en focus */\n"
"    background-color: #fff;          /* Couleur de fond blanche en focus */\n"
"    outline: none;                   /* Supprimer le contour par d\303\251faut */\n"
"}\n"
""));
        textEditChatHistory = new QTextEdit(page_10);
        textEditChatHistory->setObjectName(QStringLiteral("textEditChatHistory"));
        textEditChatHistory->setGeometry(QRect(90, 60, 571, 261));
        textEditChatHistory->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    border: 1px solid #ccc;          /* Bordure gris clair */\n"
"    border-radius: 5px;             /* Coins arrondis */\n"
"    padding: 10px;                  /* Espacement interne */\n"
"    background-color: #f9f9f9;      /* Couleur de fond l\303\251g\303\250re */\n"
"    color: #333;                     /* Couleur du texte */\n"
"    font-family: Arial, sans-serif; /* Police du texte */\n"
"    font-size: 14px;                /* Taille de la police */\n"
"}\n"
"\n"
"QTextEdit:focus {\n"
"    border: 1px solid #0078d4;      /* Bordure bleue lorsqu'en focus */\n"
"    background-color: #fff;         /* Couleur de fond blanche en focus */\n"
"}\n"
""));
        stackedWidget->addWidget(page_10);
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 260, 121, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        label_13 = new QLabel(page);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 60, 111, 61));
        label_13->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/pngegg.png")));
        label_13->setScaledContents(true);
        pushButton_6 = new QPushButton(page);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(640, 20, 111, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        pushButton_7 = new QPushButton(page);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(800, 20, 111, 41));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(470, 20, 111, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        pushButton_18 = new QPushButton(page);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(300, 20, 111, 41));
        pushButton_18->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        Glob->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget_2 = new QStackedWidget(page_2);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(190, 70, 801, 461));
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        widget_2 = new QWidget(page_6);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(10, 60, 761, 371));
        widget_2->setMaximumSize(QSize(16777213, 167772));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Couleur de d\303\251part : bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Couleur de fin : bleu poudre */\n"
"    border-radius: 40px;\n"
"}\n"
""));
        id = new QLineEdit(widget_2);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(390, 40, 221, 31));
        id->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"    background-color: #FFFFFF; /* Fond blanc */\n"
"    border: 1px solid #B0E0E6; /* Bordure bleu poudre */\n"
"    border-radius: 10px; /* Bordures arrondies */\n"
"    padding: 5px; /* Espacement interne autour du texte */\n"
"    color: #000000; /* Couleur du texte noir */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    box-shadow: 0 0 5px #87CEEB; /* Ombre douce bleu ciel */\n"
"}\n"
""));
        nom1 = new QLineEdit(widget_2);
        nom1->setObjectName(QStringLiteral("nom1"));
        nom1->setGeometry(QRect(390, 90, 221, 31));
        nom1->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"    background-color: #FFFFFF; /* Fond blanc */\n"
"    border: 1px solid #B0E0E6; /* Bordure bleu poudre */\n"
"    border-radius: 10px; /* Bordures arrondies */\n"
"    padding: 5px; /* Espacement interne autour du texte */\n"
"    color: #000000; /* Couleur du texte noir */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    box-shadow: 0 0 5px #87CEEB; /* Ombre douce bleu ciel */\n"
"}\n"
""));
        desc1 = new QLineEdit(widget_2);
        desc1->setObjectName(QStringLiteral("desc1"));
        desc1->setGeometry(QRect(390, 140, 221, 31));
        desc1->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"    background-color: #FFFFFF; /* Fond blanc */\n"
"    border: 1px solid #B0E0E6; /* Bordure bleu poudre */\n"
"    border-radius: 10px; /* Bordures arrondies */\n"
"    padding: 5px; /* Espacement interne autour du texte */\n"
"    color: #000000; /* Couleur du texte noir */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    box-shadow: 0 0 5px #87CEEB; /* Ombre douce bleu ciel */\n"
"}\n"
""));
        prix1 = new QLineEdit(widget_2);
        prix1->setObjectName(QStringLiteral("prix1"));
        prix1->setGeometry(QRect(390, 190, 221, 31));
        prix1->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"    background-color: #FFFFFF; /* Fond blanc */\n"
"    border: 1px solid #B0E0E6; /* Bordure bleu poudre */\n"
"    border-radius: 10px; /* Bordures arrondies */\n"
"    padding: 5px; /* Espacement interne autour du texte */\n"
"    color: #000000; /* Couleur du texte noir */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    box-shadow: 0 0 5px #87CEEB; /* Ombre douce bleu ciel */\n"
"}\n"
""));
        lieu1 = new QLineEdit(widget_2);
        lieu1->setObjectName(QStringLiteral("lieu1"));
        lieu1->setGeometry(QRect(390, 240, 221, 31));
        lieu1->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"    background-color: #FFFFFF; /* Fond blanc */\n"
"    border: 1px solid #B0E0E6; /* Bordure bleu poudre */\n"
"    border-radius: 10px; /* Bordures arrondies */\n"
"    padding: 5px; /* Espacement interne autour du texte */\n"
"    color: #000000; /* Couleur du texte noir */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    box-shadow: 0 0 5px #87CEEB; /* Ombre douce bleu ciel */\n"
"}\n"
""));
        add_2 = new QPushButton(widget_2);
        add_2->setObjectName(QStringLiteral("add_2"));
        add_2->setGeometry(QRect(300, 290, 171, 41));
        add_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(220, 40, 111, 31));
        label_7->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_8 = new QLabel(widget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(220, 90, 111, 31));
        label_8->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_9 = new QLabel(widget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(220, 140, 111, 31));
        label_9->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_11 = new QLabel(widget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(220, 190, 111, 31));
        label_11->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_12 = new QLabel(widget_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(220, 240, 111, 31));
        label_12->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_37 = new QLabel(page_6);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(280, 9, 271, 31));
        label_37->setStyleSheet(QLatin1String("color: #2A501F;\n"
"font-family: 'Athiti';\n"
"font-style: normal;\n"
"font-weight: 700;\n"
"font-size: 20px;\n"
"background-color: none;"));
        stackedWidget_2->addWidget(page_6);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        tableView_18 = new QTableView(page_8);
        tableView_18->setObjectName(QStringLiteral("tableView_18"));
        tableView_18->setGeometry(QRect(60, 70, 281, 301));
        sizePolicy.setHeightForWidth(tableView_18->sizePolicy().hasHeightForWidth());
        tableView_18->setSizePolicy(sizePolicy);
        tableView_18->setFocusPolicy(Qt::NoFocus);
        tableView_18->setAutoFillBackground(false);
        tableView_18->setStyleSheet(QLatin1String("background:white;\n"
"border:3px solid #11110E;\n"
"border-radius: 15px 15px 50px 50px;\n"
"\n"
""));
        tableView_18->setFrameShape(QFrame::NoFrame);
        tableView_18->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView_18->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableView_18->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_18->setTabKeyNavigation(false);
        tableView_18->setProperty("showDropIndicator", QVariant(false));
        tableView_18->setDragDropOverwriteMode(false);
        tableView_18->setAlternatingRowColors(true);
        tableView_18->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_18->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_18->setTextElideMode(Qt::ElideNone);
        tableView_18->setShowGrid(false);
        tableView_18->setGridStyle(Qt::NoPen);
        tableView_18->setCornerButtonEnabled(false);
        tableView_18->horizontalHeader()->setVisible(false);
        tableView_18->horizontalHeader()->setDefaultSectionSize(120);
        tableView_18->horizontalHeader()->setMinimumSectionSize(30);
        lineEdit_8 = new QLineEdit(page_8);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(550, 80, 113, 20));
        lineEdit_9 = new QLineEdit(page_8);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(550, 130, 113, 20));
        lineEdit_10 = new QLineEdit(page_8);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(550, 180, 113, 20));
        lineEdit_11 = new QLineEdit(page_8);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(550, 230, 113, 20));
        lineEdit_12 = new QLineEdit(page_8);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(550, 280, 113, 20));
        lineEdit_13 = new QLineEdit(page_8);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(550, 330, 113, 20));
        modifierformation = new QPushButton(page_8);
        modifierformation->setObjectName(QStringLiteral("modifierformation"));
        modifierformation->setGeometry(QRect(460, 370, 111, 41));
        modifierformation->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        label_19 = new QLabel(page_8);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(400, 80, 111, 31));
        label_19->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_20 = new QLabel(page_8);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(400, 320, 111, 31));
        label_20->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_21 = new QLabel(page_8);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(400, 170, 111, 31));
        label_21->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_22 = new QLabel(page_8);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(400, 220, 111, 31));
        label_22->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_23 = new QLabel(page_8);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(400, 270, 111, 31));
        label_23->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        label_39 = new QLabel(page_8);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(320, 10, 211, 31));
        label_39->setStyleSheet(QLatin1String("color: #2A501F;\n"
"font-family: 'Athiti';\n"
"font-style: normal;\n"
"font-weight: 700;\n"
"font-size: 20px;\n"
"background-color: none;"));
        label_24 = new QLabel(page_8);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(400, 120, 111, 31));
        label_24->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #87CEEB,  /* Bleu ciel clair */\n"
"                                stop:1 #B0E0E6); /* Bleu poudre */\n"
"    border-radius: 15px; /* Bordures arrondies */\n"
"    padding: 10px; /* Espacement interne pour le texte */\n"
"    color: #FFFFFF; /* Couleur du texte blanc */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
""));
        stackedWidget_2->addWidget(page_8);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        upp_2 = new QPushButton(page_7);
        upp_2->setObjectName(QStringLiteral("upp_2"));
        upp_2->setGeometry(QRect(80, 340, 131, 41));
        upp_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        pushButton_5 = new QPushButton(page_7);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(250, 340, 131, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        tableView_7 = new QTableView(page_7);
        tableView_7->setObjectName(QStringLiteral("tableView_7"));
        tableView_7->setGeometry(QRect(50, 80, 691, 231));
        sizePolicy.setHeightForWidth(tableView_7->sizePolicy().hasHeightForWidth());
        tableView_7->setSizePolicy(sizePolicy);
        tableView_7->setFocusPolicy(Qt::NoFocus);
        tableView_7->setAutoFillBackground(false);
        tableView_7->setStyleSheet(QLatin1String("background:white;\n"
"border:3px solid #11110E;\n"
"border-radius: 15px 15px 50px 50px;\n"
"\n"
""));
        tableView_7->setFrameShape(QFrame::NoFrame);
        tableView_7->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView_7->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableView_7->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_7->setTabKeyNavigation(false);
        tableView_7->setProperty("showDropIndicator", QVariant(false));
        tableView_7->setDragDropOverwriteMode(false);
        tableView_7->setAlternatingRowColors(true);
        tableView_7->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_7->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_7->setTextElideMode(Qt::ElideNone);
        tableView_7->setShowGrid(false);
        tableView_7->setGridStyle(Qt::NoPen);
        tableView_7->setCornerButtonEnabled(false);
        tableView_7->horizontalHeader()->setVisible(false);
        tableView_7->horizontalHeader()->setDefaultSectionSize(120);
        tableView_7->horizontalHeader()->setMinimumSectionSize(30);
        label_38 = new QLabel(page_7);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(280, 20, 231, 20));
        label_38->setStyleSheet(QLatin1String("color: #2A501F;\n"
"font-family: 'Athiti';\n"
"font-style: normal;\n"
"font-weight: 700;\n"
"font-size: 20px;\n"
"background-color: none;"));
        sortComboBox = new QComboBox(page_7);
        sortComboBox->setObjectName(QStringLiteral("sortComboBox"));
        sortComboBox->setGeometry(QRect(620, 30, 121, 31));
        sortComboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 2px solid #007ACC; /* Bordure bleue */\n"
"    border-radius: 5px; /* Bordures l\303\251g\303\250rement arrondies */\n"
"    padding: 5px 10px; /* Espacement interne */\n"
"    font-size: 14px; /* Taille de police */\n"
"    color: #333; /* Couleur du texte */\n"
"    background-color: #F9F9F9; /* Couleur de fond claire */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px; /* Largeur du bouton de la liste d\303\251roulante */\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:/icons/arrow_down.png); /* Ic\303\264ne de fl\303\250che pour la liste d\303\251roulante */\n"
"}\n"
"\n"
"QComboBox::drop-down:pressed {\n"
"    border: 2px solid #005C99; /* Bordure plus fonc\303\251e lors du clic */\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    border: 2px solid #007ACC; /* Bordure de la liste d\303\251roulante */\n"
"    selection-background-color: #007ACC; /* Couleur de fond des \303\251l\303"
                        "\251ments s\303\251lectionn\303\251s */\n"
"    selection-color: white; /* Couleur du texte des \303\251l\303\251ments s\303\251lectionn\303\251s */\n"
"    padding: 5px; /* Espacement interne des \303\251l\303\251ments */\n"
"}\n"
""));
        pushButton_11 = new QPushButton(page_7);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(570, 340, 111, 41));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        pushButton_12 = new QPushButton(page_7);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(430, 340, 91, 41));
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        stackedWidget_2->addWidget(page_7);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        tableView_19 = new QTableView(page_9);
        tableView_19->setObjectName(QStringLiteral("tableView_19"));
        tableView_19->setGeometry(QRect(50, 50, 281, 301));
        sizePolicy.setHeightForWidth(tableView_19->sizePolicy().hasHeightForWidth());
        tableView_19->setSizePolicy(sizePolicy);
        tableView_19->setFocusPolicy(Qt::NoFocus);
        tableView_19->setAutoFillBackground(false);
        tableView_19->setStyleSheet(QLatin1String("background:white;\n"
"border:3px solid #11110E;\n"
"border-radius: 15px 15px 50px 50px;\n"
"\n"
""));
        tableView_19->setFrameShape(QFrame::NoFrame);
        tableView_19->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView_19->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableView_19->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_19->setTabKeyNavigation(false);
        tableView_19->setProperty("showDropIndicator", QVariant(false));
        tableView_19->setDragDropOverwriteMode(false);
        tableView_19->setAlternatingRowColors(true);
        tableView_19->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_19->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_19->setTextElideMode(Qt::ElideNone);
        tableView_19->setShowGrid(false);
        tableView_19->setGridStyle(Qt::NoPen);
        tableView_19->setCornerButtonEnabled(false);
        tableView_19->horizontalHeader()->setVisible(false);
        tableView_19->horizontalHeader()->setDefaultSectionSize(120);
        tableView_19->horizontalHeader()->setMinimumSectionSize(30);
        lineEdit_14 = new QLineEdit(page_9);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(180, 190, 113, 20));
        lineEdit_15 = new QLineEdit(page_9);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(180, 250, 113, 20));
        lineEdit_16 = new QLineEdit(page_9);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(170, 150, 113, 20));
        lineEdit_17 = new QLineEdit(page_9);
        lineEdit_17->setObjectName(QStringLiteral("lineEdit_17"));
        lineEdit_17->setGeometry(QRect(190, 240, 113, 20));
        lineEdit_18 = new QLineEdit(page_9);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));
        lineEdit_18->setGeometry(QRect(170, 80, 113, 20));
        lineEdit_19 = new QLineEdit(page_9);
        lineEdit_19->setObjectName(QStringLiteral("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(180, 290, 113, 20));
        pushButton_15 = new QPushButton(page_9);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(1050, 370, 75, 23));
        qr = new QLabel(page_9);
        qr->setObjectName(QStringLiteral("qr"));
        qr->setGeometry(QRect(390, 60, 291, 281));
        pushButton_16 = new QPushButton(page_9);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(394, 360, 171, 51));
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        label_17 = new QLabel(page_9);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(220, 10, 411, 20));
        label_17->setStyleSheet(QLatin1String("color: #2A501F;\n"
"font-family: 'Athiti';\n"
"font-style: normal;\n"
"font-weight: 700;\n"
"font-size: 20px;\n"
"background-color: none;"));
        stackedWidget_2->addWidget(page_9);
        lineEdit_17->raise();
        lineEdit_16->raise();
        lineEdit_14->raise();
        lineEdit_18->raise();
        lineEdit_15->raise();
        lineEdit_19->raise();
        tableView_19->raise();
        pushButton_15->raise();
        qr->raise();
        pushButton_16->raise();
        label_17->raise();
        pushButton_4 = new QPushButton(page_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 260, 121, 51));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        label_10 = new QLabel(page_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 60, 111, 61));
        label_10->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/pngegg.png")));
        label_10->setScaledContents(true);
        pushButton_8 = new QPushButton(page_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(470, 20, 111, 41));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        pushButton_9 = new QPushButton(page_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(600, 20, 111, 41));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        pushButton_10 = new QPushButton(page_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(730, 20, 111, 41));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        pushButton_17 = new QPushButton(page_2);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(340, 22, 111, 41));
        pushButton_17->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #4682B4, stop:1 #87CEEB); /* D\303\251grad\303\251 de bleu acier \303\240 bleu ciel */\n"
"    border: none; /* Suppression de la bordure pour un look \303\251pur\303\251 */\n"
"    border-radius: 15px; /* Bordures arrondies pour un design moderne */\n"
"    font-size: 16px; /* Taille de police pour une meilleure lisibilit\303\251 */\n"
"    color: white; /* Texte en blanc pour un bon contraste */\n"
"    padding: 12px 24px; /* Espacement interne pour un bouton plus grand et plus confortable */\n"
"    box-shadow: 0 5px 15px rgba(0, 0, 128, 0.3); /* Ombre bleue subtile pour un effet 3D l\303\251ger */\n"
"    transition: background-color 0.3s, transform 0.3s; /* Transition pour les effets de survol et de clic */\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                   "
                        "   stop:0 #5A9BD5, stop:1 #B0E0E6); /* D\303\251grad\303\251 plus clair au survol */\n"
"    transform: scale(1.05); /* L\303\251g\303\250re augmentation de la taille au survol pour un effet interactif */\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                      stop:0 #1E90FF, stop:1 #4682B4); /* D\303\251grad\303\251 plus fonc\303\251 lors du clic */\n"
"    transform: scale(0.98); /* L\303\251g\303\250re r\303\251duction de la taille lors du clic pour un effet de pression */\n"
"}\n"
""));
        Glob->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1066, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        Glob->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        add->setText(QApplication::translate("MainWindow", "add", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "prenom", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "email", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "telephone", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "domaine", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "description", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "page d ajout de formateur ", Q_NULLPTR));
        upp->setText(QApplication::translate("MainWindow", "mise a jour", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "afichage de formateur", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("MainWindow", "pdf", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("MainWindow", "stat", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "tri id croi", Q_NULLPTR)
         << QApplication::translate("MainWindow", "tri id decr", Q_NULLPTR)
        );
        saveFormateur->setText(QApplication::translate("MainWindow", "save", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "description", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "email", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "prenom", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", "telephone", Q_NULLPTR));
        label_34->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        label_35->setText(QApplication::translate("MainWindow", "domaine", Q_NULLPTR));
        label_36->setText(QApplication::translate("MainWindow", "id", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "page de modification de formateur", Q_NULLPTR));
        pushButtonSend->setText(QApplication::translate("MainWindow", "envoyer", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "formation", Q_NULLPTR));
        label_13->setText(QString());
        pushButton_6->setText(QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("MainWindow", "ChatBot", Q_NULLPTR));
        add_2->setText(QApplication::translate("MainWindow", "add", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "id formateur", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "desc", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "prix", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "lieu", Q_NULLPTR));
        label_37->setText(QApplication::translate("MainWindow", "page d ajout de formation ", Q_NULLPTR));
        modifierformation->setText(QApplication::translate("MainWindow", "save", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "id formateur", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "lieu", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "desc", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "prix", Q_NULLPTR));
        label_39->setText(QApplication::translate("MainWindow", "Page De Modification ", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "id formation", Q_NULLPTR));
        upp_2->setText(QApplication::translate("MainWindow", "mise a jour ", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        label_38->setText(QApplication::translate("MainWindow", "Formations disponibles", Q_NULLPTR));
        sortComboBox->clear();
        sortComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "croi", Q_NULLPTR)
         << QApplication::translate("MainWindow", "dec", Q_NULLPTR)
        );
        pushButton_11->setText(QApplication::translate("MainWindow", "stat", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainWindow", "pfd", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        qr->setText(QString());
        pushButton_16->setText(QApplication::translate("MainWindow", "gerer le code QR", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "click deux fois pour choisir la formation ", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "formateur", Q_NULLPTR));
        label_10->setText(QString());
        pushButton_8->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("MainWindow", "code QR", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
