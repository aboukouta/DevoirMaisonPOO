
#include "patient.hpp"
#include "../exercice3/listord.hpp"

int main() {
    ListOrd<Patient> liste = ListOrd<Patient>(); // Creation d'une liste de patients
    liste.InsertInPlace(Patient("Jean", "Dupont", "1234123", "18 mars 1982", 3)); // Insertion d'un patient
    liste.InsertInPlace(Patient("Jean", "Dupont", "123423453", "19 mars 1997", 1)); // Insertion d'un patient
    liste.InsertInPlace(Patient("Harry", "Potter", "12341233456", "18 mars 1997", 3)); // Insertion d'un patient
    liste.InsertInPlace(Patient("Serius", "Black", "1414233456", "20 mars 1997", 2)); // Insertion d'un patient
    liste.InsertInPlace(Patient("Hermione", "Granger", "12341233456", "17 mars 1997", 1)); // Insertion d'un patient
    
    liste.display(); // Affichage de la liste
    liste.popFirst(); // Deletion du premier element
    liste.display(); // Affichage de la liste
}
