#include <stdio.h>
#include "myMath.h"
#define e 2.7182818284

double Exponent(int x) {
    double ex = 1.0;
    while(x > 0)
    {
        ex *= e;
        x--;
    }
   return (ex);
}

double Power(double x, int y){
    double pow = 1.0;
    while(y > 0)
    {
        pow *= x;
        y--;
    }
   return (pow);
}