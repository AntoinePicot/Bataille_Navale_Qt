#include <QApplication>
#include "gamemenu.h"
#include "gamesolo.h"
#include "game2joueurs.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    GameMenu menu;
    menu.show();

    return app.exec();
}



//Fonction de GameMenu (pk ici ? Bonne question)
void GameMenu::about()
{
    QMessageBox::information(this,"About","Ouvrir about.txt");
}

void GameMenu::jouer2Joueurs()
{
    QMessageBox::information(this,"Bataille Navale - JOUEURS", "COMING SOON...");
}

void GameMenu::jouerSolo()
{
      close();
      GameSolo *fenetre = new GameSolo;
      fenetre->setFixedSize(1000, 600);
      fenetre->show();
    //  QMessageBox::information(this, "Placement bateaux - J1", "Au tour de J1 de placer ses bateaux");

      //creer 2 fenetre pour le placements des bateaux || mettre le "for" dans GameSolo ?
}
//http://www.qtcentre.org/archive/index.php/t-27436.html
//https://doc.qt.io/archives/qq/qq10-signalmapper.html
