void help();
void credits();
void swap(Dato &);
void deleteAllTuplas(Dato &);
void deleteWholeTupla(Dato &);
void fillAtr(char *, int, int, char *);
void orderTable(Dato &, char [50][100], int);
void searchCondition(Dato &, char *, int *, char *);

bool thereIsPk(Dato);
bool alreadyColumn(Dato, char *);

char validateEntry(Dato, char [50][100], char [50][100], int);
