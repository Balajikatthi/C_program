/*5. Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.
    Test Data : 21
    Expected Output :
    Congratulation! You are eligible for casting your vote.*/

#include <stdio.h>
int main()
{
    int v;
    printf("Test data : ");
    scanf("%d", &v);
    if (v > 18)
    {
        printf("Congratulation! You are eligible for casting your vote\n");
    }
    else
    {
        printf("You are not eligible for vote\n");
    }
    return 0;
}