/*10. Sample Output:

Input the number of rows: 6

     1
    2 2
   3 3 3
  4 4 4 4
 5 5 5 5 5
6 6 6 6 6 6*/

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
            printf("%d ",i);
        }
        printf("\n");
        space = space - 1;
    }
}