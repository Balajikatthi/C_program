/*20. Write a program in C to accept a grade and declare the equivalent description :
    Grade 	Description
    E 	Excellent
    V 	Very Good
    G 	Good
    A 	Average
    F 	Fail

    Test Data :
    Input the grade :A
    Expected Output :
    You have chosen : Average*/

#include <stdio.h>
int main()
{
    char grade;
    printf("Input the grade :");
    scanf("%c", & grade);
    if (grade == 'A')
    {
        printf("You have chosen : Average");
    }
    else if (grade == 'E')
    {
        printf("You have chosen : Excellent");
    }
    else if (grade == 'V')
    {
        printf("You have chosen : Very good");
    }
    else if (grade == 'G')
    {
        printf("You have chosen : Good");
    }
    else if (grade == 'F')
    {
        printf("You have chosen :Fail");
    }
    else
    {
        printf("you have not Specified");
    }
    return 0;
}
