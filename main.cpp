#include "cdll.h"
#include <iostream>
using namespace std;
/// NAMA : Kadek Rizky Fransiscca Putra
/// NIM  : 1301194035
int main(){
    List L;
    address P,P1,P2,P3,P4,P5;
    string data;
    data [1] = 'c';
    data [2] = 'a';
    data [3] = 't';

    createList(L);
    createNewElmt('a',P1);
    insertFirst(L, P1);

    createNewElmt('t',P2);
    insertFirst(L, P2);

    createNewElmt('t', P3);
    insertAfter(L, P1, P3);

    createNewElmt('c', P4);
    insertAfter(L, P2, P4);

    createNewElmt('a', P5);
    insertAfter(L, P3, P5);

    createNewElmt('s',P1);
    insertLast(L, P1);

    createNewElmt('c',P1);
    insertLast(L, P1);

    createNewElmt('a',P1);
    insertLast(L, P1);
    prinInfo(L);
    cout<<endl;



    cout<<"Banyaknya kata cat pada list ini adalah : ";
    cout<<countWord("cat", L);
    cout<<endl;

    return 0;

}
