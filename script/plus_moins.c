#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


void plus_moins(int choix_joueur, int valeur_a_trouver) {
	
	if (choix_joueur < valeur_a_trouver) printf("plus\n");
	else if (choix_joueur > valeur_a_trouver) printf("moins\n");
	else printf("Bingo");
	
}

int main() {
	srand (time (0));
	
	int valeur_a_trouver = rand() % 100;
	int choix_joueur;
	int choix_mode;
	
	printf("Veuillez choisir un mode de difficulté.\nEntrez 0 pour le mode facile, 25 pour le mode moyen ou 10 pour le mode difficile : ");
	scanf("%i", &choix_mode);
	
	int Compteur = 1;
	do {
		printf("Veuillez entrez la valeur que vous avez choisi : ");
		scanf("%i", &choix_joueur);
		
		plus_moins(choix_joueur, valeur_a_trouver);
		printf("\n");
		
		Compteur++;
	} while (choix_joueur != valeur_a_trouver && Compteur != choix_mode);
	
	if (choix_joueur != valeur_a_trouver) printf("Vous avez perdu");
	
	
}
