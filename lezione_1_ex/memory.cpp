#include <cfloat>
#include <climits>
#include <cstdio>
#include <iostream>
#include <limits>
#include <ostream>

using namespace std;

void formatText(const char* nome, int value){
    printf("%s occupa %d byte\n", nome, value);
}

int main() {
    int b = 118978293;
    formatText("programma", sizeof(main()));
    formatText("number", sizeof(b));
    cout << "INT max = " << numeric_limits<int>::max() << endl;
    cout << "INT max = " << numeric_limits<int>::min() << endl;
    cout << "FLOAT max = " << numeric_limits<float>::max() << endl;
    cout << "FLOAT max = " << numeric_limits<float>::min() << endl;

    // possibili alternative sono le variabili
    INT_MAX; // numeric_limits<int>::max()
    INT_MIN; // numeric_limits<int>::min()
    FLT_MAX; // numeric_limits<float>::max()
    DBL_MAX; // numeric_limits<double>::max()
    // dichiarate in <climits> e <cfloat>

    int provaInput;
    cout << "inserisci un numero: ";
    cin >> provaInput;
    cout << "prova a stampare il numero " << provaInput;

    return 0;
}