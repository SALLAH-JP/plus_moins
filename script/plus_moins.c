#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void plus_moins(int choix_joueur, int valeur_a_trouver) {
	
	if (choix_joueur < valeur_a_trouver) printf("plus");
	else if (choix_joueur > valeur_a_trouver) printf("moins");
	else printf("Bingo");
	
}

int main() {
	srand (time (0));
	
	int valeur_a_trouver = rand() % 100;
	int choix_joueur;
	scanf("%i", &choix_joueur);
	
	plus_moins(choix_joueur, valeur_a_trouver);
}
