#include<stdlib.h>
#include<stdio.h>

typedef struct {
    float valeur;
    int coeff;
    char module[10];
}note;
typedef struct {
    char nom[10];
    char matricule[10];
    note notes[3];
}etudiant;

float moyenne(etudiant e){
    float s1 = 0, s2 = 0;
    for(int i=0; i<3; i++){
        s1 += e.notes[i].valeur * e.notes[i].coeff;
        s2 += e.notes[i].coeff;
    }
    return s1/s2;
}

int main() {
    etudiant etudiants[3];
    for(int i=0; i< 3; i++){
        printf("Donner le nom: ");
        scanf("%s", &etudiants[i].nom);
        printf("Donner le matricule: ");
        scanf("%s", etudiants[i].matricule);
        for(int j=0; j<3; j++){
            printf("Donner la note: ");
            scanf("%f",&etudiants[i].notes[j].valeur);
            printf("Donner le coeff de la note: ");
            scanf("%d", &etudiants[i].notes[j].coeff);
            printf("Donner le module de la note: ");
            scanf("%s", &etudiants[i].notes[j].module);
        }
    }
    
    for(int i=0; i<3; i++){
        printf("Le nom: %s la moyenne est: %.2f", etudiants[i].nom, moyenne(etudiants[i]));
    }

    return 0;
}