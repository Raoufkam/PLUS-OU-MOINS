#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// FONCTION DES NIVEAU .
int Niveau( int diff )
{
    int MAX, nombreMystere, MIN = 1 ;


    if  ( diff == 1 )
        {
            MAX = 20;

            nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
        }
    else if ( diff == 2 )
    {
        MAX = 50 ;

        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    }
    else
    {
        MAX = 100 ;

        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    }

    return nombreMystere ;
}

int main ( int argc, char** argv )
{
    //INITIALISATION .

    int entre = 0, nombreMystere = 0, compteur = 0 ,entre3 = 0, Niv ;

    int refaire_p = 1;

    int MIN  ;
    int MAX  ;
    srand(time(NULL));

    // nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    printf(">>>-------------------| PLUS OU MOINS |-----------------------<<< \n \n ");

    // DEBUT DU JEU .

    printf(" Salut, le jeu est de trouver le nombre Mystere allons y ! \n\n ");


    // BOUCLE FINALE DU JEU .

    do
    {
        //CHOIX DE NIVEAU .

        if ( entre == nombreMystere )
           {
            printf(" < Quelle niveau souhaitez vous jouez ? > \n \n " );

            printf(" -1- << FACILE >> \n \n ");

            printf(" -2- << NORMAL >> \n \n ");

            printf(" -3- << DIFFICILE >> \n \n ");

            scanf("%d",&Niv);

            nombreMystere = Niveau(Niv);
           }
        // UNE PARTIE DU JEU .

        printf(" \n \n ");

        printf(" -- > Quelle est le nombre ? \n \n ");

        scanf("%d", &entre);

        printf(" \n \n ");


        if ( nombreMystere < entre )
            {
                printf(" < C'est moin ! > \n\n");

                compteur = compteur + 1 ;
            }

        else if ( nombreMystere > entre)
            {
                printf(" < C'est plus ! > \n\n");

                compteur = compteur + 1 ;
            }
        // FIN DE LA PARTIE ET LE NOMBRE MYSTERE EST TROUVE !

        else
        {
            compteur = compteur + 1 ;

            printf("  ----- < Bravo, vous avez trouve le nombre Mystere dans %d coups !!! >-----  \n\n",compteur);

        // DEMANDER SI LE JOUEUR VEUT UNE AUTRE PARTIE ?

            do
            {
                printf(" - Voulez vous refaire une partie ? - \n \n ");

                printf(" 1- << OUI >> \n \n");

                printf(" 2- << NON >> \n \n");

                scanf( "%d", &entre3 );

            }while( entre3 != 2 && entre3 != 1);

            if (entre3 == 1)
                {
                    refaire_p = 1;

                    compteur=0;
                }
            // FIN DU JEU , SORTIE .

            else if (entre3 == 2)
                {
                    refaire_p = 0 , printf("\n \n") ;

                    printf("< Merci, a bientot . >\n");
                }
        }
    }while ( nombreMystere != entre , refaire_p == 1);

    return 0;
}

