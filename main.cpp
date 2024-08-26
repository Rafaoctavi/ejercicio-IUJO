#include <iostream>
#include <cmath>

using namespace std;

// Función para calcular permutaciones
long long permutacion(int n, int r) {
    long long resultado = 1;
    for (int i = n; i > n - r; i--) {
        resultado *= i;
    }
    return resultado;
}

// Función para calcular combinaciones
long long combinacion(int n, int r) {
    long long resultado = 1;
    for (int i = n; i > n - r; i--) {
        resultado *= i;
    }
    for (int i = 1; i <= r; i++) {
        resultado /= i;
    }
    return resultado;
}

// Función para calcular exponentes
long long exponente(int base, int exponente) {
    long long resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int opcion;
    do {
        cout << "¿Qué operación deseas realizar?" << endl;
        cout << "1. Permutación" << endl;
        cout << "2. Combinación" << endl;
        cout << "3. Exponente" << endl;
        cout << "4. Salir" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int n, r;
                cout << "Ingrese el número de elementos (n): ";
                cin >> n;
                cout << "Ingrese el número de elementos a permutar (r): ";
                cin >> r;
                cout << "La permutación de " << n << " elementos tomados de " << r << " en " << r << " es: " << permutacion(n, r) << endl;
                break;
            }
            case 2: {
                int n, r;
                cout << "Ingrese el número de elementos (n): ";
                cin >> n;
                cout << "Ingrese el número de elementos a combinar (r): ";
                cin >> r;
                cout << "La combinación de " << n << " elementos tomados de " << r << " en " << r << " es: " << combinacion(n, r) << endl;
                break;
            }
            case 3: {
                int base, exponente;
                cout << "Ingrese la base: ";
                cin >> base;
                cout << "Ingrese el exponente: ";
                cin >> exponente;
                cout << base << " elevado a la potencia de " << exponente << " es: " << exponente << endl;
                break;
            }
            case 4:
                cout << "Adiós!" << endl;
                break;
            default:
                cout << "Opción inválida. Por favor, inténtelo de nuevo." << endl;
        }
    } while (opcion != 4);

    return 0;
}