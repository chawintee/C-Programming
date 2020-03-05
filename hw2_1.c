#include<stdio.h>
#include<math.h>
int main(){
     double pi=3.14159265358979323846;
    printf("%80s","12345678901234567890123456789012345678901234567890123456789012345678901234567890");
    printf("\n%40s"," ");
    printf("%-40.3lf",pi);
    printf("\n%40s"," ");
    printf("%-40.4lf",pi);
    printf("\n%40s"," ");
    printf("%-40.5lf",pi);
    printf("\n%40s"," ");
    printf("%-40.6lf",pi);
    printf("\n%40s"," ");
    printf("%-40.7lf",pi);
    printf("\n%40s"," ");
    printf("%-40.8lf",pi);
    printf("\n%40s"," ");
    printf("%-40.9lf",pi);
    printf("\n%40s"," ");
    printf("%-40.10lf",pi);


    return 0;
}