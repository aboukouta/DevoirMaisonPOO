#include <iostream>
#include "personne.hpp"
#include "patient.hpp"

int main()
{


    Personne p1 = Personne("Abou", "KOUTA", "1234123", "15 mars 1993");
    p1.affiche();
    Patient p2 = Patient("Abou", "KOUTA", "1234123", "15 mars 1993", 2);
    p2.affiche();
    return 0;
}
