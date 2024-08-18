/*
9. Write a program in C to display a pattern like a right angle triangle using an asterisk. (to use for loop)

    The pattern like :

    *
    **
    ***
    ****
*/

#include <stdio.h>
int main()
{
    int i, j, k;
    printf("Enter the input:");
    scanf("%d", &k);
    for (i = 1; i <= k; i++)
    {
        for (j=1;j<=i;j++){
            printf("*");
        
        }
        printf("\n");
    }
    return 0;
}