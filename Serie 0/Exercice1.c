#include <stdio.h>
#include <stdlib.h>
typedef struct note{
    float valeur;
    int coefficient;
    char module[10];
}note;
typedef struct {
    char nom[20];
    char matricule[20];
    note notes[3];
}etudiant;

float moyenne(etudiant e){
    float s1 = 0;
    float s2 = 0;
    for(int i=0; i<3; i++){
        s1 += e.notes[i].valeur * e.notes[i].coefficient; 
        s2 += e.notes[i].coefficient;
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
        scanf("%s", &etudiants[i].matricule);
        for(int j=0; j<3; j++){
            printf("Donner la note: ");
            scanf("%f", &etudiants[i].notes[j].valeur);
            printf("Donner le cofficient de la note: ");
            scanf("%d", &etudiants[i].notes[j].coefficient);
            printf("Donner le nom du module de la note: ");
            scanf("%s", &etudiants[i].notes[j].module);
        }
    }
    
    for(int i= 0; i<3; i++){
        printf("Le nom est %s et le matricule %s et sa moyenne est %f\n", 
        etudiants[i].nom, etudiants[i].matricule, moyenne(etudiants[i]));
    }
    return 0;
}