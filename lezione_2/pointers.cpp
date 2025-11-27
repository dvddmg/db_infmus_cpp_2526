#include <iostream>

using namespace std;

void change_number(int* num){
    // riceve un puntatore, risale alla variabile
    // aggiunge un valore ad esse
    *num = *num + 3;
}

int main(){
    
    int a = 123; // variabile
    
    cout << "Indirizzo di memordia di a: " << &a << endl;
    
    // salviamo l'indirizzo in un puntatore
    int* c; // puntatore
    c = &a;

    cout << "Indirizzo salvato in c: " << c << endl;

    // si può risalire al valore della variabile grazie all'operatore * 
    // applicato al puntatore

    cout << "valore di a recuperato da c: " << *c << endl;

    change_number(c);
    cout << "modifica con funzione change_number(c): " << a << endl;

    

}