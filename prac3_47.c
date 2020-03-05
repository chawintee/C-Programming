#include <stdio.h>
int main () {
    float acunits,charge;
    printf("Enter AC Unit : ");
    scanf("%f",&acunits);
    charge = 2.5 * acunits;
    printf("Electricity Charge : %.2f\n",charge);




    return 0;
} 