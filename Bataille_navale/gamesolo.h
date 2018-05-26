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
#include <QObject>
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>

class GameSolo : public QWidget
{
    Q_OBJECT

    public:
    GameSolo();

    public slots:
    void buttonClicked();
    void buttonClicked1();
    void placement();
    void afficher_bateaux(QPushButton Field[10][10]);
    void afficher_tirs(QPushButton Field1[10][10]);
    void essai(int j);

    private:
    QLabel *m_tirs;
    QLabel *m_bateaux;

};

#endif // GAMESOLO_H
