#include "tetris_game.h"
#include "ui_tetris_game.h"

tetris_game::tetris_game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tetris_game)
{
    ui->setupUi(this);
}

tetris_game::~tetris_game()
{
    delete ui;
}
