#include <stdio.h>
#include <math.h>
int main(void) {
float x, fx;
printf("Digite o valor de X: ");
scanf("%f", &x);
fx= sqrt(x)+(x/2)+pow(x,x);
printf("%.2f", fx);
return 0;
}
