#include <stdio.h>
#include <string.h>
#include "point.h"
#include <math.h>

POINT MakePOINT (float x, float y){
    POINT p;
    p.X = x;
    p.Y = y;
    return p;
}

void BacaPOINT (POINT *p){
    float x,y;
    scanf("%f",&x);
    scanf("%f",&y);
    *p = MakePOINT(x,y);
}

void TulisPOINT (POINT p){
    printf("%.2f %.2f", p.X , p.Y);
}

bool EQ (POINT p1, POINT p2){
    if ((abs(p1.X-p2.X) <= 0.001) && (abs(p1.Y-p2.Y)<=0)) return true;
    else return false;
}

int Kuadran (POINT p){
    if ((p.X > 0) && (p.Y > 0)) return 1;
    else if ((p.X < 0) && (p.Y > 0)) return 2;
    else if ((p.X < 0) && (p.Y < 0)) return 3;
    else if ((p.X > 0) && (p.Y < 0)) return 4;
}

void Geser (POINT *p, float deltaX, float deltaY){
    p->X += deltaX;
    p->Y += deltaY;
}

float Jarak0 (POINT p){
    return (sqrt(pow(p.X,2)+pow(p.Y,2)));
}

/*int main(){
    POINT p1,p2;
    printf("Masukkan point 1:");
    BacaPOINT (&p1);
    TulisPOINT (p1);
    printf("\nMasukkan point 2:");
    BacaPOINT (&p2);
    TulisPOINT (p2);

    printf("\nApakah sama?: %s", (EQ (p1,p2)) ? "True" : "False");
    printf("\nKuadran p1: %d", Kuadran(p1));
    printf("\nKuadran p2: %d", Kuadran(p2));

    printf("\nPergeseran p1 +1: ");
    Geser (&p1,1,1);
    TulisPOINT (p1);
    printf("\nPergeseran p2 +2: ");
    Geser (&p2,1,1);
    TulisPOINT (p2);

    printf("\nJarak p1: %f", Jarak0(p1));
    printf("\nJarak p1: %f", Jarak0(p2));


    return 0;
}*/