/********************************************************************************
** Form generated from reading UI file 'roomform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMFORM_H
#define UI_ROOMFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RoomForm
{
public:
    QLabel *label_5;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *timeLabel;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_7;
    QLabel *roundWord;
    QLabel *label_4;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *roomNumlabel;
    QPushButton *exitButton;
    QTextBrowser *playersWords;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QLabel *msgLabel;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;

    void setupUi(QWidget *RoomForm)
    {
        if (RoomForm->objectName().isEmpty())
            RoomForm->setObjectName(QStringLiteral("RoomForm"));
        RoomForm->resize(824, 523);
        label_5 = new QLabel(RoomForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(400, 200, 211, 41));
        gridLayoutWidget_2 = new QWidget(RoomForm);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 784, 501));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        timeLabel = new QLabel(gridLayoutWidget_2);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Sans Serif"));
        font.setPointSize(15);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        timeLabel->setFont(font);
        timeLabel->setStyleSheet(QStringLiteral("font: 15pt \"Sans Serif\";"));

        gridLayout_2->addWidget(timeLabel, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("font: 14pt \"Sans Serif\";"));

        verticalLayout->addWidget(label_9);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("font: 14pt \"Sans Serif\";"));

        verticalLayout->addWidget(label_10);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QStringLiteral("font: 14pt \"Sans Serif\";"));

        verticalLayout_2->addWidget(label_11);

        label_12 = new QLabel(gridLayoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QStringLiteral("font: 14pt \"Sans Serif\";"));

        verticalLayout_2->addWidget(label_12);


        horizontalLayout_2->addLayout(verticalLayout_2);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 2, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("font: 14pt \"Sans Serif\";"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        roundWord = new QLabel(gridLayoutWidget_2);
        roundWord->setObjectName(QStringLiteral("roundWord"));
        QFont font1;
        font1.setFamily(QStringLiteral("Umpush"));
        font1.setPointSize(28);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        roundWord->setFont(font1);
        roundWord->setStyleSheet(QLatin1String("font: 28pt \"Umpush\";\n"
"color: rgb(114, 41, 154);\n"
""));

        gridLayout_2->addWidget(roundWord, 3, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font: 14pt \"Sans Serif\";"));

        gridLayout_2->addWidget(label_4, 5, 2, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("font: 14pt \"Sans Serif\";"));

        gridLayout_2->addWidget(label_8, 2, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 14pt \"Sans Serif\";"));

        horizontalLayout->addWidget(label);

        roomNumlabel = new QLabel(gridLayoutWidget_2);
        roomNumlabel->setObjectName(QStringLiteral("roomNumlabel"));
        roomNumlabel->setStyleSheet(QStringLiteral("font: 14pt \"Sans Serif\";"));

        horizontalLayout->addWidget(roomNumlabel);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        exitButton = new QPushButton(gridLayoutWidget_2);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        QFont font2;
        font2.setPointSize(12);
        exitButton->setFont(font2);
        exitButton->setStyleSheet(QStringLiteral("background-color: rgb(230, 211, 250);"));

        gridLayout_2->addWidget(exitButton, 0, 2, 1, 1);

        playersWords = new QTextBrowser(gridLayoutWidget_2);
        playersWords->setObjectName(QStringLiteral("playersWords"));
        QFont font3;
        font3.setPointSize(13);
        playersWords->setFont(font3);
        playersWords->setStyleSheet(QStringLiteral("border :  2px solid rgb(132, 82, 206);"));

        gridLayout_2->addWidget(playersWords, 6, 2, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        msgLabel = new QLabel(gridLayoutWidget_2);
        msgLabel->setObjectName(QStringLiteral("msgLabel"));
        msgLabel->setStyleSheet(QLatin1String("font: 14pt \"Sans Serif\";\n"
"background-color: rgb(230, 211, 250);"));

        verticalLayout_3->addWidget(msgLabel);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font: 14pt \"Sans Serif\";"));

        verticalLayout_3->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEdit = new QLineEdit(gridLayoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font4;
        font4.setPointSize(16);
        lineEdit->setFont(font4);
        lineEdit->setStyleSheet(QStringLiteral("border :  2px solid rgb(132, 82, 206);"));

        horizontalLayout_3->addWidget(lineEdit);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_2);

        pushButton = new QPushButton(gridLayoutWidget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font5;
        font5.setPointSize(14);
        pushButton->setFont(font5);
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(230, 211, 250);"));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_3);


        gridLayout_2->addLayout(verticalLayout_3, 6, 0, 1, 1);


        retranslateUi(RoomForm);

        QMetaObject::connectSlotsByName(RoomForm);
    } // setupUi

    void retranslateUi(QWidget *RoomForm)
    {
        RoomForm->setWindowTitle(QApplication::translate("RoomForm", "Form", Q_NULLPTR));
        label_5->setText(QString());
        timeLabel->setText(QApplication::translate("RoomForm", "<html><head/><body><p align=\"center\">00:00</p></body></html>", Q_NULLPTR));
        label_9->setText(QApplication::translate("RoomForm", "<html><head/><body><p>\320\230\320\263\321\200\320\276\320\272 1</p></body></html>", Q_NULLPTR));
        label_10->setText(QApplication::translate("RoomForm", "<html><head/><body><p>\320\230\320\263\321\200\320\276\320\272 2</p></body></html>", Q_NULLPTR));
        label_11->setText(QApplication::translate("RoomForm", "<html><head/><body><p>0</p></body></html>", Q_NULLPTR));
        label_12->setText(QApplication::translate("RoomForm", "<html><head/><body><p>0</p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("RoomForm", "\320\241\320\273\320\276\320\262\320\276 \321\200\320\260\321\203\320\275\320\264\320\260:", Q_NULLPTR));
        roundWord->setText(QApplication::translate("RoomForm", "\320\241\320\273\320\276\320\262\320\276 \321\200\320\260\321\203\320\275\320\264\320\260", Q_NULLPTR));
        label_4->setText(QApplication::translate("RoomForm", "\320\222\320\260\321\210\320\270 \321\201\320\273\320\276\320\262\320\260:", Q_NULLPTR));
        label_8->setText(QApplication::translate("RoomForm", "<html><head/><body><p align=\"center\">\320\230\320\263\321\200\320\276\320\272\320\270:</p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("RoomForm", "\320\241\320\273\320\276\320\262\320\260 \320\270\320\267 \321\201\320\273\320\276\320\262. \320\232\320\276\320\274\320\275\320\260\321\202\320\260 \342\204\226 ", Q_NULLPTR));
        roomNumlabel->setText(QApplication::translate("RoomForm", "0", Q_NULLPTR));
        exitButton->setText(QApplication::translate("RoomForm", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \320\272\320\276\320\274\320\275\320\260\321\202\321\213", Q_NULLPTR));
        msgLabel->setText(QApplication::translate("RoomForm", "\320\241\320\273\320\276\320\262\320\276 \320\275\320\265\320\262\320\265\321\200\320\275\320\276!", Q_NULLPTR));
        label_3->setText(QApplication::translate("RoomForm", "\320\222\320\265\320\264\320\270\321\202\320\265 \321\201\320\273\320\276\320\262\320\276:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("RoomForm", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RoomForm: public Ui_RoomForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMFORM_H
