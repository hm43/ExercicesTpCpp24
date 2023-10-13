#include <stdio.h>
#include <stdlib.h>
typedef struct {
    float valeur;
    int coeff;
    char module[10];
}note;

typedef struct{
    char nom[20];
    int mat;
    note notes[3];
}etudiant;

float moyenne(etudiant e){
    float s1 = 0;
    float s2 = 0;
    for(int i=0; i<3; i++){
        s1 += e.notes[i].valeur * e.notes[i].coeff;
        s2 += e.notes[i].coeff;
    }
    return s1/s2;
}

int main()
{
    etudiant etudiants[3];
    for(int i=0; i<3; i++){
        printf("Donner le nom: ");
        scanf("%s", &etudiants[i].nom);
        printf("Donner le matricule: ");
        scanf("%d", &etudiants[i].mat);
        for(int j=0; j<3; j++){
            printf("Donner la valeur de la note: ");
            scanf("%f", &etudiants[i].notes[j].valeur);
            printf("Donner le coefficient de la note: ");
            scanf("%d", &etudiants[i].notes[j].coeff);
            printf("Donner le nom du module de la note: ");
            scanf("%s", &etudiants[i].notes[j].module);
        }
    }

    for(int i=0; i<3; i++){
        printf("%s %f", etudiants[i].nom, moyenne(etudiants[i]));
    }
    
    return 0;
}