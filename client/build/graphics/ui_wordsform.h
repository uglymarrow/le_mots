/********************************************************************************
** Form generated from reading UI file 'wordsform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORDSFORM_H
#define UI_WORDSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WordsForm
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *exitButton;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QListWidget *listWidget;

    void setupUi(QWidget *WordsForm)
    {
        if (WordsForm->objectName().isEmpty())
            WordsForm->setObjectName(QStringLiteral("WordsForm"));
        WordsForm->resize(798, 581);
        verticalLayoutWidget = new QWidget(WordsForm);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 30, 701, 501));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        exitButton = new QPushButton(verticalLayoutWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));

        horizontalLayout->addWidget(exitButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(label_2);

        listWidget = new QListWidget(verticalLayoutWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);


        retranslateUi(WordsForm);

        QMetaObject::connectSlotsByName(WordsForm);
    } // setupUi

    void retranslateUi(QWidget *WordsForm)
    {
        WordsForm->setWindowTitle(QApplication::translate("WordsForm", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("WordsForm", "\320\241\320\273\320\276\320\262\320\260 \320\270\320\267 \321\201\320\273\320\276\320\262", Q_NULLPTR));
        exitButton->setText(QApplication::translate("WordsForm", "\320\235\320\260\320\267\320\260\320\264", Q_NULLPTR));
        pushButton->setText(QApplication::translate("WordsForm", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\271 \320\272\320\276\320\274\320\275\320\260\321\202\321\213", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("WordsForm", "\320\237\321\200\320\270\321\201\320\276\320\265\320\264\320\270\320\275\320\270\321\202\321\214\321\201\321\217 \320\272 \321\201\320\273\321\203\321\207\320\260\320\271\320\275\320\276\320\271 \320\272\320\276\320\274\320\275\320\260\321\202\320\265", Q_NULLPTR));
        label_2->setText(QApplication::translate("WordsForm", "\320\220\320\272\321\202\320\270\320\262\320\275\321\213\320\265 \320\272\320\276\320\274\320\275\320\260\321\202\321\213:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WordsForm: public Ui_WordsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORDSFORM_H
