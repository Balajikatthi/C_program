/*13. Write a program in C to make a pyramid pattern with numbers increased by 1. (to use for loop and while loop)

	   1
	  2 3
	 4 5 6
	7 8 9 10
*/

#include <stdio.h>
int main()
{
	int i, j, n, l, k = 1;
	printf("enter the input:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (l = n; l >= i; l--)
		{
			printf(" ");
		}

		for (j = 1; j <= i; j++)
		{
			printf("%d ", k++);
		}

		printf("\n");
	}
}