#include <stdio.h>
int main()
{

    float menu = 1, sum = 0, pizza = 150, hamburger = 50, sandwich = 25, water = 10,
          cpizza = 0, chamburger = 0, csandwich = 0, cwater = 0,
          sumpizza = 0, sumhamburger = 0, sumsandwich = 0, sumwater = 0;
    char pizza1[] = "Pizza", hamburger1[] = "Hamburger", sandwich1[] = "Sandwich", water1[] = "Water";

    while (menu != 0)
    {

        printf("Select menu : \n");
        printf("\t\t1.Pizza\t\t\t150\tBath.\n");
        printf("\t\t2.Hamburger\t\t50\tBath.\n");
        printf("\t\t3.Sandwich\t\t25\tBath.\n");
        printf("\t\t4.Water\t\t\t10\tBath.\n");
        printf("\t\t0.Calculate Money\n");
        scanf("%f", &menu);

        if (menu == 1)
        {
            sumpizza += pizza;
            sum += pizza;
            cpizza++;
            printf("You have ordered %.0f of %s<%.0f> ==> %.2f\n", cpizza, pizza1, pizza, sum);
        }
        else if (menu == 2)
        {
            sumhamburger += hamburger;
            sum += hamburger;
            chamburger++;
            printf("You have ordered %.0f of %s<%.0f> ==> %.2f\n", chamburger, hamburger1, hamburger, sum);
        }
        else if (menu == 3)
        {
            sumsandwich += sandwich;
            sum += sandwich;
            csandwich++;
            printf("You have ordered %.0f of %s<%.0f> ==> %.2f\n", csandwich, sandwich1, sandwich, sum);
        }
        else if (menu == 4)
        {
            sumwater += water;
            sum += water;
            cwater++;
            printf("You have ordered %.0f of %s<%.0f> ==> %.2f\n", cwater, water1, water, sum);
        }
        else if (menu == 0)
        {
            printf("You have ordered %.0f of %s<%.0f> ==> %.2f\n", cpizza, pizza1, pizza, sumpizza);
            printf("You have ordered %.0f of %s<%.0f> ==> %.2f\n", chamburger, hamburger1, hamburger, sumhamburger);
            printf("You have ordered %.0f of %s<%.0f> ==> %.2f\n", csandwich, sandwich1, sandwich, sumsandwich);
            printf("You have ordered %.0f of %s<%.0f> ==> %.2f\n", cwater, water1, water, sumwater);

            printf("\n\nTotal payment = %.2f\n\n", sum);
        }
    }

    return 0;
}