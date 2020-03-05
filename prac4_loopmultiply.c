#include<stdio.h>
int main () {
    int number,ans , i ;
    printf("Input a number of Multiple : ");
    scanf("%d",&number);
    for(i=1;i<=12;i++){
        printf("%d * %d = %d \n",number,i,number*i);
    }


    return 0;
}