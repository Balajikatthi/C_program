/*13. Sample Output:

 Input the number of rows: 6

     *
    * *
   * * *
  * * * *
 * * * * *
* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
 */

#include <stdio.h>
int main()
{
    int i, j, l, k;
    int space = 0;
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
            printf(" *");
        }
        printf("\n");
        space = space - 1;
    }

    for (i = k-1; i >= 1; i--)
    {
        for (l=1;l<=space+1;l++){
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf(" *");
        }

        printf(" \n");
        space=space+1;
    }    return 0;


    }