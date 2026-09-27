/* 
   ====================================================================
   Materia: Laboratorio de Programación (LPR) — 5° Ano
   Institución: E.E.S.T. N° 99 "Juana Azurduy" — Vicente López
   Archivo: src/main.cpp
   Actividad 6: Suite Integradora de Bajo Nivel
   ====================================================================
*/

#include <iostream>

using namespace std;

// Prototipos de funciones modulares
int sumaRecursiva(int n);
void intercambiarValores(int* ptrA, int* ptrB);

int main() {
    cout << "================================================================" << endl;
    cout << "  TALLER INTEGRADOR REPASO - ESTUDIANTE: Manuel Ascencio Padilla" << endl;
    cout << "=====================================================" << endl;

    // --- RETO 1: RECURSIVIDAD ---
    cout << "\n=== RETO 1: SUMA RECURSIVA ===" << endl;
    int num = 5;
    cout << "Suma acumulada de 1 hasta " << num << ": " << sumaRecursiva(num) << endl;

    // --- RETO 2: ARRAYS Y BÚSQUEDA SECUENCIAL ---
    cout << "\n=== RETO 2: BÚSQUEDA EN MEMORIA CONTIGUA ===" << endl;
    const int TAM = 10;
    int vectorDatos[TAM] = {12, 45, 78, 90, 122, 5, 18, 33, 67, 99};
    int numeroBuscar = 18;
    bool hallado = false;

    for (int i = 0; i < TAM; i++) {
        if (vectorDatos[i] == numeroBuscar) {
            cout << "[SISTEMA] Valor " << numeroBuscar << " hallado en el indice [" << i << "]" << endl;
            cout << "          Direccion RAM Hexadecimal: " << &vectorDatos[i] << endl;
            hallado = true;
            break; // Interrupción optimizada O(n)
        }
    }

    if (!hallado) {
        cout << "[SISTEMA] El valor " << numeroBuscar << " no existe en el arreglo." << endl;
    }

    // --- RETO 3: INTERCAMBIO CON PUNTEROS ---
    cout << "\n=== RETO 3: INTERCAMBIO DE CELDAS ===" << endl;
    int x = 100, y = 500;
    cout << "Valores previos  -> X: " << x << " (RAM: " << &x << ") | Y: " << y << " (RAM: " << &y << ")" << endl;

    // Invocación enviando direcciones físicas mediante '&'
    intercambiarValores(&x, &y);

    cout << "Valores actuales -> X: " << x << " (RAM: " << &x << ") | Y: " << y << " (RAM: " << &y << ")" << endl;
    cout << "=====================================================" << endl;

    return 0; // Código 0: Ejecución exitosa
}

// Reto 1: Función recursiva con caso base
int sumaRecursiva(int n) {
    if (n <= 0) return 0; // Caso base de corte
    return n + sumaRecursiva(n - 1);
}

// Reto 3: Intercambio con punteros y desreferenciación
void intercambiarValores(int* ptrA, int* ptrB) {
    int temporal = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temporal;
}