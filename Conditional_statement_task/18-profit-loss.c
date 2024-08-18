/*18. Write a C program to calculate profit and loss on a transaction.
	Test Data :
	500 700
	Expected Output :
	You can booked your profit amount : 200
	*/

#include <stdio.h>
int main()
{
	int a, b;
	printf("Test Data");
	scanf("%d%d", &a, &b);
	(a < b) ? printf("You can booked your profit amount :%d\n", b - a) : printf("You can booked your loss amount :%d\n", a - b);
	return 0;
}