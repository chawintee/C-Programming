#include<stdio.h>
int main (){

    int a = 10;
    int b = 4;
    double c,d,e;

    c = a / b;
    printf("Not casting\n");
    printf("Result of c is %f\n\n",c);

    c = (double)( a / b );
    printf("Casting result of a/b \n");
    printf("Result of c is %f \n\n",c);

    c = (double)a / b;
    printf("Not casting result of a/b but casting value of a\n");
    printf("Result of c is %f\n\n",c);
    
    return 0;
}