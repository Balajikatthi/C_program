/*7.
Sample Output: 1

Input the number of rows: 4

***1
**12
*123
1234


sample Output: 2

Input the number of rows: 6

*****1
****12
***123
**1234
*12345
123456*/

#include <stdio.h>
int main()
{
    int i, j, k,l,space=0;
    printf("Input the number of rows:");
    scanf("%d",&k);
    space=k;
    for (i = 1; i <= k; i++)
    {
         for (l=space-1;l>=1;l--){
            printf("*");
         }
         
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
        space=space-1;
    }
}