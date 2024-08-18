/*8. Write a C program to find the largest of three numbers.
    Test Data : 12 25 52
    Expected Output :
    1st Number = 12,        2nd Number = 25,        3rd Number = 52
    The 3rd Number is the greatest among three*/

#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Test data : ");
    scanf("%d%d%d", &n1, &n2, &n3);
    printf("1st Number = %d,\n 2nd Number = %d,\n 3rd Number = %d \n", n1, n2, n3);

    if ((n1 > n2) && (n1 > n3))
    {
        printf("The 1st Number is the greatest among three\n");
    }
    else if ((n2 > n3) && (n2 > n1))
    {
        printf("The 2nd Number is the greatest among three\n");
    }
    else
    {
        printf("The 3rd Number is the greatest among three\n");
    }
    return 0;
}