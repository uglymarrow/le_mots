/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_7;
    QLabel *head_label_2;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_4;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QLabel *errLabel;
    QLabel *label_10;
    QLineEdit *logEdit;
    QLabel *label_11;
    QLineEdit *pasEdit;
    QSpacerItem *verticalSpacer;
    QPushButton *logButton;
    QPushButton *regButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName(QStringLiteral("LoginForm"));
        LoginForm->resize(883, 560);
        layoutWidget_3 = new QWidget(LoginForm);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(50, 10, 791, 501));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        head_label_2 = new QLabel(layoutWidget_3);
        head_label_2->setObjectName(QStringLiteral("head_label_2"));
        head_label_2->setStyleSheet(QStringLiteral("font: italic 22pt \"Sans Serif\";"));

        horizontalLayout_2->addWidget(head_label_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        label = new QLabel(layoutWidget_3);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font:  18pt \"Sans Serif\";"));
        label->setFrameShape(QFrame::NoFrame);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        errLabel = new QLabel(layoutWidget_3);
        errLabel->setObjectName(QStringLiteral("errLabel"));
        errLabel->setStyleSheet(QLatin1String("font:  16pt \"Sans Serif\";\n"
"background-color: rgb(230, 211, 250);"));

        verticalLayout_3->addWidget(errLabel);

        label_10 = new QLabel(layoutWidget_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("font:  italic 16pt \"Sans Serif\";"));

        verticalLayout_3->addWidget(label_10);

        logEdit = new QLineEdit(layoutWidget_3);
        logEdit->setObjectName(QStringLiteral("logEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(logEdit->sizePolicy().hasHeightForWidth());
        logEdit->setSizePolicy(sizePolicy);
        logEdit->setMinimumSize(QSize(789, 23));
        QFont font;
        font.setPointSize(14);
        logEdit->setFont(font);
        logEdit->setStyleSheet(QStringLiteral("border :  2px solid rgb(132, 82, 206);"));

        verticalLayout_3->addWidget(logEdit);

        label_11 = new QLabel(layoutWidget_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QStringLiteral("font:  italic 16pt \"Sans Serif\";"));

        verticalLayout_3->addWidget(label_11);

        pasEdit = new QLineEdit(layoutWidget_3);
        pasEdit->setObjectName(QStringLiteral("pasEdit"));
        sizePolicy.setHeightForWidth(pasEdit->sizePolicy().hasHeightForWidth());
        pasEdit->setSizePolicy(sizePolicy);
        pasEdit->setFont(font);
        pasEdit->setStyleSheet(QStringLiteral("border :  2px solid rgb(132, 82, 206);"));

        verticalLayout_3->addWidget(pasEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        logButton = new QPushButton(layoutWidget_3);
        logButton->setObjectName(QStringLiteral("logButton"));
        logButton->setStyleSheet(QLatin1String("font: italic 18pt \"Sans Serif\";\n"
"background-color: rgb(230, 211, 250);"));

        verticalLayout_3->addWidget(logButton);

        regButton = new QPushButton(layoutWidget_3);
        regButton->setObjectName(QStringLiteral("regButton"));
        regButton->setStyleSheet(QLatin1String("font: italic 18pt \"Sans Serif\";\n"
"background-color: rgb(230, 211, 250);"));

        verticalLayout_3->addWidget(regButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        retranslateUi(LoginForm);

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QWidget *LoginForm)
    {
        LoginForm->setWindowTitle(QApplication::translate("LoginForm", "Form", Q_NULLPTR));
        head_label_2->setText(QApplication::translate("LoginForm", "Le mots", Q_NULLPTR));
        label->setText(QApplication::translate("LoginForm", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\273\320\276\320\263\320\270\320\275 \320\270 \320\277\320\260\321\200\320\276\320\273\321\214, \320\265\321\201\320\273\320\270 \320\222\321\213 \321\203\320\266\320\265 \320\267\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\320\275\321\213", Q_NULLPTR));
        errLabel->setText(QApplication::translate("LoginForm", "<html><head/><body><p align=\"center\"><span style=\" font-style:italic;\">\320\236\321\210\320\270\320\261\320\272\320\260! \320\237\321\200\320\276\320\262\320\265\321\200\321\214\321\202\320\265 \320\273\320\276\320\263\320\270\320\275 \320\270 \320\277\320\260\321\200\320\276\320\273\321\214.</span></p></body></html>", Q_NULLPTR));
        label_10->setText(QApplication::translate("LoginForm", "    \320\233\320\276\320\263\320\270\320\275 :", Q_NULLPTR));
        label_11->setText(QApplication::translate("LoginForm", "    \320\237\320\260\321\200\320\276\320\273\321\214 :", Q_NULLPTR));
        logButton->setText(QApplication::translate("LoginForm", "\320\222\320\276\320\271\321\202\320\270", Q_NULLPTR));
        regButton->setText(QApplication::translate("LoginForm", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
