#include <iostream>
#include "Lista.h"

template <class T>
void Lista<T>::listaVacia() {

}

template <class T>
bool Lista<T>::esVacia() {

}

template <class T>
void Lista<T>::insertar(T dato, Nodo<T>* pos) {
  Nodo<T>* nuevo = new Nodo<T>;
  nuevo->dato = dato;
  
  if (pos == cabeza) {
    nuevo->siguiente = cabeza;
    cabeza = nuevo;
  } else {
    Nodo<T>* loc = cabeza;
    while (loc->siguiente != pos && loc->siguiente != NULL)
      loc = loc->siguiente;

    if (pos == cola) {
      loc->siguiente = nuevo;
      nuevo->siguiente = NULL;
      cola = nuevo;
    } else if (loc->siguiente != NULL) {
      nuevo->siguiente = loc->siguiente;
      loc->siguiente = nuevo;
    }
  }
}

template <class T>
void Lista<T>::insertarCola(T dato) {
  Nodo<T>* nuevo = new Nodo<T>;
  nuevo->dato = dato;
  nuevo->dato = NULL;
  cola->siguiente = nuevo;
  cola = nuevo;
}

template <class T>
Nodo<T>* Lista<T>::buscar(T dato) {

}

template <class T>
void Lista<T>::eliminar(T dato) {
  
  Nodo<T>* loc = cabeza;
  if (cabeza->dato == dato) {
    cabeza = cabeza->siguiente;
    delete loc;
  }
  
  Nodo<T>* aloc;
  while (loc != NULL && 
         loc->dato != dato) {
    aloc = loc;
    loc = loc->siguiente;
  }

  if (cola->dato == dato) {
    cola = aloc;
    delete loc;
  } else if (loc != NULL) {
    aloc->siguiente = loc->siguiente;
    delete loc;
  }

}

template <class T>
Nodo<T>* Lista<T>::anterior(T dato) {

}

template <class T>
Nodo<T>* Lista<T>::cabezaL() {

}

template <class T>
Nodo<T>* Lista<T>::colaL() {

}

template <class T>
void Lista<T>::limpiar() {

}

template <class T>
int Lista<T>::longitud() {

}

template <class T>
void Lista<T>::imprimir() {

}