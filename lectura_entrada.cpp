#include "iostream"

using namespace std;

void lectura() {
    int number;
//    cout << number;

    cout << "Digite un numero: ";
    cin >> number;

    cout << "\nEl numero que digito es: " << number;
}

void echo() {
    cout << "Hello, World!" << std::endl;
    cout << "Hello, World :D" << endl;
    cout << "Hello, World :D\n";
    cout << "Hello, World :DD";
}

void operaciones() {
    int n1;
    int n2;
    int suma = 0;
    int resta = 0;
    int multiplicacion = 0;
    int division = 0;
    int resto = 0;

    cout << "\nDigite un numero: ";
    cin >> n1;
    cout << endl << "Digite otro numero: ";
    cin >> n2;

    suma = n1 + n2;
    resta = n1 - n2;
    division = n1 / n2;
    resto = n1 % n2;
    multiplicacion = n1 * n2;

    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La division es: " << division << endl;
    cout << "La multiplicación es: " << multiplicacion << endl;
    cout << "El resto es: " << resto << endl;
}

/**
 * Calculo de iva de un precio por pantalla
 */
void ejercicio1() {
    float precio;
    float total;
    cout << "Escribe el precio del producto sin iva: ";
    cin >> precio;
    total = precio * 21 / 100 + precio;
    cout << "\nEl precio con iva es: " << total;
}

void ejercicio2() {
    int edad;
    char sexo[10];
    float altura;

    cout << "Digite tu edad: ";
    cin >> edad;
    cout << "\nDigite tu sexo: ";
    cin >> sexo;
    cout << "\nDigite su altura en metros: ";
    cin >> altura;

    cout << "\nEdad: " << edad << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura en metros: " << altura << endl;
}