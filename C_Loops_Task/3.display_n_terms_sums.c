/*3. Write a C program to display n terms of natural numbers and their sum.
    Test Data : 7
    Expected Output :
    The first 7 natural number is :
    1 2 3 4 5 6 7
    The Sum of Natural Number upto 7 terms : 28*/

#include <stdio.h>
int main()
{
    int i,j;
    int sum=0;
    printf("Test data:");
    scanf("%d",&j);
    printf("The first %d natural number is :",j);
    for (i=1;i<=j;i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
            printf("sum of natural number upto %d terms %d\n",i,sum);


    return 0;

}