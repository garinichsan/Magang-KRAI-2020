#include <stdio.h>
#include <math.h>
#include "point.h"
using namespace std;

POINT MakePOINT (float X, float Y){
    POINT P;
    P.X = X;
    P.Y = Y;
    return P;
}

void BacaPOINT (POINT * P){
    float X;
    float Y;
    scanf("%f %f", &X,  &Y);
    *P = MakePOINT(X, Y);
}

void TulisPOINT (POINT P){
    printf("(%.2f, %.2f)", P.X, P.Y);
}
bool EQ (POINT P1, POINT P2){
    return (abs(P1.X-P2.X)<0.0001 && abs(P1.Y-P2.Y)<0.0001);
}

int Kuadran (POINT P){
    if ((P.X > 0) && (P.Y > 0)) return 1;
    if ((P.X < 0) && (P.Y > 0)) return 2;
    if ((P.X < 0) && (P.Y < 0)) return 3;
    if ((P.X > 0) && (P.Y < 0)) return 4;
}

void Geser (POINT *P, float deltaX, float deltaY){
    (*P).X += deltaX;
    P->Y = P->Y + deltaY;
}

float Jarak0 (POINT P){
    return(sqrt((pow(P.X, 2)+pow(P.Y, 2))));
}
