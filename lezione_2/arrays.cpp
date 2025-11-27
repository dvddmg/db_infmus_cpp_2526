#include <cstddef>
#include <iostream>

using namespace std;
                    // DA DOVE ARRIVA SIZE_T ?????
void prin_array(int arr[], size_t size){
    cout << "[ ";
    for(size_t i=0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

int main(){

    // Definiamo gli array come segue, è possibile non specificare la lunghezza
    // solo se viene subito riempito o utilizzato
    
    int arr[5] = {3, 4, 5, 6, 7};
    float arr_float[] = {34.42, 2345.1};
    
    // NB non useremo strutture dati simili come vettori o altro perchè non sono 
    // veloci a livello computazionale...

    arr_float[0] = 0.5;
    arr[2] = 100;

    cout << "\n--- memoria occupata ---" << endl;
    cout << "sizeof(arr) = " << sizeof(arr) << " bytes" << endl;
    cout << "sizeof(arr[0]) = " << sizeof(arr[0]) << " bytes" << endl;
    // risaliamo al numero di elementi dalle dimensioni dell'array
    // (memoria array) / (memoria singolo elemento) = n elementi
    cout << "Elementi in arr = " << sizeof(arr) / sizeof(arr[0]) << endl;

    prin_array(arr, 5);

    return 0;

}