/*3.
Sample Output: 1

Input the number of rows: 5

1
11
111
1111
11111

Sample Output: 2

Input the number of rows: 3

1
11
111*/

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
            printf("1 ");
        }
        printf("\n");
    }

    return 0;
}