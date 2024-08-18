/*5.  Write a C program that converts kilometers per hour to miles per hour.
    Expected Output :
    Input kilometers per hour: 15
    9.320568 miles per hour */

#include <stdio.h>
int main()
{
    float k, m;
    printf("Input kilometers per hour:");
    scanf("%f", &k);
    m = 0.621371192 * k;
    printf(" %f miles per hour\n", m);
    return 0;
}


