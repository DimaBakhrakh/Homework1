#include <stdio.h>
#include "myMath.h"
int main(){
    double x = 0;
    printf("Please insert a number: \n");
    scanf("%lf", &x);
    printf("Please inse");
    double func1, func2, func3;
    func1 = (double)(sum((Exponent((int)x)), (Power(x, 3))));
    func1 = (double)(sub((func1), 2.0));
    func2 = (double)(sum((mul(x, 3.0)), (mul(Power(x, 2), 2.0))));
    func3 = (double)(sub((div(mul(Power(x, 3), 4.0), 5.0)), (mul(x, 2.0))));
    printf("The value of f(x)=e^x + x^3 - 2 is: %.4f\n", func1);
    printf("The value of f(x)=3x + 2x^2 is: %.4f\n", func2);
    printf("The value of f(x)=4x^3/5 - 2x is: %.4f\n", func3);
    return 0;
}