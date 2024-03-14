#include <stdio.h>

void plus_moins(int choix_joueur, int valeur_a_trouver) {
	
	if (choix_joueur < valeur_a_trouver) printf("plus");
	else if (choix_joueur > valeur_a_trouver) printf("moins");
	else printf("Bingo");
	
}
