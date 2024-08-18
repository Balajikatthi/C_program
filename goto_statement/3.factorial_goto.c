/*3. Write a C program to find the factorial of a given number without using loop and with using goto statement.
  

 	Expected output:
	Enter the number to find factorial: 5
	Factorial of 5 is: 120*/

#include <stdio.h>
int main (){
    int i,j,n=1;
    printf("Enter the number to find factorial:");
    scanf("%d",&i);
    j=i;
    print:
    n=n*j;
    j--;
    if (j>=1){
        goto print;
    }
    printf("Factorial of %d is :%d\n",i,n);
    return 0;
}