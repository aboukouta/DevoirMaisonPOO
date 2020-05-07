#ifndef PERSONNE_H
#define PERSONNE_H
#include <iostream>
#include <string> 

using namespace std;

class Personne{ 
    protected:
        string Nom;
        string Prenom;
        string Num_INSEE;
        string Date_Naissance;
    
    public:
        Personne() {}
        Personne(string nom, string prenom, string num_insee, string birthdate): Nom(nom), Prenom(prenom), Num_INSEE(num_insee), Date_Naissance(birthdate)  {}
        
        string getNom() {
            return Nom;
        }

        string getPrenom() {
            return Prenom;
        }

        string getNum_INSEE() {
            return Num_INSEE;
        }

        string getDate_Naissance() {
            return Date_Naissance;
        }

        virtual void affiche() {
            cout << "My name is " << Nom << " " << Prenom << " my INSEE number is " << Num_INSEE << " I'm born the " << Date_Naissance << endl;
        }
};

#endif
