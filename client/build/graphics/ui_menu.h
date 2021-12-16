/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

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

class Ui_MenuForm
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *exitButton;
    QLabel *label_2;
    QLabel *loginLabel;
    QLabel *label_4;
    QLabel *ratingLabel;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *wordsButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;

    void setupUi(QWidget *MenuForm)
    {
        if (MenuForm->objectName().isEmpty())
            MenuForm->setObjectName(QStringLiteral("MenuForm"));
        MenuForm->resize(858, 512);
        verticalLayoutWidget = new QWidget(MenuForm);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 10, 821, 481));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        exitButton = new QPushButton(verticalLayoutWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));

        horizontalLayout->addWidget(exitButton);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        loginLabel = new QLabel(verticalLayoutWidget);
        loginLabel->setObjectName(QStringLiteral("loginLabel"));

        verticalLayout->addWidget(loginLabel);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        ratingLabel = new QLabel(verticalLayoutWidget);
        ratingLabel->setObjectName(QStringLiteral("ratingLabel"));

        verticalLayout->addWidget(ratingLabel);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        wordsButton = new QPushButton(verticalLayoutWidget);
        wordsButton->setObjectName(QStringLiteral("wordsButton"));
        wordsButton->setIconSize(QSize(30, 20));

        horizontalLayout_2->addWidget(wordsButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setIconSize(QSize(30, 20));

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setIconSize(QSize(30, 20));

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8);


        horizontalLayout_3->addLayout(verticalLayout_2);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setAutoDefault(false);

        verticalLayout->addWidget(pushButton_4);


        retranslateUi(MenuForm);

        pushButton_4->setDefault(false);


        QMetaObject::connectSlotsByName(MenuForm);
    } // setupUi

    void retranslateUi(QWidget *MenuForm)
    {
        MenuForm->setWindowTitle(QApplication::translate("MenuForm", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("MenuForm", "Le mots", Q_NULLPTR));
        exitButton->setText(QApplication::translate("MenuForm", "\320\222\321\213\320\271\321\202\320\270", Q_NULLPTR));
        label_2->setText(QApplication::translate("MenuForm", "\320\233\320\276\320\263\320\270\320\275", Q_NULLPTR));
        loginLabel->setText(QApplication::translate("MenuForm", "\320\233\320\276\320\263\320\270\320\275 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", Q_NULLPTR));
        label_4->setText(QApplication::translate("MenuForm", "\320\240\320\265\320\271\321\202\320\270\320\275\320\263", Q_NULLPTR));
        ratingLabel->setText(QApplication::translate("MenuForm", "\320\240\320\265\320\271\321\202\320\270\320\275\320\263 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", Q_NULLPTR));
        label_6->setText(QApplication::translate("MenuForm", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\270\320\263\321\200\321\203:", Q_NULLPTR));
        wordsButton->setText(QApplication::translate("MenuForm", "\320\241\320\273\320\276\320\262\320\260 \320\270\320\267 \321\201\320\273\320\276\320\262", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MenuForm", "\320\223\321\200\320\265\320\261\320\265\321\210\320\276\320\272", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MenuForm", "\320\235\320\260 \320\276\320\264\320\275\321\203 \320\261\321\203\320\272\320\262\321\203", Q_NULLPTR));
        label_7->setText(QApplication::translate("MenuForm", "\320\245\320\276\321\202\320\270\321\202\320\265 \320\277\320\276\320\277\320\260\321\201\321\202\321\214 \320\262 \320\276\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\275\321\203\321\216 \320\272\320\276\320\274\320\275\320\260\321\202\321\203?", Q_NULLPTR));
        label_8->setText(QApplication::translate("MenuForm", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 id \320\272\320\276\320\274\320\275\320\260\321\202\321\213:", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MenuForm", "\320\230\320\263\321\200\320\260\321\202\321\214!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MenuForm: public Ui_MenuForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
