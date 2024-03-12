#include <stidio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int nbmystere = rand() % 100 + 1;

    int essai,tenta = 0;

    printf("Devinez le nombre mystere entre 1 et 100./n");

    do{
        printf("choissiser un chiffre")
        scanf("%d", &essai);
        tenta++


        if (essai > nbmystere){
            printf("c'est moins /n")
        } 
        else if (essai < nbmystere){
            printf("c'est plis /n")
        }
        else{
            printf("bravo tu a trouver en %d tentative /n",tenta)
        }
    }
    while (essai != nbmystere);

    return 0
}