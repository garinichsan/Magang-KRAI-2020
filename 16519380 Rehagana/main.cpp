#include <stdio.h>
#include <math.h>
#include "point.h"
using namespace std;

int main(){
    POINT P = MakePOINT(3,4);
    BacaPOINT (&P);
    TulisPOINT (P);
    float a = Jarak0 (P);
    POINT M = MakePOINT(6,8);
    bool x = EQ (M,P);
    int k = Kuadran (P);
    Geser (&P,-1,5);
    TulisPOINT (P);
    printf("%.2f %d %d",a,x,k);
}