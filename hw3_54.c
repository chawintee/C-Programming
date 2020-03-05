#include <stdio.h>
int main () {
    float x, y, sum, mi, mul, div;
    printf("Enter a real number x y :");
    scanf("%f %f",&x,&y);

    sum = x + y;
    mi = x - y;
    mul = x * y;
    div = x / y;

    printf("\n%.2f + %.2f = %.3f\n",x, y, sum);
    printf("%.2f - %.2f = %.3f\n",x, y, mi);
    printf("%.2f * %.2f = %.3f\n",x, y, mul);
    printf("%.2f / %.2f = %.3f\n",x, y, div);

    return 0;
}