/*12. Write a C program to read the roll no, name and marks of three subjects and calculate the total, percentage and division.
    Test Data :
    Input the Roll Number of the student :784
    Input the Name of the Student :James
    Input the marks of Physics, Chemistry and Computer Application : 70 80 90
    Expected Output :
    Roll No : 784
    Marks in Physics : 70
    Marks in Chemistry : 80
    Marks in Computer Application : 90
    Total Marks = 240
    Percentage = 80.00
    Division = First*/

#include <stdio.h>
int main()
{
    float myRoll, p, c, cp, total, total1;
    printf("Input the Roll Number of the student :");
    scanf("%f", &myRoll);

    printf("Input the marks of Physics, Chemistry and Computer Application :\n");
    scanf("%f%f%f", &p, &c, &cp);
    total = p + c + cp;
    total1 = total / 3;
    printf(" Roll No : %f\n", myRoll);

    printf("Marks in Physics : %f\n", p);
    printf("Marks in Chemistry : %f\n", c);
    printf("Marks in Computer Application : %f\n", cp);
    printf("Total Marks = %f\n", total);
    printf(" Percentage = %f\n", total1);
    if (total1 < 80)
    {
        printf("Division = second  \n");
    }
    else if (total1 <= 90)
    {
        printf("Division = first \n");
    }
    else
    {
        printf("Division = fail\n");
    }
    return 0;
}
