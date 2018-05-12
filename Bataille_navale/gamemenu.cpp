#include "gamemenu.h"
#include <fstream>
#include <iostream>


GameMenu::GameMenu() : QWidget()
{
    setWindowTitle(" Gravitrips - MENU");
    setWindowIcon(QIcon("iconBN.jpg"));

    m_titre= new QLabel("Bienvenue sur Gravitrips", this);
        m_titre->move(100, 100);

    m_partieSolo=new QPushButton("Jouer (SOLO)",this);
         m_partieSolo->move(100, 350);

    m_partie2joueurs= new QPushButton("Jouer (2 JOUEURS)",this);
         m_partie2joueurs->move(100, 500);

    m_about= new QPushButton("About",this);
        m_about->move(100, 750);

    m_quit= new QPushButton("QUITTER",this);
        m_quit->move(100, 900);

  // QObject::connect(m_partieSolo, SIGNAL(clicked()), this, SLOT(jouerSolo()));
  // QObject::connect(m_partie2joueurs, SIGNAL(clicked()), this, SLOT(jouer2Joueurs()));
    QObject::connect(m_about, SIGNAL(clicked()), this, SLOT(about()));
    QObject::connect(m_quit, SIGNAL(clicked()), qApp, SLOT(quit()));
}


//void GameMenu::jouerSolo()
//{
//
//}
//
//void GameMenu::jouer2Joueurs()
//{
//
//}
//
