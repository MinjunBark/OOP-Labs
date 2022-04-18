#ifndef MyGL_H
#define MyGL_H


#include <QtWidgets>
#include <QtOpenGL>
#include <glfw3.h>
//#include <glut.h>
//#include <GL/glu.h>
#include<QOpenGLWidget>

class MyGL : public QOpenGLWidget
{
    Q_OBJECT
public:
    explicit MyGL(QWidget *parent = 0);

    void setRotation(float x, float y, float z);
    //translate
    void translation(float x, float y, float z);
   //added for key moving
    float xMove,yMove;  // arrow key translation
    void setTrans(float x, float y);

    float xrot,yrot,zrot; //use these
//    float xRotate, yRotate, zRotate;
protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);

signals:

public slots:

private:
//    //translation
    float xTrans,yTrans,zTrans;

};

#endif // QGLBEGIN_H
