/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QLabel *label_menu;
    QTabWidget *tabWidget;
    QWidget *tab_Etudiant;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *texte_CNE;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *texte_Nom;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *texte_prenom;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_13;
    QDateTimeEdit *DN;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_ajouter;
    QPushButton *pushButton_modifier;
    QPushButton *pushButton_supprimer;
    QPushButton *pushButton_afficher;
    QPushButton *pushButton;
    QWidget *tab_Matiere;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *texte_Id;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *texte_NameMatiere_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_ajouter_2;
    QPushButton *pushButton_supprimer_2;
    QPushButton *pushButton_afficher_2;
    QWidget *tab;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QLineEdit *texte_Id_Prof_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QLineEdit *texte_userName_prof_3;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_10;
    QLineEdit *texte_Password_Prof_5;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_ajouter_3;
    QPushButton *pushButton_supprimer_3;
    QPushButton *pushButton_afficher_3;
    QTableView *tableView;
    QLabel *label_Picture;

    void setupUi(QDialog *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(1120, 762);
        Menu->setMaximumSize(QSize(16777, 16777215));
        Menu->setStyleSheet(QString::fromUtf8(""));
        label_menu = new QLabel(Menu);
        label_menu->setObjectName(QString::fromUtf8("label_menu"));
        label_menu->setGeometry(QRect(30, 360, 91, 16));
        tabWidget = new QTabWidget(Menu);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(440, 30, 611, 311));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab_Etudiant = new QWidget();
        tab_Etudiant->setObjectName(QString::fromUtf8("tab_Etudiant"));
        groupBox = new QGroupBox(tab_Etudiant);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 451, 181));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        texte_CNE = new QLineEdit(groupBox);
        texte_CNE->setObjectName(QString::fromUtf8("texte_CNE"));

        horizontalLayout->addWidget(texte_CNE);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        texte_Nom = new QLineEdit(groupBox);
        texte_Nom->setObjectName(QString::fromUtf8("texte_Nom"));

        horizontalLayout_2->addWidget(texte_Nom);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        texte_prenom = new QLineEdit(groupBox);
        texte_prenom->setObjectName(QString::fromUtf8("texte_prenom"));

        horizontalLayout_3->addWidget(texte_prenom);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setTextFormat(Qt::AutoText);

        horizontalLayout_16->addWidget(label_13);

        DN = new QDateTimeEdit(groupBox);
        DN->setObjectName(QString::fromUtf8("DN"));
        DN->setEnabled(true);
        DN->setMouseTracking(false);
        DN->setWrapping(false);
        DN->setAlignment(Qt::AlignCenter);
        DN->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        DN->setAccelerated(false);
        DN->setProperty("showGroupSeparator", QVariant(false));
        DN->setCalendarPopup(true);

        horizontalLayout_16->addWidget(DN);


        horizontalLayout_4->addLayout(horizontalLayout_16);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayoutWidget = new QWidget(tab_Etudiant);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 230, 451, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_ajouter = new QPushButton(horizontalLayoutWidget);
        pushButton_ajouter->setObjectName(QString::fromUtf8("pushButton_ajouter"));

        horizontalLayout_5->addWidget(pushButton_ajouter);

        pushButton_modifier = new QPushButton(horizontalLayoutWidget);
        pushButton_modifier->setObjectName(QString::fromUtf8("pushButton_modifier"));

        horizontalLayout_5->addWidget(pushButton_modifier);

        pushButton_supprimer = new QPushButton(horizontalLayoutWidget);
        pushButton_supprimer->setObjectName(QString::fromUtf8("pushButton_supprimer"));

        horizontalLayout_5->addWidget(pushButton_supprimer);

        pushButton_afficher = new QPushButton(horizontalLayoutWidget);
        pushButton_afficher->setObjectName(QString::fromUtf8("pushButton_afficher"));

        horizontalLayout_5->addWidget(pushButton_afficher);

        pushButton = new QPushButton(tab_Etudiant);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 200, 451, 25));
        tabWidget->addTab(tab_Etudiant, QString());
        tab_Matiere = new QWidget();
        tab_Matiere->setObjectName(QString::fromUtf8("tab_Matiere"));
        groupBox_2 = new QGroupBox(tab_Matiere);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 20, 441, 181));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6);

        texte_Id = new QLineEdit(groupBox_2);
        texte_Id->setObjectName(QString::fromUtf8("texte_Id"));
        texte_Id->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_8->addWidget(texte_Id);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        texte_NameMatiere_2 = new QLineEdit(groupBox_2);
        texte_NameMatiere_2->setObjectName(QString::fromUtf8("texte_NameMatiere_2"));
        texte_NameMatiere_2->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(texte_NameMatiere_2);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayoutWidget_2 = new QWidget(tab_Matiere);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 220, 451, 41));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        pushButton_ajouter_2 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_ajouter_2->setObjectName(QString::fromUtf8("pushButton_ajouter_2"));

        horizontalLayout_10->addWidget(pushButton_ajouter_2);

        pushButton_supprimer_2 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_supprimer_2->setObjectName(QString::fromUtf8("pushButton_supprimer_2"));

        horizontalLayout_10->addWidget(pushButton_supprimer_2);

        pushButton_afficher_2 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_afficher_2->setObjectName(QString::fromUtf8("pushButton_afficher_2"));

        horizontalLayout_10->addWidget(pushButton_afficher_2);

        tabWidget->addTab(tab_Matiere, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 20, 571, 181));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_9->addWidget(label_7);

        texte_Id_Prof_2 = new QLineEdit(groupBox_3);
        texte_Id_Prof_2->setObjectName(QString::fromUtf8("texte_Id_Prof_2"));
        texte_Id_Prof_2->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_9->addWidget(texte_Id_Prof_2);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_11->addWidget(label_8);

        texte_userName_prof_3 = new QLineEdit(groupBox_3);
        texte_userName_prof_3->setObjectName(QString::fromUtf8("texte_userName_prof_3"));
        texte_userName_prof_3->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_11->addWidget(texte_userName_prof_3);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_13->addWidget(label_10);

        texte_Password_Prof_5 = new QLineEdit(groupBox_3);
        texte_Password_Prof_5->setObjectName(QString::fromUtf8("texte_Password_Prof_5"));
        texte_Password_Prof_5->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_13->addWidget(texte_Password_Prof_5);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayoutWidget_3 = new QWidget(tab);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 220, 561, 41));
        horizontalLayout_12 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        pushButton_ajouter_3 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_ajouter_3->setObjectName(QString::fromUtf8("pushButton_ajouter_3"));

        horizontalLayout_12->addWidget(pushButton_ajouter_3);

        pushButton_supprimer_3 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_supprimer_3->setObjectName(QString::fromUtf8("pushButton_supprimer_3"));

        horizontalLayout_12->addWidget(pushButton_supprimer_3);

        pushButton_afficher_3 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_afficher_3->setObjectName(QString::fromUtf8("pushButton_afficher_3"));

        horizontalLayout_12->addWidget(pushButton_afficher_3);

        tabWidget->addTab(tab, QString());
        tableView = new QTableView(Menu);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 410, 1071, 341));
        label_Picture = new QLabel(Menu);
        label_Picture->setObjectName(QString::fromUtf8("label_Picture"));
        label_Picture->setGeometry(QRect(60, 60, 351, 251));

        retranslateUi(Menu);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QDialog *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Dialog", nullptr));
        label_menu->setText(QApplication::translate("Menu", "Statue : ++", nullptr));
        groupBox->setTitle(QApplication::translate("Menu", "Cordonn\303\251es", nullptr));
        label->setText(QApplication::translate("Menu", "CNE  ", nullptr));
        texte_CNE->setInputMask(QString());
        texte_CNE->setText(QString());
        label_2->setText(QApplication::translate("Menu", "Nom ", nullptr));
        label_3->setText(QApplication::translate("Menu", "Pr\303\251nom", nullptr));
        label_13->setText(QApplication::translate("Menu", "Date de naissance\342\200\216", nullptr));
        DN->setDisplayFormat(QApplication::translate("Menu", "dd/MM/yyyy ", nullptr));
        pushButton_ajouter->setText(QApplication::translate("Menu", "Ajouter", nullptr));
        pushButton_modifier->setText(QApplication::translate("Menu", "Modifier", nullptr));
        pushButton_supprimer->setText(QApplication::translate("Menu", "Supprimer", nullptr));
        pushButton_afficher->setText(QApplication::translate("Menu", "Afficher ", nullptr));
        pushButton->setText(QApplication::translate("Menu", "Etudiant", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Etudiant), QApplication::translate("Menu", "\303\211tudiant", nullptr));
        groupBox_2->setTitle(QApplication::translate("Menu", "Ajouter Matiere", nullptr));
        label_6->setText(QApplication::translate("Menu", "id", nullptr));
        label_5->setText(QApplication::translate("Menu", "Name", nullptr));
        pushButton_ajouter_2->setText(QApplication::translate("Menu", "Ajouter", nullptr));
        pushButton_supprimer_2->setText(QApplication::translate("Menu", "Supprimer", nullptr));
        pushButton_afficher_2->setText(QApplication::translate("Menu", "Afficher ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Matiere), QApplication::translate("Menu", "Mati\303\250re ", nullptr));
        groupBox_3->setTitle(QApplication::translate("Menu", "Ajouter Professeur", nullptr));
        label_7->setText(QApplication::translate("Menu", "id", nullptr));
        label_8->setText(QApplication::translate("Menu", "user name", nullptr));
        label_10->setText(QApplication::translate("Menu", "password", nullptr));
        pushButton_ajouter_3->setText(QApplication::translate("Menu", "Ajouter", nullptr));
        pushButton_supprimer_3->setText(QApplication::translate("Menu", "Supprimer", nullptr));
        pushButton_afficher_3->setText(QApplication::translate("Menu", "Afficher ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Menu", "Professeur", nullptr));
        label_Picture->setText(QApplication::translate("Menu", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
