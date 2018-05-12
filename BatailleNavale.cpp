// Problèmes rencontrés : Vérifier PB des +1 dans "placer_bateau"

#include "stdafx.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <vector>
#include <iostream>

int n;
int x, y;
int i, j;
int J1_Bateaux[10][10];
int J2_Bateaux[10][10];
int J1_Jeu[10][10] = { 0 };
int J2_Jeu[10][10] = { 0 };


void placer_bateau(int n, int tab[10][10])

{
	do
	{
		printf("\nPlacez l'avant du bateau de taille %d: \n", n);
		scanf_s("%d %d", &x, &y);
	} while (x<0 || y<0 || x>9 || y>9);

	do
	{
		printf("Placez l'arriere du bateau de taille %d : \n", n);
		scanf_s("%d %d", &i, &j);
	} while (i<0 || j<0 || i>9 || j>9);

	if (x + n == i && y == j && (i>=0 || y>=0 || i<=9 || y<=9))
	{
		for (int w = x; w < i; w++)
		{
			if (tab[w][y]!=0)
			{
				printf("Erreur placement bateau !! \n");
				placer_bateau(n, tab);
			}
		}
		for (int w = x; w < i; w++)
		{
			tab[w][y] = 1;
		}
	}
	else
	{
		if (x-n == i && y == j && (i>=0 || y>=0 || i<=9 || y<=9))
		{
			for (int w = i+1; w < x+1; w++)
			{
				if (tab[w][y]!=0)
				{
					printf("Erreur placement bateau !! \n");
					placer_bateau(n, tab);
				}
			}
			for (int w = x+1; w < x+1; w++)
			{
				tab[w][y] = 1;
			}
		}
		else
		{
			if (y + n == j && x == i && (j >= 0 || x >= 0 || j <= 9 || x <= 9))
			{
				for (int w = y; w < j; w++)
				{
					if (tab[x][w] != 0)
					{
						printf("Erreur placement bateau !! \n");
						placer_bateau(n, tab);
					}
				}
				for (int w = y; w < j; w++)
				{
					tab[x][w] = 1;
				}
			}
			else
			{
				if (y-n == j && x == i && (j >= 0 || x >= 0 || j <= 9 || x <= 9))
				{
					for (int w = j+1; w < y+1; w++)
					{
						if (tab[x][w] != 0)
						{
							printf("Erreur placement bateau !! \n");
							placer_bateau(n, tab);
						}
					}
					for (int w = j + 1; w < y + 1; w++)
					{
						tab[x][w] = 1;
					}
				}
				else
				{
					printf("Erreur placement bateau !! \n");
					placer_bateau(n,tab);
				}
			}
		}
	}
	
}


void afficher_bateaux(int tab[10][10])
{
	printf("\n");
	for (int w = 0; w < 10; w++)
	{
		for (int v = 0; v < 10; v++)
		{
			printf("%d ", tab[v][w]);
		}
		printf("\n");
	}
}

void attaquer_de_vers(int tabde[10][10],int tabvers[10][10])
{
	do
	{
		printf("\nOu voulez vous tirer ?\n");
		scanf_s("%d %d", &x, &y);
	} while (x<0 || y<0 || x>9 || y>9);
	if (tabde[x][y] == 8 || tabde[x][y] == 7)
	{
		printf("\nVous avez deja jouer la\n");
		attaquer_de_vers(tabde, tabvers);
	}
	if (tabvers[x][y]==0)
	{
		printf("\nDans l eau !!\n");
		tabde[x][y] = 8;
	}
	if (tabvers[x][y] == 1)
	{
		printf("\nTouche !!\n");
		tabde[x][y] = 7;
	}
}

int condition_victoire(int tabvers[10][10], int tabde[10][10])
{
	int k=0,n=0;
	for (int w = 0; w < 10; w++)
	{
		for (int v = 0; v < 10; v++)
		{
			if (tabvers[v][w]== 7)
			{
				k++;
			}
			if (tabde[v][w] == 7)
			{
				n++;
			}
		}
	}
	if (k==2)
	{
		return 2 ;
	}
	if (n ==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void main()

{
	printf("Bienvenue sur Gravitrips\n");
	printf("Au tour de J1 !");
	system("pause");
	system("cls");
	for (int i = 2; i > 1; i--)
	{
		placer_bateau(i, J1_Bateaux);
		afficher_bateaux(J1_Bateaux);
	}
	system("cls");
	printf("Au tour de J2 !");
	system("pause");
	system("cls");
	for (int i = 2; i > 1; i--)
	{
		placer_bateau(i, J2_Bateaux);
		afficher_bateaux(J2_Bateaux);
	}
	system("cls");
	printf("DEBUT DU JEU !");
	do
	{
		printf("Au tour de J1 !");
		system("pause");
		system("cls");
		afficher_bateaux(J1_Jeu);
		attaquer_de_vers(J1_Jeu, J2_Bateaux);
		afficher_bateaux(J1_Jeu);
		system("pause");
		system("cls");

		printf("Au tour de J2 !");
		system("pause");
		system("cls");
		afficher_bateaux(J2_Jeu);
		attaquer_de_vers(J2_Jeu, J1_Bateaux);
		afficher_bateaux(J2_Jeu);
		system("pause");
		system("cls");

	} while (condition_victoire(J2_Jeu,J1_Jeu) == 0);
	if (condition_victoire(J2_Jeu, J1_Jeu) == 1)
	{
		printf("Victoire de J1 !!");
	}
	if (condition_victoire(J2_Jeu, J1_Jeu) == 2)
	{
		printf("Victoire de J2!!");
	}
	system("pause");

}