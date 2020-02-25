#include "point.h"
#include <stdio.h>

int main (){
    POINT a;
    a = MakePOINT(-1,20);
    TulisPOINT(a);
    printf("\n");
    POINT b;
    BacaPOINT(&b);
    TulisPOINT(b);
}