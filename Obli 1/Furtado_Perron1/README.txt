TODO:

printTable: NO ORDENA COLUMNAS integer.
insertInto: NO SE CHEQUEA SI PK UNICO EN integers.

- RELLENAR TODOS LOS new char CON NULL (DA PROBLEMAS EN ZINJAI) (HACERLO EN CASO DE QUE NO SE LE ASIGNE UN VALOR)

BLOQUES:

En caso de que se permita ingresar datos a menos del total de las columnas.
Esto iría en la función insertInto luego de la llamada a insertarInicioDato.

// Aqui se crea un nodo EMPTY en todas las columnas adyacentes.

    /*while(pointer_aux_2){
      if(pointer_aux_2 != pointer_aux) {
        insertarInicioDato(pointer_aux_2, createDataNode(pointer_aux->attName, pointer_aux->tipo, pointer_aux->calif));
      }
      pointer_aux_2 = pointer_aux_2->sigDato;
    }
    pointer_aux_2 = pointer_aux;
    while(pointer_aux_2){
      if(pointer_aux_2 != pointer_aux) {
        insertarInicioDato(pointer_aux_2, createDataNode(pointer_aux->attName, pointer_aux->tipo, pointer_aux->calif));
      }
      pointer_aux_2 = pointer_aux_2->antDato;
    }*/
    
// =============================================================

C2:

/*insertarInicioDato(pointer_aux, createDataNode(pointer_aux->attName, pointer_aux->tipo, pointer_aux->calif));
    if (strcmp(pointer_aux->tipo, _integer) != 0)
    {
      pointer_aux->sigTup->valChar = new char[100];
      strcpy(pointer_aux->sigTup->valChar, matrizVals[c]);
    }
    else
    {
      pointer_aux->sigTup->valInt = new int;
      int valor = strtol(matrizVals[c], NULL, 10);
      *pointer_aux->sigTup->valInt = valor;
    }*/

    /*cout << "ATT: " << pointer_aux->sigTup->attName << endl;
    if (!strcmp(pointer_aux->sigTup->tipo, "character"))
      cout << "VAL: " << pointer_aux->sigTup->valChar << endl;
    else
      cout << "VAL: " << pointer_aux->sigTup->valInt << endl;
    */