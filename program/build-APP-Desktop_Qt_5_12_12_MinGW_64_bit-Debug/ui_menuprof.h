/********************************************************************************
** Form generated from reading UI file 'menuprof.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUPROF_H
#define UI_MENUPROF_H

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

class Ui_menuProf
{
public:
    QLabel *label_Picture;
    QTabWidget *tabWidget;
    QWidget *tab_Notes;
    QWidget *widget_2;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_20;
    QLineEdit *texte_CNE_Etudiant_2;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_21;
    QLineEdit *texte_Id_Matier_2;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_22;
    QLineEdit *texte_Note_2;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_14;
    QDateTimeEdit *Date;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_28;
    QPushButton *pushButton_ajouter_6;
    QPushButton *pushButton_supprimer_6;
    QPushButton *pushButton_afficher_6;
    QTableView *tableView;
    QTableView *tableView_2;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_30;
    QPushButton *pushButton_All_Etudiant_8;
    QPushButton *pushButton_All_Matiers_8;

    void setupUi(QDialog *menuProf)
    {
        if (menuProf->objectName().isEmpty())
            menuProf->setObjectName(QString::fromUtf8("menuProf"));
        menuProf->resize(1120, 762);
        menuProf->setStyleSheet(QString::fromUtf8(""));
        label_Picture = new QLabel(menuProf);
        label_Picture->setObjectName(QString::fromUtf8("label_Picture"));
        label_Picture->setGeometry(QRect(10, 0, 141, 71));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        label_Picture->setFont(font);
        tabWidget = new QTabWidget(menuProf);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(190, 50, 701, 341));
        tabWidget->setMaximumSize(QSize(16777215, 341));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab_Notes = new QWidget();
        tab_Notes->setObjectName(QString::fromUtf8("tab_Notes"));
        tab_Notes->setEnabled(true);
        widget_2 = new QWidget(tab_Notes);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 691, 321));
        groupBox_6 = new QGroupBox(widget_2);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(60, 0, 591, 231));
        verticalLayout_6 = new QVBoxLayout(groupBox_6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        label_20 = new QLabel(groupBox_6);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_25->addWidget(label_20);

        texte_CNE_Etudiant_2 = new QLineEdit(groupBox_6);
        texte_CNE_Etudiant_2->setObjectName(QString::fromUtf8("texte_CNE_Etudiant_2"));

        horizontalLayout_25->addWidget(texte_CNE_Etudiant_2);


        verticalLayout_6->addLayout(horizontalLayout_25);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        label_21 = new QLabel(groupBox_6);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_26->addWidget(label_21);

        texte_Id_Matier_2 = new QLineEdit(groupBox_6);
        texte_Id_Matier_2->setObjectName(QString::fromUtf8("texte_Id_Matier_2"));

        horizontalLayout_26->addWidget(texte_Id_Matier_2);


        verticalLayout_6->addLayout(horizontalLayout_26);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_27->addWidget(label_22);

        texte_Note_2 = new QLineEdit(groupBox_6);
        texte_Note_2->setObjectName(QString::fromUtf8("texte_Note_2"));

        horizontalLayout_27->addWidget(texte_Note_2);


        verticalLayout_6->addLayout(horizontalLayout_27);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_14 = new QLabel(groupBox_6);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setTextFormat(Qt::AutoText);

        horizontalLayout_17->addWidget(label_14);

        Date = new QDateTimeEdit(groupBox_6);
        Date->setObjectName(QString::fromUtf8("Date"));
        Date->setEnabled(true);
        Date->setMouseTracking(false);
        Date->setWrapping(false);
        Date->setAlignment(Qt::AlignCenter);
        Date->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        Date->setAccelerated(false);
        Date->setProperty("showGroupSeparator", QVariant(false));
        Date->setCalendarPopup(true);

        horizontalLayout_17->addWidget(Date);


        verticalLayout_6->addLayout(horizontalLayout_17);

        horizontalLayoutWidget_6 = new QWidget(widget_2);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(70, 230, 371, 71));
        horizontalLayout_28 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        horizontalLayout_28->setContentsMargins(0, 0, 0, 0);
        pushButton_ajouter_6 = new QPushButton(horizontalLayoutWidget_6);
        pushButton_ajouter_6->setObjectName(QString::fromUtf8("pushButton_ajouter_6"));

        horizontalLayout_28->addWidget(pushButton_ajouter_6);

        pushButton_supprimer_6 = new QPushButton(horizontalLayoutWidget_6);
        pushButton_supprimer_6->setObjectName(QString::fromUtf8("pushButton_supprimer_6"));

        horizontalLayout_28->addWidget(pushButton_supprimer_6);

        pushButton_afficher_6 = new QPushButton(horizontalLayoutWidget_6);
        pushButton_afficher_6->setObjectName(QString::fromUtf8("pushButton_afficher_6"));

        horizontalLayout_28->addWidget(pushButton_afficher_6);

        tabWidget->addTab(tab_Notes, QString());
        tableView = new QTableView(menuProf);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 410, 531, 341));
        tableView_2 = new QTableView(menuProf);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(570, 410, 541, 341));
        horizontalLayoutWidget_7 = new QWidget(menuProf);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(890, 360, 221, 71));
        horizontalLayout_30 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_30->setSpacing(6);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        horizontalLayout_30->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_30->setContentsMargins(0, 0, 0, 3);
        pushButton_All_Etudiant_8 = new QPushButton(horizontalLayoutWidget_7);
        pushButton_All_Etudiant_8->setObjectName(QString::fromUtf8("pushButton_All_Etudiant_8"));

        horizontalLayout_30->addWidget(pushButton_All_Etudiant_8);

        pushButton_All_Matiers_8 = new QPushButton(horizontalLayoutWidget_7);
        pushButton_All_Matiers_8->setObjectName(QString::fromUtf8("pushButton_All_Matiers_8"));

        horizontalLayout_30->addWidget(pushButton_All_Matiers_8);


        retranslateUi(menuProf);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(menuProf);
    } // setupUi

    void retranslateUi(QDialog *menuProf)
    {
        menuProf->setWindowTitle(QApplication::translate("menuProf", "Dialog", nullptr));
        label_Picture->setText(QApplication::translate("menuProf", "Pofesseur", nullptr));
        groupBox_6->setTitle(QString());
        label_20->setText(QApplication::translate("menuProf", "CNE", nullptr));
        texte_CNE_Etudiant_2->setInputMask(QString());
        texte_CNE_Etudiant_2->setText(QString());
        label_21->setText(QApplication::translate("menuProf", "Id de la mati\303\250re", nullptr));
        label_22->setText(QApplication::translate("menuProf", "La note", nullptr));
        label_14->setText(QApplication::translate("menuProf", "Date d'evaluation", nullptr));
        Date->setDisplayFormat(QApplication::translate("menuProf", "dd/MM/yyyy ", nullptr));
        pushButton_ajouter_6->setText(QApplication::translate("menuProf", "Ajouter", nullptr));
        pushButton_supprimer_6->setText(QApplication::translate("menuProf", "Supprimer", nullptr));
        pushButton_afficher_6->setText(QApplication::translate("menuProf", "Afficher ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Notes), QApplication::translate("menuProf", "Ajouter Notes", nullptr));
        pushButton_All_Etudiant_8->setText(QApplication::translate("menuProf", "Etudiants", nullptr));
        pushButton_All_Matiers_8->setText(QApplication::translate("menuProf", "Matieres", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menuProf: public Ui_menuProf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPROF_H
