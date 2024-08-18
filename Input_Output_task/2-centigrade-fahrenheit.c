/*2. Write a program that converts Centigrade to Fahrenheit.
	Expected Output :
	Input a temperature (in Centigrade): 45
	113.000000 degrees Fahrenheit.*/

#include <stdio.h>
int main()
{
	int c;
	float f;
	printf("Input a temperature (in Centigrade):");
	scanf("%d", &c);
	f = (1.8 * c) + 32;
	printf("%f degrees Fahrenheit\n", f);
	return 0;
}



Output:

Input a temperature (in Centigrade):45
113.000000 degrees Fahrenheit