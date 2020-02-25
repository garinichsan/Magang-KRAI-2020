#include"point.h"
#include<stdio.h>
#include<math.h>

using namespace std;

/* *** DEFINISI PROTOTIPE PRIMITIF *** */
/* *** Konstruktor membentuk POINT *** */
POINT MakePOINT (float X, float Y){
    POINT P;
    Absis(P) = X;
    Ordinat(P) = Y;
    return P;
}

void BacaPOINT (POINT *P) {
    scanf("%f%f", &Absis(*P), &Ordinat(*P));
}

void TulisPOINT (POINT P){
    printf("(%f,%f)", Absis(P), Ordinat(P));
}

bool EQ (POINT P1, POINT P2)
{
    if ((Absis(P1)==Absis(P2)) and (Ordinat(P1)==Ordinat(P2)))
    {
        return true;}
    else {
        return false;
    }
}

int Kuadran (POINT P){
    if (Absis(P)>0) {
        if(Ordinat(P)>0) {
            return 1;}
        else {return 4;
        }
    }
    else {
        if(Ordinat(P)>0) {
            return 2;
        }
        else {
            return 3;
        }
    }
}

void Geser (POINT *P, float deltaX, float deltaY) {
    Absis(*P) += deltaX;
    Ordinat(*P) += deltaY;
}

float Jarak0 (POINT P){
    float yuhu = Absis(P)*Absis(P)+Ordinat(P)*Ordinat(P);
    return sqrt(yuhu);
}