struct dato{
  char *attName; // NOMBRE DEL ATRIBUTO (COLUMNA)
  char *tipo;  // TIPO DEL ATRIBUTO (char o int)
  char *calif; // SI ES PRIMARY KEY O QUE
  char *valChar; // EN CASO DE QUE SEA CHAR
  int *valInt; // EN CASO DE QUE SEA INT

  dato *sigCol; 
  dato *antCol;
  dato *sigTup;
  dato *antTup;
};
typedef dato *Dato;

struct table{
  char *name; // NOMBRE DE LA TABLA
  Dato pointer; // PUNTERO A LA PRIMERA COLUMNA
  table *sigTable;
  table *antTable;
};
typedef table *Table;

enum retorno {OK, ERROR, NO_IMPLEMENTADA};
typedef enum retorno TipoRet;

TipoRet createTable(char *, int, Table &);
TipoRet addCol(char *, char *, char *, char *, Table &);
TipoRet insertInto(char *, char *, char *, Table &);
TipoRet printMetadata(char *);
TipoRet printDataTable(char *, char *);
Dato crearNodo(char);  

// PROPIAS

void equal(Dato &, int *, char *);

