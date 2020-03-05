#include<stdio.h>
int main (){
    float   num1, num2, ans;
    printf("Enter number 1 : ");
    scanf("%f",&num1);
    printf("Enter number 2 : ");
    scanf("%f",&num2);
    if (num2 == 0){
        printf("Error divided by zero.");
    } else
    {
        ans = num1/num2;
        printf("%.2f / %.2f = %.2f",num1, num2, ans);
    }
    return 0;
}