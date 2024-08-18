/*7. Write a C program to accept the height of a person in centimeters and categorize the person according to their height.
    Test Data : 135
    Expected Output :
    The person is Dwarf.*/

#include <stdio.h>
int main()
{
    int myHeight;
    printf("Test data : ");
    scanf("%d", &myHeight);
    if (myHeight < 150)
    {
        printf("The person is Dwarf\n");
    }
    else if (myHeight == 150)
    {
        printf("The person is Average height\n");
    }
    else
    {
        printf("The person is Tall\n");
    }
    return 0;
}