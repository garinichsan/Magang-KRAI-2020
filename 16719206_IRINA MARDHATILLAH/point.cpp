#include "point.h"
#include <stdio.h>
#include <math.h>

using namespace std;

POINT MakePOINT(float x, float y){
    POINT P;
    P.X = x;
    P.Y = y;

    return P;
}

void BacaPOINT(POINT *P){
    float x, y;
    printf("Masukkan absis dan ordinat: ");
    scanf("%f %f", &x, &y);
    *P = MakePOINT(x,y);
}

void TulisPOINT(POINT P){
    printf("(%f, %f)\n", P.X, P.Y);
}

bool EQ(POINT P1, POINT P2){
    return P1.X == P2.X && P1.Y == P2.Y;
}

int Kuadran(POINT P){
    if (P.X> 0 && P.Y>0){
        return 1;
    }
    else if (P.X<0 && P.Y>0){
        return 2;
    }
    else if (P.X< 0 && P.Y<0){
        return 3;
    }
    else{
       return 4;
    }
}

void Geser(POINT *P, float deltaX, float deltaY){
    P->X += deltaX;
    P->Y += deltaY;
}

float Jarak0(POINT P){
    return sqrt(pow(P.X, 2)+pow(P.Y, 2));
}
