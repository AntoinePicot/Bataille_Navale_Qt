#include "gamemenu.h"
#include <fstream>
#include <iostream>


GameMenu::GameMenu() : QWidget()
{
    setWindowTitle(" Gravitrips - Puissance 4");
    setWindowIcon(QIcon("icon.jpg"));

    m_titre= new QLabel("Bienvenue sur Gravitrips", this);

    m_partieSolo=new QPushButton("Jouer (SOLO)",this);

    m_partieSolo= new QPushButton("Jouer (2 JOUEURS)",this);

    m_about= new QPushButton("About",this);
        m_about->move(100, 750);

    m_quit= new QPushButton("QUITTER",this);
        m_quit->move(100, 900);

    QObject::connect(m_about, SIGNAL(clicked()), this, SLOT(about()));
    QObject::connect(m_quit, SIGNAL(clicked()), qApp, SLOT(quit()));
}

void GameMenu::about()
{
    //open a new QWidget and create a window were apear the text of "about.txt"
    //use QLabel or QTextEdit
}
