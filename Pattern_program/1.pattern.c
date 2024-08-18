/*1.
Sample Output:1

Input the number of rows: 5

1	1	1	1	1
1	1	1	1	1
1	1	1	1	1
1	1	1	1	1
1	1	1	1	1*/

#include <stdio.h>
int main()
{
  int i, j, k;
  printf("Input the number of rows:");
  scanf("%d", &k);
  for (i = 1; i <= k; i++)
  {

    for (j = 1; j <= k; j++)
    {
      printf(" 1 ");
    }
    printf("\n");
  }
  return 0;
}