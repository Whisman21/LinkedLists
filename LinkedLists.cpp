/*
Integrantes:
Encabezado:
Fecha:
*/

#include <iostream>
#include <limits>
using namespace std;

struct LinkedList {
 int dato;
LinkedList *next;
}; 

int obtener_valido() {
    int number;
    while (!(cin >> number)) {
        cout << "Entrada inválida: " << endl;
        cin.clear(); // Limpia el estado de error del flujo de entrada.
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descarta la entrada errónea.
    }
    return number;
}
