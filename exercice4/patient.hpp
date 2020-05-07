#ifndef PATIENT_H
#define PATIENT_H
#include <iostream>
#include "personne.hpp"

using namespace std;

class Patient: public Personne {
    private:
        int Etat_Patient;
    public:
        Patient() {} // Constructeur par defaut

        // Constructeur
        Patient(string nom, string prenom, string num_insee, string birthdate, int etat): Personne(nom, prenom, num_insee, birthdate), Etat_Patient(etat) {}
        
        // methode d'affichage
        void affiche() {
            cout << "My name is " << Nom << " " << Prenom << " my INSEE number is " << Num_INSEE << " I'm born the " << Date_Naissance << " my state is " << Etat_Patient << endl;
        }

        // Surcharge de l'operateur <
        bool operator<(const Patient& r)
        {
            return Etat_Patient < r.Etat_Patient;
        }

        // Surcharge de l'operateur ==
        bool operator==(const Patient& r)
        {
             return Etat_Patient == r.Etat_Patient;
        }

        // Surcharge de l'operateur <<
        /*
         * Cett surcharge est necessaire afin que la fonction d'affichage de ListOrd fonctionne
         * car cette derniere utilise l'operateur << pour afficher les elements qu'elle contient
         */
        friend std::ostream& operator<<(std::ostream& out, const Patient& p);
};

// Implementation de l'operateur <<
/*
 * On ne peut pas l'implementer dans la classe car le premier operande est un ostream et dans
 * la classe le premier operande serait un Patient
 * On declare la fonction comme friend afin qu'elle ait acces aux attributs privés de Patient et
 * on l'implemente en dehors de la classe
 */
std::ostream& operator<<(ostream& out, const Patient& p) {
    return out << "My name is " << p.Nom << " " << p.Prenom << " my INSEE number is " << p.Num_INSEE << " I'm born the " << p.Date_Naissance << " my state is " << p.Etat_Patient << endl;
}

#endif
