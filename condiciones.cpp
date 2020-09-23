#include "iostream"

using namespace std;

void condiciones() {
    int numero, dato = 5;
    cout << "Digite un numero: ";
    cin >> numero;

    if (numero == dato) {
        cout << endl << "El número es 5";
    } else {
        cout << endl << "El número es diferente de 5";
    }
}

void condicionSwitch() {
    int numero;

    cout << "Digite un numero: ";
    cin >> numero;

    switch (numero) {
        case 1: {
            cout << endl << "Es el numero 1";
            break;
        }
        case 2: {
            cout << endl << "Es el numero 2";
            break;
        }
        case 3: {
            cout << endl << "Es el numero 3";
            break;
        }
        case 4: {
            cout << endl << "Es el numero 4";
            break;
        }
        case 5: {
            cout << endl << "Es el numero 5";
            break;
        }
        default: {
            cout << "No esta en el rango de 1-5";
        }
    }
}