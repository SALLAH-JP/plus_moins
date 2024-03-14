#include <stdio.h>
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
	
	
	do {
		printf("Veuillez entrez la valeur que vous avez choisi : ");
		scanf("%i", &choix_joueur);
		
		plus_moins(choix_joueur, valeur_a_trouver);
		printf("\n");
	} while (choix_joueur != valeur_a_trouver);
	
	
}
