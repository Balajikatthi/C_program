/*1. Write a program that takes two integers as input and prints their sum.
	Expected Output :
	Sample Input: 4 7
	Sample Output: 11*/

#include <stdio.h>
int main()
{
	int x, y, sum;
	printf("Sample input: ");
	scanf("%d%d ", &x, &y);
	sum = x + y;
	printf("Sample output: %d\n", sum);
	return 0;
}

// sample input : 5, 6 Sample output : 11