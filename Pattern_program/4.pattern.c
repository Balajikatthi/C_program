/*4.
Sample Output: 1

Input the number of rows: 4

1
12
123
1234

Sample Output: 2

Input the number of rows: 6

1
12
123
1234
12345
123456*/

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
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}