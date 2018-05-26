#ifndef GAMEMENU_H
#define GAMEMENU_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include <QLabel>
#include <QFile>
#include "gamesolo.h"

class GameMenu : public QWidget
{
    Q_OBJECT

    public:
    GameMenu();

    public slots:
    void about();
    void jouerSolo();
    void jouer2Joueurs();

    private:
    QPushButton *m_partieSolo;
    QPushButton *m_partie2joueurs;
    QPushButton *m_about;
    QPushButton *m_quit;
    QLabel *m_titre1;
};

#endif
