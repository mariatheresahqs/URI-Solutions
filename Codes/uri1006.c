#include <stdio.h>
#include <math.h>

int main(){

    double A,B,C,M;

    scanf("%lf %lf %lf", &A, &B, &C);

    M= (A*2 + B*3 + C*5)/10;

    printf("MEDIA = %.1f\n", M);

    return 0;

}
