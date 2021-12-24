/********************************************************************************
** Form generated from reading UI file 'waitingform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITINGFORM_H
#define UI_WAITINGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WaitingForm
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLabel *roomNumberLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;

    void setupUi(QWidget *WaitingForm)
    {
        if (WaitingForm->objectName().isEmpty())
            WaitingForm->setObjectName(QStringLiteral("WaitingForm"));
        WaitingForm->resize(510, 339);
        verticalLayoutWidget = new QWidget(WaitingForm);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 20, 441, 301));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font: 12pt \"Sans Serif\";"));

        horizontalLayout->addWidget(label_2);

        roomNumberLabel = new QLabel(verticalLayoutWidget);
        roomNumberLabel->setObjectName(QStringLiteral("roomNumberLabel"));
        roomNumberLabel->setStyleSheet(QStringLiteral("font: 12pt \"Sans Serif\";"));

        horizontalLayout->addWidget(roomNumberLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 18pt \"Sans Serif\";\n"
"background-color: rgb(230, 211, 250);"));

        verticalLayout->addWidget(label);


        retranslateUi(WaitingForm);

        QMetaObject::connectSlotsByName(WaitingForm);
    } // setupUi

    void retranslateUi(QWidget *WaitingForm)
    {
        WaitingForm->setWindowTitle(QApplication::translate("WaitingForm", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("WaitingForm", "\320\232\320\276\320\274\320\275\320\260\321\202\320\260 \342\204\226", Q_NULLPTR));
        roomNumberLabel->setText(QApplication::translate("WaitingForm", "0", Q_NULLPTR));
        label->setText(QApplication::translate("WaitingForm", "<html><head/><body><p align=\"center\">\320\226\320\264\321\221\320\274 \321\201\320\276\320\277\320\265\321\200\320\275\320\270\320\272\320\260...</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WaitingForm: public Ui_WaitingForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITINGFORM_H
