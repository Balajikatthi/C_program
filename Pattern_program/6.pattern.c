/*6.

Sample Output: 1

Input the number of rows: 4

*
**
***
****
***
**
*

Sample Output: 2

Input the number of rows: 6

*
**
***
****
*****
******
*****
****
***
**
*
*/

#include <stdio.h>
int main()
{
    int i, j, k;
    printf("Input the number of rows:");
    scanf("%d", &k);
    for (i = 1; i <= k; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for (i = k - 1; i >= 1; i--)
    {
        for (j = i ; j >= 1; j--)
        {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}