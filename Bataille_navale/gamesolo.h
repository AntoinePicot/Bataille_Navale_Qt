#ifndef GAMESOLO_H
#define GAMESOLO_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include <QLabel>
#include <QFile>
#include <QtWidgets>
#include <QTabWidget>

class GameSolo : public QWidget
{
    Q_OBJECT

    public:
    GameSolo();

    public slots:
   // void about();


    private:
    QLabel *m_tirs;
    QWidget *m_bateaux;

};

#endif // GAMESOLO_H
