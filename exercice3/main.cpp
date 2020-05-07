
#include "listord.hpp"

int main() {
    ListOrd<int> liste = ListOrd<int>(); // Creation de la liste vide
    liste.InsertInPlace(1); // Insertion de 1
    liste.InsertInPlace(2); // Insertion de 2
    liste.InsertInPlace(3); // Insertion de 3
    liste.display(); // Affichage
    liste.popFirst(); // Deletion du premier element (3)
    liste.popFirst(); // Deletion du premier element (2)
    liste.display(); // Affichage
}
