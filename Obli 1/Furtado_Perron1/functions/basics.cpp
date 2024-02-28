#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>

#include "../headers/basics.hpp"

void insertarInicio(Table &db, Table newTable)
{
  if (!db)
  {
    db = newTable;
    db->sigTable = NULL;
    db->antTable = NULL;
  }
  else
  {
    db->antTable = newTable;
    newTable->sigTable = db;
    db = newTable;
  }
}

void insertarInicioDato(Dato &pointer, Dato newData)
{
  if (!pointer->sigTup)
  {
    pointer->sigTup = newData;
    newData->antTup = pointer;
    newData->sigTup = NULL;
    newData->sigCol = NULL;
    newData->antCol = NULL;
  }
  else
  {
    newData->sigTup = pointer->sigTup;
    pointer->sigTup->antTup = newData;
    pointer->sigTup = newData;
    newData->antTup = pointer;
  }
}
void insertarInicioCol(Dato &col, Dato newCol)
{
  if (!col)
  {
    col = newCol;
    col->sigTup = NULL;
    col->antTup = NULL;
    col->sigCol = NULL;
    col->antCol = NULL;
  }
  else
  {
    newCol->sigCol = col;
    col->antCol = newCol;
    col = newCol;
  }
}

Table createTableNode(char *name)
{
  Table n = new table;
  n->name = name;
  n->pointer = NULL;
  n->sigTable = NULL;
  n->antTable = NULL;
  return n;
}

Dato createDataNode(char *NombreCol, char *tipoCol, char *calif)
{
  Dato n = new dato;
  n->attName = NombreCol;
  n->tipo = tipoCol;
  n->calif = calif;
  n->valChar = new char[100];
  n->valInt = NULL;

  n->sigCol = NULL;
  n->antCol = NULL;
  n->sigTup = NULL;
  n->antTup = NULL;
  return n;
}

void showTables(Table db)
{
  Table aux = db;
  if (!aux)
    printf("No hay tablas\n");
  else
  {
    while (aux)
    {
      cout << "======================" << endl;
      cout << "TABLE: " << aux->name << endl;
      cout << "======================" << endl;
      aux = aux->sigTable;
    }
  }
}

/*void insertarFinal(Lista &lista, Lista nuevo)
{
  if (listaVacia(lista))
  {
    lista = nuevo;
    lista->ant = NULL;
    lista->sig = NULL;
  }
  else
  {
    nuevo->ant = lista;
    nuevo->sig = NULL;
    while (nuevo->ant->sig)
      nuevo->ant = nuevo->ant->sig;
    nuevo->ant->sig = nuevo;
  }
}
void eliminarX(Lista &lista, int val){
  if(listaVacia(lista)) return;
  Lista aux = lista, aux_2;
  while(aux){
    if(aux->val == val){
      if(!aux->ant){
        lista = aux->sig;
        lista->ant = NULL;
        delete aux;
        aux = lista;
      }else{
        aux->ant->sig = aux->sig;
        aux->sig->ant = aux->ant;
        aux_2 = aux;
        aux = aux->sig;
        delete aux_2;
      }
    }else aux = aux->sig;
  }
}
void insertarOrdenado(Lista &lista, Lista nuevo)
{
  Lista aux_1 = lista, aux_2;
  int flag = 0;
  if (listaVacia(lista))
    lista = nuevo;
  else
  {
    while (aux_1->sig)
    {
      if (aux_1->sig->val >= nuevo->val)
      {
        nuevo->sig = aux_1->sig;
        nuevo->ant = aux_1;
        aux_1->sig->ant = nuevo;
        aux_1->sig = nuevo;
        flag = 1;
        break;
      }
      else
        aux_1 = aux_1->sig;
    }
    if (flag == 0)
    {
      if (aux_1->val > nuevo->val)
      {
        if (aux_1->ant)
        {
          aux_1->ant->sig = nuevo;
          nuevo->ant = aux_1->ant;
          aux_1->ant = nuevo;
          nuevo->sig = aux_1;
        }
        else
        {
          aux_1->ant = nuevo;
          nuevo->ant = NULL;
          nuevo->sig = aux_1;
        }
      }
      else
      {
        nuevo->sig = NULL;
        nuevo->ant = aux_1;
        aux_1->sig = nuevo;
      }
    }
  }
}

void mostrarListaInv(Lista lista)
{
  Lista aux = lista;
  if (listaVacia(lista))
    printf("Lista vac�a\n");
  else
    while (aux->sig)
      aux = aux->sig;
  while (aux->ant)
  {
    printf("Valor: %d \n", aux->val);
    aux = aux->ant;
  }
}
void borrarNodo( Lista &lista, int valor ){
  Lista aux = lista;
  if(!listaVacia(lista)){
    while(aux){
      if(aux->val == valor){
  aux->
      }
      aux = aux->sig;
    }
  }
}
bool listaVacia(Lista lista)
{
  return (lista == NULL);
}
*/