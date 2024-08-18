/*5.
Sample Output: 1

Input the number of rows: 4

***1
**2 3
*4 5 6
7 8 9 10

Sample Output:

Input the number of rows: 3

**1
*2 3
4 5 6
*/

#include <stdio.h>
int main()
{
    int i, j, n, l;
    int k = 1;
    printf("Input the number of rows:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (l = n; l >= i; l--)
        {
            printf("*");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", k++);
        }

        printf("\n");
    }

    return 0;
}