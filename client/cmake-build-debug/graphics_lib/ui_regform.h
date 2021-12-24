/********************************************************************************
** Form generated from reading UI file 'regform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGFORM_H
#define UI_REGFORM_H

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

class Ui_RegForm
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *exitButton;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QLineEdit *logEdit;
    QLabel *label_3;
    QLineEdit *pasEdit;
    QLabel *label_4;
    QLineEdit *pasRepitEdit;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *RegForm)
    {
        if (RegForm->objectName().isEmpty())
            RegForm->setObjectName(QStringLiteral("RegForm"));
        RegForm->resize(626, 443);
        verticalLayoutWidget = new QWidget(RegForm);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 20, 551, 401));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: italic 22pt \"Sans Serif\";"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        exitButton = new QPushButton(verticalLayoutWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        QFont font;
        font.setPointSize(12);
        exitButton->setFont(font);
        exitButton->setStyleSheet(QStringLiteral("font: italic 16pt \"Sans Serif\"; background-color: rgb(230, 211, 250);"));

        horizontalLayout->addWidget(exitButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font: italic 16pt \"Sans Serif\";"));

        verticalLayout->addWidget(label_2);

        logEdit = new QLineEdit(verticalLayoutWidget);
        logEdit->setObjectName(QStringLiteral("logEdit"));
        logEdit->setStyleSheet(QLatin1String("font: italic 14pt \"Sans Serif\";\n"
"border :  2px solid rgb(132, 82, 206);"));

        verticalLayout->addWidget(logEdit);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font: italic 16pt \"Sans Serif\";"));

        verticalLayout->addWidget(label_3);

        pasEdit = new QLineEdit(verticalLayoutWidget);
        pasEdit->setObjectName(QStringLiteral("pasEdit"));
        pasEdit->setStyleSheet(QLatin1String("font: italic 14pt \"Sans Serif\";\n"
"border :  2px solid rgb(132, 82, 206);"));

        verticalLayout->addWidget(pasEdit);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font:  italic 16pt \"Sans Serif\";"));

        verticalLayout->addWidget(label_4);

        pasRepitEdit = new QLineEdit(verticalLayoutWidget);
        pasRepitEdit->setObjectName(QStringLiteral("pasRepitEdit"));
        pasRepitEdit->setStyleSheet(QLatin1String("font: italic 14pt \"Sans Serif\";\n"
"border :  2px solid rgb(132, 82, 206);"));

        verticalLayout->addWidget(pasRepitEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(230, 211, 250);\n"
"font: italic 18pt \"Sans Serif\";\n"
""));

        verticalLayout->addWidget(pushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(RegForm);

        QMetaObject::connectSlotsByName(RegForm);
    } // setupUi

    void retranslateUi(QWidget *RegForm)
    {
        RegForm->setWindowTitle(QApplication::translate("RegForm", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("RegForm", "Le mots", Q_NULLPTR));
        exitButton->setText(QApplication::translate("RegForm", "\320\235\320\260\320\267\320\260\320\264", Q_NULLPTR));
        label_2->setText(QApplication::translate("RegForm", "   \320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\273\320\276\320\263\320\270\320\275", Q_NULLPTR));
        label_3->setText(QApplication::translate("RegForm", "   \320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", Q_NULLPTR));
        label_4->setText(QApplication::translate("RegForm", "   \320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", Q_NULLPTR));
        pushButton->setText(QApplication::translate("RegForm", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegForm: public Ui_RegForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGFORM_H
