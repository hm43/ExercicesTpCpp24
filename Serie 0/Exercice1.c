// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
typedef struct note{
    float valeur;
    int coefficient;
    char module[10];
}note;
typedef struct {
    char nom[20];
    char matricule[20];
    note *notes;
}etudiant;

float moyenne(etudiant *e){
    float s1 = 0, s2 = 0;
    for(int i=0; i<3; i++){
        s1 += e->notes[i].valeur * e->notes[i].coefficient;
        s2 += e->notes[i].coefficient;
    }
    return s1/s2;
}

int main() {
    etudiant *et = new etudiant[3]; 
    for(int i=0; i<3; i++){
        cout<<"Donner le nom: ";
        cin>>et[i].nom;
        cout<<"Donner le matricule: ";
        cin>>et[i].matricule;
        et[i].notes = new note[3];
        for(int j=0; j<3; j++){
            cout<<"Donner la note: ";
            cin>>et[i].notes[j].valeur;
            
        }
        
    }
    for(int i=0; i<3; i++){
        cout<<"Le nom: "<<et[i].nom<<" Le matricule: "<<et[i].matricule<<" La moyenne est: "<<moyenne(&et[i]);
    }
    
    delete [] et;

    return 0;
}