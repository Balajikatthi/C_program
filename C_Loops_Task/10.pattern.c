/*10. Write a C program to display a pattern like a right angle triangle with a number.(to use for loop)

    The pattern like :

    1
    12
    123
    1234
    */

#include <stdio.h>
int main()
{
    int i, j, k;
    printf("Enter the input");
    scanf("%d", &k);
    for (i = 1; i <= k; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}