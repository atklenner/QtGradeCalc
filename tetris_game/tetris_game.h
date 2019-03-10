#ifndef TETRIS_GAME_H
#define TETRIS_GAME_H

#include <QMainWindow>

namespace Ui {
class tetris_game;
}

class tetris_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit tetris_game(QWidget *parent = nullptr);
    ~tetris_game();

private:
    Ui::tetris_game *ui;
};

#endif // TETRIS_GAME_H
