#include "tetris_game.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    tetris_game w;
    w.show();

    return a.exec();
}
