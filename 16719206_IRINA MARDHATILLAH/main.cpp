#include "point.h"
#include "point.cpp"
#include <stdio.h>

int main()
{
    POINT P, P1;
    float x, y,deltaX, deltaY;

    MakePOINT(x, y);

    BacaPOINT(&P1);

    TulisPOINT(P1);

    printf("%s \n", EQ(P, P1) ? "True" : "False");

    printf("%d \n", Kuadran(P1));

    scanf("%f %f", &deltaX, &deltaY);

    Geser(&P, deltaX, deltaY);

    TulisPOINT(P);

    printf("%f", Jarak0(P));

    return 0;
}
