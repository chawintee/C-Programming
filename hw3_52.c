#include<stdio.h>
int main () {

    printf("Logical Operation\n");
    printf("Result of expression 30 > 20 is %d\n",30>20);
    printf("Result of expression 220 >= 220 is %d\n",220>=220);
    printf("Result of expression 10 == 10 is %d\n",10==10);
    printf("Result of expression 30 != 30 is %d\n\n",30!=30);


    printf("Result of expression ((10*7/5) && 0) is %d\n",((10*7/5) && 0));
    printf("Result of expression 10 && 1 is %d\n\n",10 && 1);

    printf("Result of expression ((2 != 1) || 0) is %d\n",((2 != 1) || 0));
    printf("Result of expression ((2 == 1) || 0) is %d\n\n",((2 == 1) || 0));

    printf("Result of expression !0 is %d\n",!0);
    printf("Result of expression !1 is %d\n",!1);
    printf("Result of expression !!!!0 is %d\n",!!!!0);
    printf("Result of expression !!!(!1) is %d\n",!!!(!1));


    return 0;
}