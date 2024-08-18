/*2.
Sample Output: 1

Input the row value: 4

1	2	3	4
1	2	3	4
1	2	3	4
1	2	3	4

Sample Output: 2

Input the row value: 3

1	2	3
1	2	3
1	2	3*/

#include <stdio.h>
int main()
{
    int i, j, k;
    printf("Input the row value:");
    scanf("%d", &k);
    for (i = 1; i <= k; i++)
    {
        for (j = 1; j <= k; j++)
        {
            printf("%d ", j);
        }
        printf(" \n");
    }
    return 0;
}