#include<stdio.h>
int main (){
    int i = 0 , j = 0, sum = 0, num, k = 0 ;
    int Data[3][5] = {2,25,10,22,31,
                    -2,12,36,24,8,
                    -16,6,14,13,120};
    printf("Please input a number : ");
    scanf("%d",&num);
    for(i = 0 ; i < 3 ; i++ ){
        for (j = 0 ; j < 5 ; j++)
        {
            // printf("\t\t Data[%d][%d]\t\t%d\n",i,j,Data[i][j]);
            if (Data[i][j] > num)
            {
                printf("\t\tData[%d][%d]\t\t%d\n",i,j,Data[i][j]);
                    if (Data[i][j] % 2 != 0)
                    {
                        sum += Data[i][j];
                    }
                    else
                    {
                        k++;
                    }  
            }
        }
    }
    if(k==15){
    printf("Not found.\n");
    }else{
    printf("Sum of odd number : %d\n",sum);
    }
    return 0;
}