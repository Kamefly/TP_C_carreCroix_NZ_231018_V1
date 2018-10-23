#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Programme de la croix
    int i, j, n; //Initialisation des variables, n est le nombre de lignes
    int nb;

    printf("Entrez la taille de la croix: ");
    scanf("%d", &n);

    nb = n * 2 - 1;

    for(i=1; i<=nb; i++) //A chaque fois que la boucle se répète, on rajoute 1 jusqu'au nombre nb
    {
        for(j=1; j<=nb; j++)
        {
            if(j==i || (j==nb - i + 1))  //Si c'est le bon endroit où poser la croix
            {
                printf("X");  //Mettre X
            }
            else
            {
                printf(" "); //Sinon, laisser un espace
            }
        }

        printf("\n");
    }
//Programme du carré
    printf("Entrez le nombre de Lignes: "); //On demande à l'utilisateur le nombre de lignes
    scanf("%d", &n);

    for(i=1; i<=n; i++) //La boucle Pour s'active pour chaque ligne
    {
        for(j=1; j<=n; j++) //La Boucle Pour s'active pour chaque colonne
        {
            if(i==1 || i==n || j==1 || j==n) //A
            {
                printf("*"); //On met une étoile
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n"); //On change de ligne
    }

    return 0;
}
