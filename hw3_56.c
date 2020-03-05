#include<stdio.h>
int main () {
    int number, summat ;
    printf("Enter a number of angle : ");
    scanf("%d", &number);

    summat = (number-2) * 180;

    printf("Summatopn of inner angle : %d",summat);
    return 0;

}