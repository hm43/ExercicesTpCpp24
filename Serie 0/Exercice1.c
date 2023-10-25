#include <stdio.h>
/*
Exercice 1:
-----------
Créer un programme qui demande un nombre entier et affiche si le nombre est positif ou négatif.
*/
int main()
{
    int n;
    printf("Donner un nombre: ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("Positif");
    }
    else if (n < 0)
    {
        printf("negatif");
    }
    else
    {
        printf("positif et negatif");
    }
    return 0;
}