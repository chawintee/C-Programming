#include<stdio.h>
#include<string.h> //must #include<string.h> before strcpy

int main () {

    char name[20];

    /* name = "chawintee"; //Error */

    // give value to string after declare variable.

    strcpy(name,"Chawintee");

    printf("\t%s\n",name);

    // seach char

    printf("\n\t\t%c",name[0]);
    printf("\n\t\t%c",name[1]);
    printf("\n\t\t%c",name[2]);
    printf("\n\t\t%c",name[3]);
    printf("\n\t\t%c",name[4]);
    printf("\n\t\t%c",name[5]);
    printf("\n\t\t%c",name[6]);
    printf("\n\t\t%c",name[7]);
    printf("\n\t\t%c",name[8]);
    printf("\n\t\t%c",name[9]);
    printf("\n\t\t%c",name[10]);
    printf("\n\t\t%c",name[11]);
    printf("\n\t\t%c",name[12]);

    int a;
    printf("Please in put your number ???");
    scanf("%f",&a);

    printf("your number is \t.%d",a);

    return 0;
}