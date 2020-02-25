#include<stdio.h>
#include"point.h"
using namespace std;

int main() {
    POINT P = MakePOINT(1,1);
    Geser (*P, 2, 3);
    printf("%d%d",Absis(P), Ordinat(P));
    }