#include<stdio.h>
int main (){
    
    char  compound[20], more[20], status[20];
    int atom;
    printf("Enter compound of matter <carbon/nitrogen/hydrogen> : ");
    scanf("%s",&compound);
    printf("Have more ? <carbon/nitrogen/hydrogen/non> : ");
    scanf("%s",&more);
    printf("Number of atom <4/5/6> : ");
    scanf("%d",&atom);
    printf("Status of matter <gas/liquid/solid> : ");
    scanf("%s",&status);

    // printf("\n%s\n%s\n%d\n%s\n",compound,more,atom,status);

    if(strcmp(compound,"carbon") == 0 && atom == 5 && strcmp(status,"gas") == 0 && strcmp(more,"non") == 0){
             printf("\nThis element is type 1\n");
    }
    else if(strcmp(compound,"carbon") == 0 && atom == 6 && strcmp(status,"liquid") == 0 && strcmp(more,"non") == 0){
             printf("\nThis element is type 2\n");
    }
    else if(strcmp(compound,"nitrogen") == 0 && atom == 6 && strcmp(status,"gas") == 0 && strcmp(more,"non") == 0){
             printf("\nThis element is type 3\n");
    }
    else if(strcmp(compound,"nitrogen") == 0 && atom == 4 && strcmp(status,"solid") == 0 && strcmp(more,"non") == 0){
             printf("\nThis element is type 4\n");
    }
    else if(strcmp(compound,"carbon") == 0 && atom == 5 && strcmp(status,"gas") == 0 && strcmp(more,"hydrogen") == 0){
             printf("\nThis element is type 5\n");
    }




    return 0;
}