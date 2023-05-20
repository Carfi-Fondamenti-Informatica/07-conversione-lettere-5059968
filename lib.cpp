#include "paperino.h"

bool condizione (char a){
    if((a>='a' and  a<='z') or (a>='A' and a<='Z')){
        return true;
    } else{
        return false;
    }
}
char conversione (char a){
    char b;
    if((a>='a' and a>='z')){
        b=a+32;
        return b;
    } else if(a>='A' and a>='Z'){
        b=a-32;
        return b;
    }
}
