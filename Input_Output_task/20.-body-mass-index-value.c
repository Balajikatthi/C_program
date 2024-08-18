/*20. Write a C program to find the BMI(Body Mass Index) is a person's weight in kilograms divided by  the square of height in meters.

              Expected Output:
              Input the weight in kg: 48
              Input the height in cm: 168.5
              BMI = 48 / (1.685)^2 = 16.9060219 */

#include <stdio.h>
int main()
{
   float w, h, BMI;
   printf("Input the weight in kg:");
   scanf("%f", &w);
   printf("Input the height in cm:");
   scanf("%f\n", &h);
   BMI = (w / (h * h) * 1000);
   printf("BMI =%f/(%f)^2 = %f\n", w, h, BMI);
   return 0;
}