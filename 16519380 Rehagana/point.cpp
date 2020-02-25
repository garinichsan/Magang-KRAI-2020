#include <stdio.h>
#include "point.h"
#include <math.h>
using namespace std;
POINT MakePOINT (float x, float y){
    POINT P;
    Absis(P) = x;
    Ordinat(P) = y;
    return P;
}

void BacaPOINT (POINT *P){
    float x,y;
    scanf("%f %f",&x,&y);
    Absis(*P) = x;
    Ordinat(*P) = y;
}

void TulisPOINT (POINT P) {
    printf("(%.2f,%.2f)\n",Absis(P),Ordinat(P));
}

bool EQ (POINT P1, POINT P2){
    if (Absis(P1)==Absis(P2) && Ordinat(P1) == Ordinat(P2)) return true;
    else return false;
}

int Kuadran (POINT P){
    if (Absis(P)>0 && Ordinat(P)>0) return 1;
    else if (Absis(P)<0 && Ordinat(P)>0) return 2;
    else if (Absis(P)<0 && Ordinat(P)<0) return 3;
    else return 4;
}

void Geser (POINT *P, float deltaX, float deltaY){
    Absis(*P) = Absis(*P) + deltaX;
    Ordinat (*P) = Ordinat(*P) + deltaY;
}

float Jarak0 (POINT P){
    return (sqrt(Absis(P)*Absis(P)+Ordinat(P)*Ordinat(P)));
}