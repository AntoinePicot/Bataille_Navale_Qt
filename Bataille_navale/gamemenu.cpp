#include "gamemenu.h"
#include <fstream>
#include <iostream>
#include <QGridLayout>
//setlayout

GameMenu::GameMenu() : QWidget()
{
    setWindowTitle("Bataille Navale - MENU");
    setWindowIcon(QIcon("iconBN.jpg"));
    QVBoxLayout *LayoutMenu = new QVBoxLayout(this);

    m_titre1= new QLabel("Bataille Navale", this);
   // m_titre2= new QLabel("Untruc bien", this);
    m_partieSolo=new QPushButton("Jouer (SOLO)",this);
    m_partie2joueurs= new QPushButton("Jouer (2 JOUEURS)",this);
    m_about= new QPushButton("About",this);
    m_quit= new QPushButton("QUITTER",this);
    m_titre1->setAlignment(Qt::AlignCenter);
    m_titre1->setFont(QFont("Impact",40));
    m_titre1->setStyleSheet("color : Dodgerblue;");
   // m_titre2->setAlignment(Qt::AlignCenter);
    //m_titre2->setFont(QFont("Impact",40));
    LayoutMenu->addWidget(m_titre1);
    //LayoutMenu->addWidget(m_titre2);
    LayoutMenu->addWidget(m_partieSolo);
    LayoutMenu->addWidget(m_partie2joueurs);
    LayoutMenu->addWidget(m_about);
    LayoutMenu->addWidget(m_quit);

    QObject::connect(m_partieSolo, SIGNAL(clicked()), this, SLOT(jouerSolo()));
    QObject::connect(m_partie2joueurs, SIGNAL(clicked()), this, SLOT(jouer2Joueurs()));
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
