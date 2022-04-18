/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "my_gl.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QLabel *rotate_y_label;
    QLabel *rotate_z_label;
    QLabel *label_2;
    QLabel *rotate_x_label;
    MyGL *openGLWidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_3;
    QSlider *TranslateXbar;
    QSlider *TranslateYbar;
    QSlider *TranslateZbar;
    QSlider *x_rot_slider;
    QSlider *y_rot_slider;
    QSlider *z_rot_slider;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setHorizontalSpacing(2);
        gridLayout_2->setVerticalSpacing(1);
        rotate_y_label = new QLabel(centralWidget);
        rotate_y_label->setObjectName(QString::fromUtf8("rotate_y_label"));

        gridLayout_2->addWidget(rotate_y_label, 6, 1, 1, 1);

        rotate_z_label = new QLabel(centralWidget);
        rotate_z_label->setObjectName(QString::fromUtf8("rotate_z_label"));

        gridLayout_2->addWidget(rotate_z_label, 7, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 1, 1, 1);

        rotate_x_label = new QLabel(centralWidget);
        rotate_x_label->setObjectName(QString::fromUtf8("rotate_x_label"));

        gridLayout_2->addWidget(rotate_x_label, 4, 1, 1, 1);

        openGLWidget = new MyGL(centralWidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(openGLWidget->sizePolicy().hasHeightForWidth());
        openGLWidget->setSizePolicy(sizePolicy);
        openGLWidget->setBaseSize(QSize(0, 0));

        gridLayout_2->addWidget(openGLWidget, 0, 1, 1, 3);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 3, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 1, 1, 1);

        TranslateXbar = new QSlider(centralWidget);
        TranslateXbar->setObjectName(QString::fromUtf8("TranslateXbar"));
        TranslateXbar->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(TranslateXbar, 1, 2, 1, 1);

        TranslateYbar = new QSlider(centralWidget);
        TranslateYbar->setObjectName(QString::fromUtf8("TranslateYbar"));
        TranslateYbar->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(TranslateYbar, 2, 2, 1, 1);

        TranslateZbar = new QSlider(centralWidget);
        TranslateZbar->setObjectName(QString::fromUtf8("TranslateZbar"));
        TranslateZbar->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(TranslateZbar, 3, 2, 1, 1);

        x_rot_slider = new QSlider(centralWidget);
        x_rot_slider->setObjectName(QString::fromUtf8("x_rot_slider"));
        x_rot_slider->setMinimum(0);
        x_rot_slider->setMaximum(360);
        x_rot_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(x_rot_slider, 4, 2, 1, 1);

        y_rot_slider = new QSlider(centralWidget);
        y_rot_slider->setObjectName(QString::fromUtf8("y_rot_slider"));
        y_rot_slider->setMinimum(0);
        y_rot_slider->setMaximum(360);
        y_rot_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(y_rot_slider, 6, 2, 1, 1);

        z_rot_slider = new QSlider(centralWidget);
        z_rot_slider->setObjectName(QString::fromUtf8("z_rot_slider"));
        z_rot_slider->setMinimum(0);
        z_rot_slider->setMaximum(360);
        z_rot_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(z_rot_slider, 7, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Begin OpenGL", nullptr));
        rotate_y_label->setText(QCoreApplication::translate("MainWindow", "Rotate Y:", nullptr));
        rotate_z_label->setText(QCoreApplication::translate("MainWindow", "Rotate Z:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TranslateY", nullptr));
        rotate_x_label->setText(QCoreApplication::translate("MainWindow", "Rotate X:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TranslateZ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "TranslateX", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
