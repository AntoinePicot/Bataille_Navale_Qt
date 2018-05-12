#include "gamesolo.h"

GameSolo::GameSolo()
{
    setWindowTitle(" Gravitrips - SOLO");
    setWindowIcon(QIcon("iconBN.jpg"));


    QTabWidget *onglets = new QTabWidget(this);
        onglets->setGeometry(20, 20, 1000, 1000);

    m_tirs = new QLabel;
    m_bateaux = new QWidget;

        m_tirs->setPixmap(QPixmap("touche.jpg"));
        m_tirs->setAlignment(Qt::AlignCenter);
        //Page Bateaux

    //Page Solo

    onglets->addTab(m_tirs,"Tirs (J1)");
    onglets->addTab(m_bateaux,"Bateaux (J1)");

}
