#include "point.h"
#include <stdio.h>
int main(){
    POINT a,b;
    printf("\nMasukkan Point A: ");
    BacaPOINT(&a);
    printf("\nMasukkan Point B: ");
    BacaPOINT(&b);
    TulisPOINT(a);
    TulisPOINT(b);
    printf("kuadran a: %d", Kuadran(a));
    printf("kuadran b: %d", Kuadran(b));
    printf("jarak a: %f", Jarak0(a));
    printf("jarak b: %f", Jarak0(b));
    return 0;
}