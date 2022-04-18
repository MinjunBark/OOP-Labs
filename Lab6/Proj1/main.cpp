#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
 QApplication app (argc, argv);

 QPushButton button;

 QFont font ("Courier");
 button.setFont(font);

 button.setText("Pretty Button:)");
// button.setToolTip("A tooltip");
 button.show();

 return app.exec();
}
