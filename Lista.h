#ifndef __LISTA_H__
#define __LISTA_H__

template <class T>
struct Nodo{
  T dato;
  Nodo<T>* siguiente;
};

template <class T>
struct Lista {
  Nodo<T>* cabeza;
  Nodo<T>* cola;

  void listaVacia();
  bool esVacia();
  void insertar(T dato, Nodo<T>* pos);
  void insertarCola(T dato);
  Nodo<T>* buscar(T dato);
  void eliminar(T dato);
  Nodo<T>* anterior(T dato);
  Nodo<T>* cabezaL();
  Nodo<T>* colaL();
  void limpiar();
  int longitud();
  void imprimir();
};

#include "Lista.hxx"

#endif