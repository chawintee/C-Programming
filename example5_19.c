#include<stdio.h>
int main (){

    char input[100];
    int count = 0, i = 0;
    printf("****This program is sentense check ****");
    printf("\nEnter any message : ");
    gets(input);

    // for (i=0 ; input[i] != '\0' ;i++)
    // {
    //     printf("char %c \n",input[i]);
    // }
    
    // i=0;

    while (input[i] != '\0' && input[i] != '\n')   // check condition.
    {
        if (input[i] == '.' || input[i] == '?')    // in c programing use single code.
        {
            count++;
        }
        i++;
    }
    
    printf("There are %d sentense in this message.\n",count);


    return 0;
}