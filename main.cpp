#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char b= 'c';
    cin>>b;
    if ((condizione(b)==true)) {
        cout<<conversione(b)<<endl;
    } else {
        cout<<"errore"<<endl;
    }
    return 0;
}
