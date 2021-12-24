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
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *wordsButton;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *MenuForm)
    {
        if (MenuForm->objectName().isEmpty())
            MenuForm->setObjectName(QStringLiteral("MenuForm"));
        MenuForm->resize(479, 478);
        verticalLayoutWidget = new QWidget(MenuForm);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 10, 441, 391));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(22);
        font.setItalic(true);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        exitButton = new QPushButton(verticalLayoutWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        QFont font1;
        font1.setPointSize(12);
        exitButton->setFont(font1);
        exitButton->setStyleSheet(QStringLiteral("background-color: rgb(230, 211, 250);"));

        horizontalLayout->addWidget(exitButton);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font2;
        font2.setPointSize(16);
        label_2->setFont(font2);

        verticalLayout->addWidget(label_2);

        loginLabel = new QLabel(verticalLayoutWidget);
        loginLabel->setObjectName(QStringLiteral("loginLabel"));
        loginLabel->setFont(font2);

        verticalLayout->addWidget(loginLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        wordsButton = new QPushButton(verticalLayoutWidget);
        wordsButton->setObjectName(QStringLiteral("wordsButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(3);
        sizePolicy1.setHeightForWidth(wordsButton->sizePolicy().hasHeightForWidth());
        wordsButton->setSizePolicy(sizePolicy1);
        wordsButton->setMinimumSize(QSize(13, 17));
        QFont font3;
        font3.setPointSize(15);
        wordsButton->setFont(font3);
        wordsButton->setStyleSheet(QStringLiteral("background-color: rgb(230, 211, 250);"));
        wordsButton->setIconSize(QSize(30, 20));

        horizontalLayout_2->addWidget(wordsButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(MenuForm);

        QMetaObject::connectSlotsByName(MenuForm);
    } // setupUi

    void retranslateUi(QWidget *MenuForm)
    {
        MenuForm->setWindowTitle(QApplication::translate("MenuForm", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("MenuForm", "Le mots", Q_NULLPTR));
        exitButton->setText(QApplication::translate("MenuForm", "\320\222\321\213\320\271\321\202\320\270", Q_NULLPTR));
        label_2->setText(QApplication::translate("MenuForm", "    \320\233\320\276\320\263\320\270\320\275:", Q_NULLPTR));
        loginLabel->setText(QApplication::translate("MenuForm", "\320\233\320\276\320\263\320\270\320\275 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", Q_NULLPTR));
        wordsButton->setText(QApplication::translate("MenuForm", "\320\230\320\263\321\200\320\260\321\202\321\214!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MenuForm: public Ui_MenuForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
