#include <QApplication>
#include "gamemenu.h"
#include "game.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    GameMenu menu;
    menu.showMaximized();

    return app.exec();
}
