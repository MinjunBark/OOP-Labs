#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "my_gl.h"
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_x_rot_slider_valueChanged(int value)
{
    Q_UNUSED(value);
    ui->openGLWidget->setRotation(
                ui->x_rot_slider->value(),
                ui->y_rot_slider->value(),
                ui->z_rot_slider->value()
                );
}

void MainWindow::on_y_rot_slider_valueChanged(int value)
{
    Q_UNUSED(value);
    ui->openGLWidget->setRotation(
                ui->x_rot_slider->value(),
                ui->y_rot_slider->value(),
                ui->z_rot_slider->value()
                );
}

void MainWindow::on_z_rot_slider_valueChanged(int value)
{
    Q_UNUSED(value);
    ui->openGLWidget->setRotation(
                ui->x_rot_slider->value(),
                ui->y_rot_slider->value(),
                ui->z_rot_slider->value()
                );
}



void MainWindow::on_pushButton_clicked()
{

}


void MainWindow::on_TranslateXbar_valueChanged(int value)
{
    Q_UNUSED(value);
    ui->openGLWidget->translation(
                ui->TranslateXbar->value(),
                ui->TranslateYbar->value(),
                ui->TranslateZbar->value()
                );
}


void MainWindow::on_TranslateYbar_valueChanged(int value)
{
    Q_UNUSED(value);
    ui->openGLWidget->translation(
                ui->TranslateXbar->value(),
                ui->TranslateYbar->value(),
                ui->TranslateZbar->value()
                );
}


void MainWindow::on_TranslateZbar_valueChanged(int value)
{
    Q_UNUSED(value);
    ui->openGLWidget->translation(
                ui->TranslateXbar->value(),
                ui->TranslateYbar->value(),
                ui->TranslateZbar->value()
                );
}
//added
void MainWindow::keyPressEvent(QKeyEvent *event)
{
    //arrow keys
    float y = ui->openGLWidget->yMove;
    float x = ui->openGLWidget->xMove;
    float y_inc = 0.0;
    float x_inc = 0.0;

    if (event->key() == Qt::Key_Up) {
        y_inc = +0.1f;
    }
    if (event->key() == Qt::Key_Down) {
        y_inc = -0.1f;
    }
    if (event->key() == Qt::Key_Right) {
        x_inc = +0.1f;
    }
    if (event->key() == Qt::Key_Left) {
        x_inc = -0.1f;
    }
     ui->openGLWidget->setTrans(x + x_inc, y + y_inc);

    //A,D -> xrotation
    //W,S -> yrotation
    //Q,E -> zrotation
    float xrot = 0.0;
    float yrot = 0.0;
    float zrot = 0.0;
    float xRotation = ui->openGLWidget->xrot;
    float yRotation = ui->openGLWidget->yrot;
    float zRotation = ui->openGLWidget->zrot;

    if (event->key() == Qt::Key_A) {
        xrot = -5.0f;
    }
    if (event->key() == Qt::Key_D) {
        xrot = +5.0f;
    }

    if (event->key() == Qt::Key_W) {
        yrot = +5.0f;
    }
    if (event->key() == Qt::Key_S) {
        yrot = -5.0f;
    }
    if (event->key() == Qt::Key_Q) {
        zrot = -5.0f;
    }
    if (event->key() == Qt::Key_E) {
        zrot = +5.0f;
    }

    ui->openGLWidget->setRotation(xRotation + xrot, yRotation + yrot, zRotation + zrot);


}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    lastX = event->x();
    lastY = event->y();
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    float xAtRelease = event->x();
    float yAtRelease = event->y();

    float dx = xAtRelease - lastX;
    float dy = yAtRelease - lastY;

    float x = ui->openGLWidget->xMove;
    float y = ui->openGLWidget->yMove;

    ui->openGLWidget->setTrans(x + dx / 100, y + dy / 100);

    lastX = event->x();
    lastY = event->y();

}

