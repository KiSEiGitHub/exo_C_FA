#include <stdio.h>
#include <stdbool.h> // pour avoir les booléens
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int nb_mysterieux_comme_arouf = rand()%101; // rand()%101 = 0 et 100 |en gros c'est de 0 juqu'aux max + 1
    int choix;

    printf("Nombre mystere entre 1 et 100\n");
    // une boucle while true tourne à l'infinit, il faut la stopper manuellement avec un break, fait gaffe
    while(true){
        printf("Votre choix :");
        scanf("%d", &choix);

        if(choix == nb_mysterieux_comme_arouf) {
            printf("Bravo vous avez trouve");
            break;
        } else if (choix < nb_mysterieux_comme_arouf) {
            printf("C'est plus !\n");
        } else if (choix > nb_mysterieux_comme_arouf) {
            printf("C'est moiins\n");
        }
    }

    return 0;
}