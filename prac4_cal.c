#include<stdio.h>
int main () {

    int num1, num2, menu, ans ;
    printf("Enter Num1 : ");
    scanf("%d",&num1); 
    printf("Enter Num2 : ");
    scanf("%d",&num2); 
    // printf("Num1 = %d \n Num2 = %d \n",num1,num2);

    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("5. %%\n");
    printf("Choose menu : ");
    scanf("%d",&menu);
    // printf("\n\n%d",menu);

    switch (menu)
    {
    case 1:ans = num1 + num2 ; printf("Ans: %d + %d = %d",num1,num2,ans);break;
    case 2:ans = num1 - num2 ; printf("Ans: %d - %d = %d",num1,num2,ans);break;
    case 3:ans = num1 * num2 ; printf("Ans: %d * %d = %d",num1,num2,ans);break;
    case 4:ans = num1 / num2 ; printf("Ans: %d / %d = %d",num1,num2,ans);break;
    case 5:ans = num1 % num2 ; printf("Ans: %d mod %d = %d",num1,num2,ans);break;
    
    default:printf("I don't know");
        break;
    }



    return 0;
}