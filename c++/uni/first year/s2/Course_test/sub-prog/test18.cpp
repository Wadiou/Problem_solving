#include <iostream>
using namespace std;
struct element {
    int val;
    element *suiv;
};
int main(){
    element *Liste; 

element *elem, *tmp;
tmp = Liste;
elem = NULL;
while(tmp != NULL) {
    tmp = tmp->suiv;
}
// Aprés terminer la boucle tmp = NULL , et on va changer null par elem
elem = new element;
tmp = elem; // ici
elem->suiv = NULL;
elem->val = 4;
}

