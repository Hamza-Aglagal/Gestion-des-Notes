/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Username;
    QLineEdit *lineEdit_Username;
    QHBoxLayout *horizontalLayout;
    QLabel *Password;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *label_Login;
    QLabel *label_Picture2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1120, 762);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(320, 70, 501, 251));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(221, 221, 221, 255), stop:0.733051 rgba(239, 239, 239, 255), stop:0.940678 rgba(235, 235, 235, 255));"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Username = new QLabel(groupBox);
        Username->setObjectName(QString::fromUtf8("Username"));

        horizontalLayout_2->addWidget(Username);

        lineEdit_Username = new QLineEdit(groupBox);
        lineEdit_Username->setObjectName(QString::fromUtf8("lineEdit_Username"));

        horizontalLayout_2->addWidget(lineEdit_Username);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Password = new QLabel(groupBox);
        Password->setObjectName(QString::fromUtf8("Password"));

        horizontalLayout->addWidget(Password);

        lineEdit_Password = new QLineEdit(groupBox);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEdit_Password);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setPointSize(13);
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);

        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(320, 330, 501, 132));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(221, 221, 221, 255), stop:0.733051 rgba(239, 239, 239, 255), stop:0.940678 rgba(235, 235, 235, 255));"));

        horizontalLayout_3->addWidget(label);

        label_Login = new QLabel(layoutWidget);
        label_Login->setObjectName(QString::fromUtf8("label_Login"));
        label_Login->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(221, 221, 221, 255), stop:0.733051 rgba(239, 239, 239, 255), stop:0.940678 rgba(235, 235, 235, 255));"));

        horizontalLayout_3->addWidget(label_Login);

        label_Picture2 = new QLabel(Widget);
        label_Picture2->setObjectName(QString::fromUtf8("label_Picture2"));
        label_Picture2->setGeometry(QRect(40, 0, 1120, 762));
        label_Picture2->raise();
        groupBox->raise();
        layoutWidget->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QApplication::translate("Widget", "SingIn", nullptr));
        Username->setText(QApplication::translate("Widget", "Username", nullptr));
        Password->setText(QApplication::translate("Widget", "Password", nullptr));
        pushButton->setText(QApplication::translate("Widget", "Login", nullptr));
        label->setText(QApplication::translate("Widget", "  Status ++ ", nullptr));
        label_Login->setText(QApplication::translate("Widget", "Statue : ++", nullptr));
        label_Picture2->setText(QApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
