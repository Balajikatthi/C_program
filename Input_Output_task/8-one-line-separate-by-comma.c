/*8. Write a program in C to calculate the sum of three numbers with input on one line separated by a comma.
    Expected Output :
    Input three numbers separated by comma : 5,10,15
    The sum of three numbers : 30*/

#include <stdio.h>
int main()
{
    int x, y, z, sum;
    printf("Input three numbers separated by comma :");
    scanf("%d%d%d", &x, &y, &z);
    sum = x + y + z;
    printf("The sum of three numbers : %d\n", sum);
    return 0;
}