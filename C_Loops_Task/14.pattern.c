/*14. Write a C program to make such a pattern as a pyramid with an asterisk. (to use for loop and while loop)
        *
       * *
      * * *
     * * * *
 */

#include <stdio.h>
int main()
{
    int i, j, n, l, k = 1;
    printf("enter the input:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (l = n; l >= i; l--)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}