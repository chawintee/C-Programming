#include<stdio.h>
int main () {
    char input;
    int count = 0, vowel = 0, otherletter = 0 ;
   while (count < 10)
   {
        printf("\nEnter letter a-z : ");
        input = getche();
        if (input == 'a'|| input == 'e'|| input == 'i'|| input == 'o'|| input == 'u'){
            vowel++;
        }else
        {
            otherletter++;
        }
            count++;
   }
   
    printf("\n***Result***");
    printf("\nVowel <a,e,i,o,u> = %d",vowel);
    printf("\nother letter = %d",otherletter);
    
}