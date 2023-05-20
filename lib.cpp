#include "paperino.h"

bool condizione (char&a){
    if((a>='a' and  a<='z') or (a>='A' and a<='Z')){
        if((a>='a' and a<='z')){
            a-=32;
        } else if(a>='A' and a<='Z'){
            a+=32;
        }
        return true;
    } else{
        return false;
    }
}
