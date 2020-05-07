#ifndef LISTORD_H
#define LISTORD_H
#include <iostream>
#include <string> 

using namespace std;



// Le premier element de la chaine est utilisé comme sentinelle
template <class TypeE>
class ListOrd {

public:
    ListOrd() : next_(nullptr) {} // Le liste est vide
    ~ListOrd() {if (next_) delete next_;} // Le destructeur detruit tous les elements recursivement

    // Insert l'element a la fin si tous les autres sont plus grands, ou apres le dernier element plus grand que lui
    void InsertInPlace(TypeE data) {
        ListOrd *current = this;
        while (current->next_ && data < current->next_->data_)
            current = current->next_;
        ListOrd *temp = current->next_;
        current->next_ = new ListOrd();
        current->next_->next_ = temp;
        current->next_->data_ = data;
    }

    // Supprime le premier element de la liste
    void popFirst() {
        if (next_) {
            ListOrd *temp = next_;
            next_ = next_->next_;
            temp->next_ = nullptr;
            delete temp;
        }
    }

    // Regarde si il y a un element dans la liste
    bool Is_empty() {
        return next_ == nullptr;
    }

    // Affiche les elements de la liste dans l'ordre trié
    void display() {
        ListOrd *current = next_;
        while (current) {
            cout << current->data_ << " ";
            current = current->next_;
        }
        cout << endl;
    }



private:
    TypeE data_;
    ListOrd *next_;
};
#endif
