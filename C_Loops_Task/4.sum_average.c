/*
4. Write a C program to read 10 numbers from the keyboard and find their sum and average.
    Test Data :
    Input the 10 numbers :
    Number-1 :2
    ...
    Number-10 :2
    Expected Output :
    The sum of 10 no is : 55
    The Average is : 5.500000
*/

#include <stdio.h>
int main()
{
    int i;
    float average;
    int sum = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("Number - %d :%d\n", i, i);
        sum = sum + i;
    }
    average = sum / 10.00;
    printf("sum of %d is %d\n",i, sum);
    printf("The average is :%f\n",average);

    return 0;
}