#include<stdio.h>
int main () {
    int num , i, a = 0, b = 0, c = 0, d = 0;
    float sum = 0;
    float height[300]; //=>must declear array to type of variable input in array 
    printf("Please input number of students : ");
    scanf("%d",&num);

    for (i=0 ;i<num ;i++) {
        printf("Input height of student[%d] : ",i+1);
        scanf("%f",&height[i]);
    }

    // for (i=0 ;i<num ;i++) {
    //     printf("test -- %f\n",height[i]);
    // }

    for (i=0 ; i<num ;i++)
    {
        
            if (height[i] <= 160)
            {
                a++;
            }
            else if (height[i] > 160 && height[i] <= 170)
            {
                b++;
            }
            else if (height[i] > 170 && height[i] <= 180)
            {
                c++;
            }
            else if (height[i] > 180 && height[i] <= 200)
            {
                d++;
            }
                sum += height[i];
    }
    

    printf("\nNumber student height < 160 : %d ",a);
    printf("\nNumber student height 160 - 170 : %d ",b);
    printf("\nNumber student height 170 - 180 : %d ",c);
    printf("\nNumber student height 180 - 200 : %d ",d);
    printf("\nAverage heights in class is %.2f ",sum/num);

    for (i = 0; i < num; i++)
    {
        printf("\nHeight of student[%d] : %.1f",i+1,height[i]);
    }
    

    return 0;
}