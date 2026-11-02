
#include<iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;

    Nodo(int valor) {
        dato = valor;
        siguiente = NULL;
    }
};

void insertarFinal(Nodo *&inicio, int valor) {
    Nodo *nuevo = new Nodo(valor);

    if (inicio == NULL) {
        inicio = nuevo;
    } else {
        Nodo *aux = inicio;

        while (aux->siguiente != NULL) {
            aux = aux->siguiente;
        }

        aux->siguiente = nuevo;
    }
}

void mostrar(Nodo *inicio) {
    Nodo *aux = inicio;

    while (aux != NULL) {
        cout << aux->dato << " -> ";
        aux = aux->siguiente;
    }

    cout << "NULL\n";
}

int contar(Nodo *inicio) {
    int cantidad = 0;
    Nodo *aux = inicio;

    while (aux != NULL) {
        cantidad++;
        aux = aux->siguiente;
    }

    return cantidad;
}

int main() {
    Nodo *lista = NULL;
    int numero;

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese numero: ";
        cin >> numero;
        insertarFinal(lista, numero);
    }

    cout << "\nLista: ";
    mostrar(lista);

    cout << "Cantidad de nodos: " << contar(lista);

    return 0;
}
