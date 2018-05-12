#include <QApplication>
#include "gamemenu.h"
#include "gamesolo.h"
#include "game2joueurs.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    GameSolo menu;
    menu.showMaximized();

    return app.exec();
}

void GameMenu::about()
{
    QMessageBox::information(this,"About","Ouvrir about.txt");
}
