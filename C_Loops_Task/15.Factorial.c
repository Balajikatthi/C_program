/*15. Write a C program to calculate the factorial of a given number. (to use do while loop)
	Test Data :
	Input the number : 5
	Expected Output :
	The Factorial of 5 is: 120
*/

#include <stdio.h>
int main()
{
	int i, sum = 1, fact;
	printf("Input the number :");
	scanf("%d", &i);
	fact = i;
	do
	{

		sum = sum * i;
		i--;
	} while (i > 1);
	printf("The factorial %d is %d", fact, sum);
	return 0;
}