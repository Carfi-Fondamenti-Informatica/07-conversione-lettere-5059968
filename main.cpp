#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char a;
    cin>>a;
    if ((condizione(a)==true)) {
        cout<<a<<endl;
    } else {
        cout<<"errore"<<endl;
    }
    return 0;
}
