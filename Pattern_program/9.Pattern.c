/*9. Sample Output: 1

Input the number of rows: 5
 
    1
   1 1
  1 1 1
 1 1 1 1
1 1 1 1 1*/


#include <stdio.h>
int main()
{
    int i, j, k, l, space = 0;
    printf("Input the number of rows:");
    scanf("%d", &k);
    space = k;
    for (i = 1; i <= k; i++)
    {
        for (l = space - 1; l >= 1; l--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("1 " );
        }
        printf("\n");
        space = space - 1;
    }
}