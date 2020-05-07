
#ifndef PATIENT_H
#define PATIENT_H
#include "personne.hpp"

using namespace std;


class Patient: public Personne {
    private:
        int Etat_Patient;
    public:
        Patient() {}

        Patient(string nom, string prenom, string num_insee, string birthdate, int etat): Personne(nom, prenom, num_insee, birthdate), Etat_Patient(etat) {}
        
        void affiche() {
            cout << "My name is " << Nom << " " << Prenom << " my INSEE number is " << Num_INSEE << " I'm born the " << Date_Naissance << " my state is " << Etat_Patient << endl;
        }
};

#endif
