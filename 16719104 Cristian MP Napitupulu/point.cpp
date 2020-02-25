#include "point.h"
#include <stdio.h>
#include <math.h>
using namespace std;

POINT MakePOINT (float x, float y){
    POINT P;
    Absis  (P) = x;
    Ordinat(P) = y;

    return P;
}

void BacaPOINT (POINT *P){
    float x;
    float y;
    scanf("%f %f", &x, &y);
    Absis(*P) = x;
    Ordinat(*P) = y;

}

void TulisPOINT (POINT P){
   
    printf("%.3f %.3f", Absis(P), Ordinat(P));

}

bool EQ (POINT P1, POINT P2){
    return Absis(P1) == Absis(P2) && Ordinat(P1) == Ordinat(P2);

}

int Kuadran (POINT P){
    if (Absis (P) > 0 && Ordinat (P) > 0){
        return 1;
    }
    if (Absis (P) < 0 && Ordinat (P) > 0){
        return 2;
    }
    if (Absis (P) < 0 && Ordinat (P) < 0){
        return 3;
    }
    if (Absis (P) > 0 && Ordinat (P) < 0){
        return 4;
    }
}

void Geser (POINT *P, float deltaX, float deltaY){
    Absis(*P) += deltaX;
    Ordinat(*P) += deltaY;
}

float Jarak0 (POINT P){
    return (sqrt(pow(Absis(P), 2) + pow(Ordinat(P), 2)));
}