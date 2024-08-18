/*31. C program to count total number of notes in given amount.
    Test Data:

    Input amount: 575
    Total number of notes:
    500: 1
    100: 0
    50: 1
    20: 1
    10: 0
    5: 1
    2: 0
    1: 0*/

#include <stdio.h>
void main()
{
    int amount, f, Hundred, fifty, twenty, ten, five, two, total, total1, total2, total3, total4, total5, total6;
    printf("Input Amount :");
    scanf("%d", &amount);
    if (amount >= 500)
    {
        f = amount / 500;
        // printf("amount: %d\n", amount);

        total = amount % 500;
        priintf("500: %d\n", f);
        // printf("total: %d\n", total);
    }
    else
    {
        amount = total;
        printf("500 : 0\n");
    }
    if (total >= 100)
    {
        Hundred = total / 100;
        total1 = total % 100;
        printf("100: %d\n", Hundred);
        // printf("total: %d", total1);
    }
    else
    {
        total1 = total;
        printf("100:0\n");
    }
    if (total1 >= 50)
    {
        fifty = total1 / 50;
        total2 = total1 % 50;
        printf("50: %d\n", fifty);
        // printf("total: %d\n", total2);
    }
    else
    {
        total2 = total1;
        printf("50 : 0\n");
    }
    if (total2 >= 20)
    {
        twenty = total2 / 20;
        total3 = total2 % 20;
        printf("20: %d\n", twenty);
        // printf("total: %d\n", total3);
    }
    else
    {
        total3 = total2;
        printf("20 : 0\n");
    }

    if (total3 >= 10)
    {
        ten = total3 / 10;
        total4 = total3 % 10;
        printf("10: %d\n", ten);
        // printf("total: %d\n", total4);
    }
    else
    {
        total4 = total3;
        printf("10 : 0\n");
    }
    if (total4 >= 5)
    {
        five = total4 / 5;
        total5 = total4 % 5;
        printf("5: %d\n", five);
        // printf("total: %d\n", total5);
    }

    else
    {
        total5 = total4;
        printf("50 : 0\n");
    }
    if (total5 >= 2)
    {
        two = total5 / 2;
        total6 = total5 % 2;
        printf("2: %d\n", two);
        // printf("total: %d\n", total6);
    }
    else
    {
        total6 = total5;
        printf("2 : 0\n");
    }
    printf("1 : %d\n", total6);

    // printf("500: %d\n", f);
    // printf("100: %d\n", Hundred);
    // printf("50: %d\n", fifty);
    // printf("20: %d\n", twenty);
    // printf("10: %d\n", ten);
    // printf("5: %d\n", five);
    // printf("2: %d\n", two);
    // printf("1: %d\n", total6);
}
