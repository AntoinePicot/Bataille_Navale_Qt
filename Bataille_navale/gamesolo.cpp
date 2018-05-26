//Add color on button and for tir add slot/click actions

#include "gamesolo.h"
#include <QGridLayout>
#include <QPixmap>
#include <QSignalMapper>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QString>
#include <QIntValidator>

int J1_Bateaux[10][10]={0};
//int J2_Bateaux[10][10];
int J1_Jeu[10][10] = { 0 };
//int J2_Jeu[10][10] = { 0 };

GameSolo::GameSolo()
{
    setWindowTitle(" Bataille Navale - SOLO");
    setWindowIcon(QIcon("iconBN.jpg"));

    QHBoxLayout *Mlayout = new QHBoxLayout(this);
    QTabWidget *onglets1 = new QTabWidget(this);
    QTabWidget *onglets2 = new QTabWidget(this);
    onglets1->setStyleSheet("background-color : Dodgerblue;");
    onglets2->setStyleSheet("background-color : Dodgerblue;");
    m_tirs = new QLabel;
    m_bateaux = new QLabel;
    QPushButton *Field[10][10];
    QPushButton *Field1[10][10];
//print tirs
    for(int i=0;i<10;i++)
            for(int j=0;j<10;j++){
                Field[i][j]=new QPushButton("", this);
                if(J1_Bateaux[i][j] == 1){
                    Field[i][j]->setStyleSheet("background-color: Red;");
                }
                else {
                    Field[i][j]->setStyleSheet("background-color: Dodgerblue;");
                }
                connect(Field[i][j] , SIGNAL(clicked()), this, SLOT(buttonClicked()));
    }

                //print bateaux
    for(int i=0;i<10;i++)
            for(int j=0;j<10;j++){
                Field1[i][j]=new QPushButton("", this);
                if(J1_Jeu[i][j]==1){
                    Field1[i][j]->setStyleSheet("background-color: Red;");
                }
                if(J1_Jeu[i][j]==2){
                    Field1[i][j]->setStyleSheet("background-color: Black;");
                }
                if(J1_Jeu[i][j]==3){
                    Field1[i][j]->setStyleSheet("background-color: Bleu;");
                }
                else{
                    Field1[i][j]->setStyleSheet("background-color: Dodgerblue;");
                }
                connect(Field1[i][j] , SIGNAL(clicked()), this, SLOT(buttonClicked1()));
            }
    QGridLayout *layout = new QGridLayout;
    QGridLayout *layout2 = new QGridLayout;


    for(int i=0;i<10;i++)
            for(int j=0;j<10;j++){
                layout->addWidget(Field[i][j], i,j );
   //             layout->setSpacing(0);
            }

     for(int i=0;i<10;i++)
            for(int j=0;j<10;j++){
                layout2->addWidget(Field1[i][j],i,j);
        //       layout2->setSpacing(0);
            }

        m_tirs->setLayout(layout);
        m_tirs->setAlignment(Qt::AlignCenter);

        m_bateaux->setLayout(layout2);
        m_bateaux->setAlignment(Qt::AlignCenter);

    onglets1->addTab(m_tirs,"Tirs (J1)");
    onglets2->addTab(m_bateaux,"Bateaux (J1)");
    Mlayout->addWidget(onglets1);
    Mlayout->addWidget(onglets2);

    placement();


}

void GameSolo::placement(){

        QWidget *placement = new QWidget;
        QSpinBox *avant_x = new QSpinBox();
        QSpinBox *avant_y = new QSpinBox();
        QSpinBox *arriere_x = new QSpinBox();
        QSpinBox *arriere_y = new QSpinBox();
        QLabel *titrep = new QLabel("Bateaux (add taille)",this);
        QLabel *avant = new QLabel("Avant",this);
        QLabel *arriere = new QLabel("Arriere",this);
        QHBoxLayout *Layout_h = new QHBoxLayout(this);
        QVBoxLayout *Layout_v = new QVBoxLayout(this);
        QPushButton *confirme = new QPushButton("Placer",this);
        avant_y->setRange(0,9);
        arriere_x->setRange(0,9);
        arriere_y->setRange(0,9);

        placement->setWindowTitle("Placer avant et arriere bateau");

        Layout_h->addWidget(avant);
        Layout_h->addWidget(avant_x);
        Layout_h->addWidget(avant_y);
        Layout_h->addWidget(arriere);
        Layout_h->addWidget(arriere_x);
        Layout_h->addWidget(arriere_y);
        Layout_v->addWidget(titrep);
        Layout_v->addLayout(Layout_h);
        Layout_v->addWidget(confirme);

        placement->setLayout(Layout_v);
        placement->show();
        placement->setFocus();

        int Ax,Ay,Arx,Ary;
        Ax=avant_x->value();
        Ay=avant_y->value();
        Arx=arriere_x->value();
        Ary=arriere_y->value();

        J1_Bateaux[Ax][Ay]=1;
        J1_Bateaux[Arx][Ary]=1;
        }

void GameSolo::afficher_bateaux(QPushButton Field[10][10]){
    for(int i=0;i<10;i++)
            for(int j=0;j<10;j++){
                if(J1_Bateaux[i][j] == 1){
                    Field[i][j].setStyleSheet("background-color: Red;");
                }
                else {
                    Field[i][j].setStyleSheet("background-color: Dodgerblue;");
                }
    }
}

void GameSolo::afficher_tirs(QPushButton Field1[10][10]){
    for(int i=0;i<10;i++)
            for(int j=0;j<10;j++){
                if(J1_Jeu[i][j]==1){
                    Field1[i][j].setStyleSheet("background-color: Red;");
                }
                if(J1_Jeu[i][j]==2){
                    Field1[i][j].setStyleSheet("background-color: Black;");
                }
                if(J1_Jeu[i][j]==3){
                    Field1[i][j].setStyleSheet("background-color: Bleu;");
                }
                else{
                    Field1[i][j].setStyleSheet("background-color: Dodgerblue;");
                }
            }
    QMessageBox::information(this, "Placement bateaux - J1", "Au tour de J1 de placer ses bateaux");
}
void GameSolo::buttonClicked(){
    QPushButton *button = (QPushButton *)sender();
    button->setStyleSheet(("background-color: blue;"));
   }

void GameSolo::buttonClicked1(){
    QPushButton *button = (QPushButton *)sender();
    button->setStyleSheet(("background-color: blue;"));
}

void GameSolo::essai(int j){
    QMessageBox::information(this, "J1", "%d", j);
}
