#include <iostream>

// referenze:
// - nome diverso per la stessa locazione di memoria
// - devono essere inizializzate al momento della dichiarazione
// - non possono essere riassegnate ad una variabile differente

using namespace std;

void dont_change(int num){
    num = num + 10;
    cout << "valore interno alla funzione = " << num << endl;
}

void change(int& num){
    num = num + 10;
}

int main(){
    int a = 10;
    int& x = a;        // diverso da puntatore int* point

    cout << "valore di a = " << a << endl;
    cout << "valore di x = " << x << endl;
    cout << "indirizzo di memoria di a (&a) = " << &a << endl;
    cout << "indirizzo di memoria di x (&x) = " << &x << endl;
    dont_change(a);
    cout << "a dopo dont_change() = " << a << endl;
    change(a);
    cout << "a dopo change() = " << a << endl;

    cout << "valore di x = = " << x << endl;

    return 0;

}