#include "cdll.h"
#include <iostream>
using namespace std;
bool isEmpty(List L){
    if (L.first == NULL){
        return true;
    }
        return false;
}
void createList(List &L){
    L.first = NULL;
}
void createNewElmt(infotype X, address &P){
    P = new elmList;
    P->info = X;
    P->next = NULL;
    P->prev = NULL;
}
void insertFirst(List &L, address P){
   if (L.first == NULL){
        L.first = P;
        L.first->next = P;
        L.first->prev = P;

    }else{
        P->next = L.first;
        P->prev = L.first->prev;
        L.first->prev = P;
        P->prev->next = P;
        L.first = P;
    }
}
void insertAfter(List &L, address &Prec, address P){
    P->next = Prec->next;
    P->prev = Prec;
    Prec->next = P;
    P->next->prev = P;
}
void insertLast(List &L, address P){
    P->prev = L.first->prev;
    P->next = L.first;
    L.first->prev->next = NULL;
    P->prev->next = P;
    L.first->prev->next = P;
    L.first->prev = P;
}
void deleteFirst(List &L, address &P){
    P = L.first;
    L.first = P->next;
    P->next->prev = P->prev;
    P->prev->next = P->next;
    P->prev = NULL;
    P->next = NULL;
    delete P;
}
void deleteAfter(address Prec, address &P){
    P = Prec->next;
    Prec->next =P->next;
    P->next->prev = Prec;
    P->next = NULL;
    P->prev = NULL;
    delete P;
}
void deleteLast(List &L, address &P){
    P = L.first->prev;
    L.first->prev = P->prev;
    P->prev->next = L.first;
    P->prev = NULL;
    P->next = NULL;
    delete P;
}
int countWord(string data, List L){
    address bantuan = L.first;
    int jml = 0, hitung = 0;
    while (jml != 1){
        string inistring = "";
        address bantuan1 = bantuan;
        int i = 0, l = data.length();
        while (i<l){
            string text(1, bantuan1->info);
            inistring = inistring + text;
            bantuan1 = bantuan1->next;
            i++;
        }
        if (inistring == data){
            hitung++;
        }
        bantuan = bantuan->next;
        if(bantuan == L.first){
            jml++;
        }
    }
    return hitung;
}
void prinInfo(List L){
    if (isEmpty(L) == true){
        cout<<"List tidak ada";
    }else{
        address bantuan = L.first;
        if (bantuan != NULL){
            cout<<bantuan->info<<" ";
            bantuan = bantuan->next;
        }
        while (bantuan != NULL && bantuan != L.first){
            cout<<bantuan->info<<" ";
            bantuan = bantuan->next;
        }
    }
    cout<<endl;
}
