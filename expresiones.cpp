#include "iostream"

using namespace std;

void ejercicio3() {
    float a, b, resultado = 0;
    cout << "Digite el valor de a: ";
    cin >> a;
    cout << "\nDigite el valor de b: ";
    cin >> b;
    resultado = (a / b) + 1;
    cout.precision(2);
    cout << "\nEl resultado es: " << resultado << endl;
}

void ejercicio4() {
    float a, b, c, d, resultado = 0;
    cout << "Digite el valor de a: ";
    cin >> a;
    cout << "\nDigite el valor de b: ";
    cin >> b;
    cout << "Digite el valor de c: ";
    cin >> c;
    cout << "\nDigite el valor de d: ";
    cin >> d;
    resultado = (a + b) / (c + d);
    cout.precision(2);
    cout << "\nEl resultado es: " << resultado << endl;
}

void ejercicio5() {
    int x, y, aux;
    cout << "Digite el valor de x: ";
    cin >> x;
    cout << "Digite el valor de y: ";
    cin >> y;
    aux = x;
    x = y;
    y = aux;

    cout << endl << "El nuevo valor de x es: " << x;
    cout << endl << "El nuevo valor de y es: " << y;
}
