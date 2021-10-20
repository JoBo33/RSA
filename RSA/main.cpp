#include "rsa.h"
#include <QtWidgets>

int main(int argc, char **argv)
{
 QApplication app (argc, argv);

 QMainWindow mainWin;

 Rsa rsa;
 mainWin.setCentralWidget(&rsa);

 mainWin.show();

 return app.exec();
}
