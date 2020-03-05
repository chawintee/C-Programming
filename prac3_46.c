#include<stdio.h>
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286
int main(){
    float radius,area,circumference;
    printf("Please enter radius of cycle :");
    scanf("%f",&radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius ;
    printf("Area of cycle : %.2f\n",area);
    printf("circumference of cycle : %.2f",circumference);

    return 0;
}