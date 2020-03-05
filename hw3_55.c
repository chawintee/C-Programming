#include<stdio.h>
int main () {
    float celsius, fahrenheit; 
    printf("Please enter Celsius degree :");
    scanf("%f",&celsius);
    fahrenheit = (celsius*9/5) + 32 ;
    printf("\t\t %.2f C degree = %.2f F Degree", celsius, fahrenheit);
    return 0;
}