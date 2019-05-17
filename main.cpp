#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "quicksort2.cpp"
#include <time.h>

using namespace std;

int main()
{
    int tamano;

    cout << "Ingresa tamanyo: " << endl;
    cin >> tamano;

    double *a=new double[tamano];
    // Para que el rand no genere siempre los mismos números, utilizando la hora del sistema
    srand(time(0));


    // Para generar enteros aleatorios usamos rand()
    for (int i = 0; i < tamano; i++) {
        a[i] = (rand() % 100);
    }

    cout << "Array antes de ordenarse: " << endl;
    for (int i = 0; i < tamano; i++) {
        cout << a[i] << " ";
    }

    cout << endl << endl;

    quicksort(a, 0, tamano- 1);

    cout << "Array ordenado " << endl;
    for (int i = 0; i < tamano; i++ ){
        cout << a[i] << "-";
    }

    cout << endl << endl;

    return 0;
}