#include<stdio.h>
int main() {
    char name[]="Chawintee",
    surname[]="Muennarong";
    int age=25  ;
    float per_day,salary=3600,per_week;

    printf("%-16s:","Name");
    printf("\t%s\n",name);
    printf("%-16s:","Surname");
    printf("\t%s\n",surname);
    printf("%-16s:","Age");
    printf("\t%d\n", age);
    per_week=salary/4;
    per_day=salary/31;
    printf("%-16s:","Salary");
    printf("\t%.2f\n",salary);
    printf("%-16s:","Money/Week");
    printf("\t%.2f\n",per_week);
    printf("%-16s:","Money/Day");
    printf("\t%.3f\n",per_day);



    return 0;
}