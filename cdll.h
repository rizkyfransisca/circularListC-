#ifndef CIRCULARLIST_H_INCLUDED
#define CIRCULARLIST_H_INCLUDED
#include <iostream>
using namespace std;
typedef char infotype;
typedef struct elmList *address;
struct elmList {
    infotype info ;
    address prev ;
    address next ;
};
struct List{
    address first;
};
bool isEmpty(List L);
void createList(List &L);
void createNewElmt(infotype X, address &P);
void insertFirst(List &L, address P);
void insertAfter(List &L, address &Prec, address P);
void insertLast(List &L, address P);
void deleteFirst(List &L, address &P);
void deleteAfter(address Prec, address &P);
void deleteLast(List &L, address &P);
int countWord(string data, List L);
void prinInfo(List L);


#endif // CDLL_H_INCLUDED
