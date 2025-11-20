#include <ios>
#include <iostream>
#include <limits>

using namespace std;

int main(){

    int num;
    while(true){
        cout << "Inserisci un numero: ";
        
        cin >> num;
        if(cin.fail()){
            cin.clear(); // <-- ripristina cin ad uno stato senza errori
            // ignore rimuove i caratteri del buffer
            // questo ignored ha quindi bisogno di un argomento 
            // che dice quanti caratteri deve cancella dal buffer
            // per poterlo svuotare completamente
            // gli idichiamo il numero più alto di caratteri inseribili
            // però anche di fermarsi quando incontra un carriage return
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ma che hai scritto??" << endl;
            continue;
        }    
        break;
    }
    
    cout << "numero = " << num << endl;
    return 0;
}