#include "mainwindow.h"
#include "ui_mainwindow.h"

//#include <QDebug>
double firstNum;
bool userIsTypingSecondNumber = false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0, SIGNAL(released()), this, SLOT(digits_pressed()));
    connect(ui->pushButton_1, SIGNAL(released()), this, SLOT(digits_pressed()));
    connect(ui->pushButton_2, SIGNAL(released()), this, SLOT(digits_pressed()));
    connect(ui->pushButton_3, SIGNAL(released()), this, SLOT(digits_pressed()));
    connect(ui->pushButton_4, SIGNAL(released()), this, SLOT(digits_pressed()));
    connect(ui->pushButton_5, SIGNAL(released()), this, SLOT(digits_pressed()));
    connect(ui->pushButton_6, SIGNAL(released()), this, SLOT(digits_pressed()));
    connect(ui->pushButton_7, SIGNAL(released()), this, SLOT(digits_pressed()));
    connect(ui->pushButton_8, SIGNAL(released()), this, SLOT(digits_pressed()));
    connect(ui->pushButton_9, SIGNAL(released()), this, SLOT(digits_pressed()));

    connect(ui->pushButton_PlusMinus, SIGNAL(released()), this, SLOT(unary_operation_pressed()));
    connect(ui->pushButton_Percent, SIGNAL(released()), this, SLOT(unary_operation_pressed()));

    connect(ui->pushButton_addition, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
    connect(ui->pushButton_subtract, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
    connect(ui->pushButton_divide, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
    connect(ui->pushButton_multiply, SIGNAL(released()), this, SLOT(binary_operation_pressed()));

    ui->pushButton_addition->setCheckable(true);
    ui->pushButton_subtract->setCheckable(true);
    ui->pushButton_divide->setCheckable(true);
    ui->pushButton_multiply->setCheckable(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_pressed(){
//    qDebug() << "test";
    QPushButton* button = (QPushButton*)sender();
    double labelNumber;
    QString newLabel;

    if((ui->pushButton_addition->isChecked() || ui->pushButton_subtract->isChecked() || ui->pushButton_divide->isChecked()
        || ui->pushButton_multiply->isChecked()) && (!userIsTypingSecondNumber)){

        labelNumber = button->text().toDouble();
        userIsTypingSecondNumber = true;
        newLabel = QString::number(labelNumber,'g',15);

    }else{
        if(ui->label->text().contains('.') && button->text() == "0"){
            newLabel = ui->label->text() + button->text();
        }else{
            labelNumber = (ui->label->text() + button->text()).toDouble();
             newLabel = QString::number(labelNumber,'g',15);
        }
    }

    ui->label->setText(newLabel);
}

void MainWindow::on_pushButton_Decimal_released(){
    ui->label->setText(ui->label->text()+ ".");
}

void MainWindow::unary_operation_pressed(){
    QPushButton* button = (QPushButton*) sender();
    double labelNumber;
    QString newLabel;

    if(button->text() == "+/-"){
        labelNumber = ui->label->text().toDouble();
        labelNumber = labelNumber * -1;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
    }

    if(button->text() == "%"){
        labelNumber = ui->label->text().toDouble();
        labelNumber = labelNumber * 0.01;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
    }
}


void MainWindow::on_pushButton_Clear_released()
{
    ui->pushButton_addition->setChecked(false);
    ui->pushButton_subtract->setChecked(false);
    ui->pushButton_divide->setChecked(false);
    ui->pushButton_multiply->setChecked(false);

    userIsTypingSecondNumber = false;

    ui->label->setText("0");

}

void MainWindow::on_pushButton_Equal_released()
{
//    double firstNum;
    double labelNumber, secondNum;
    QString newLabel;
    secondNum = ui->label->text().toDouble();

    if(ui->pushButton_addition->isChecked()){
        labelNumber = firstNum + secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
        ui->pushButton_addition->setChecked(false);


    }
    else if(ui->pushButton_subtract->isChecked()){
        labelNumber = firstNum - secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
        ui->pushButton_subtract->setChecked(false);
    }
    else if(ui->pushButton_divide->isChecked()){
        labelNumber = firstNum / secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
        ui->pushButton_divide->setChecked(false);
    }
    else if(ui->pushButton_multiply->isChecked()){
        labelNumber = firstNum * secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
        ui->pushButton_multiply->setChecked(false);
    }

    userIsTypingSecondNumber = false;



}

void MainWindow:: binary_operation_pressed(){
    QPushButton* button = (QPushButton*) sender();

    firstNum = ui->label->text().toDouble();
    button->setChecked(true);

}
