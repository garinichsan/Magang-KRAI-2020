#include"point.h"
#include<stdio.h>
#include <string.h>
#include<math.h>
using namespace std;

POINT MakePOINT (float X, float Y){
    POINT P;
    Absis(P)=X;
    Ordinat(P)=Y;
    return P;
}

void BacaPOINT (POINT * P){ 
int a;
int b;
scanf("%d %d",a,b);
Absis(*P)=a;
Ordinat(*P)=b;
}

void TulisPOINT (POINT P){
printf ("%d %d",Absis(P),Ordinat(P)); 
}

bool EQ (POINT P1, POINT P2){
bool hasil;
if(Absis(P1)==Absis(P2) && Ordinat(P1)==Ordinat(P2)){
    hasil=true;
    }
else{
    hasil=false; 
    }
return hasil;
}

int Kuadran (POINT P){
int kuadran;
if(Absis(P)>0 && Ordinat(P)>0){
    kuadran=1;
    }
else if (Absis(P)>0 && Ordinat(P)<0){
    kuadran=2;
    }
else if (Absis(P)<0 && Ordinat(P)<0){
    kuadran=3;
    }
else{
    kuadran=4;
    }
return kuadran;
}

void Geser (POINT *P, float deltaX, float deltaY){
Absis(*P)=Absis(*P)+deltaX;
Ordinat(*P)=Ordinat(*P)+deltaY;
}

float Jarak0 (POINT P){
    return sqrt(pow(Absis(P),2)+(pow(Absis(P),2);
}




