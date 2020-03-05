#include <stdio.h>
int main () {
    float width, length; 
    float area, perimeter;


    printf("please input your width :");
    scanf("%f",&width);
    printf("please input your length :");
    scanf("%f",&length);

    area = width * length ;
    perimeter = 2* (width + length);

    printf("your area is %.2f\n",area);
    printf("your area is %.2f",perimeter);


    return 0;

}