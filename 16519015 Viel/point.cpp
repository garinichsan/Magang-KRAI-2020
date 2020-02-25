#include <math.h>
#include <stdio.h>
#include "point.h"
using namespace std;

POINT MakePOINT(float x, float y){
    POINT pp;
    pp.X = x;
    pp.Y = y;
    return pp;
}

void BacaPOINT(POINT *p){
    float x,y;
    scanf("%f %f", &x, &y);
    *p = MakePOINT(x,y);
}

void TulisPOINT(POINT p){
    printf("(%.2f, %.2f)",p.X,p.Y);
}

bool EQ(POINT p1, POINT p2){
    return (abs(p1.X - p2.X) < 0.0001 && (abs(p1.Y - p2.Y)) < 0.0001);
}

int Kuadran(POINT p){
    int kuadran = 1;
    if (p.X < 0 && p.Y > 0) kuadran = 2;
    if (p.X < 0 && p.Y < 0) kuadran = 3;
    if (p.X > 0 && p.Y < 0) kuadran = 4;
    return kuadran;
}

void Geser(POINT *p, float deltaX, float deltaY){
    p->X += deltaX;
    p->Y += deltaY;

}

float Jarak0(POINT p){
    return sqrt(pow(p.X, 2) + pow(p.Y, 2));
}