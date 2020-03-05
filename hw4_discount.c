#include<stdio.h>
int main (){
    float price, discount, total;
    printf("Enter price : ");
    scanf("%f",&price);
    printf("Price : %.2f\n",price);

    if(price > 5000){
        discount = 0.05 * price;
        total = price - discount;
        printf("Discount : %.2f",discount);
        printf("\nTotal : %.2f",total);
    }
    else if(price >= 1000 && price <= 5000){
        discount = 0.03 * price;
        total = price - discount;
        printf("Discount : %.2f",discount);
        printf("\nTotal : %.2f",total);
    }
    else if(price > 100){
        discount = 0.01 * price;
        total = price - discount;
        printf("Discount : %.2f",discount);
        printf("\nTotal : %.2f",total);
    }else
    {
        discount = 0.00 * price;
        total = price - discount;
        printf("Discount : %.2f",discount);
        printf("\nTotal : %.2f",total);
    }
    

    return 0;
}