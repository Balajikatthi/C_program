/*19. Write a program in C to calculate and print the electricity bill of a given customer. The customer ID and unit consumed by the user should be 	captured from the keyboard to display the total amount to be paid to the customer.

    The charge are as follow :
    Unit 	Charge/unit
    upto 199 	@1.20
    200 and above but less than 400 	@1.50
    400 and above but less than 600 	@1.80
    600 and above 	@2.00

    If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-

    Test Data :
    1001
    800
    Expected Output :
    Customer IDNO :1001
    unit Consumed :800
    Amount Charges @Rs. 2.00 per unit : 1600.00
    Surchage Amount : 240.00
    Net Amount Paid By the Customer : 1840.00*/

#include <stdio.h>
int main()
{
    float unit, c, s, t;
    printf("Customer ID: ");
    scanf("%f", &c);
    printf("Unit consumed :");
    scanf("%f", &unit);
    if (unit < 200)
    {
        unit = unit * 1.20;
        printf("Amount Charges @RS.1.20 per unit :%f\n", unit);
    }
    else if (unit < 400)
    {
        unit = unit * 1.50;
        printf("Amount Charges @RS.1.50 per unit :%f\n", unit);
    }
    else if (unit < 600)
    {
        unit = unit * 1.80;
        printf("Amount Charges @RS.1.80 per unit :%f\n", unit);
    }
    else if (unit > 600)
    {
        unit = unit * 2.00;
        printf("Amount Charges @RS. 2.00 per unit :%f\n", unit);
    }
    else
    {
        printf("Amount not deducted");
    }

    if (unit > 400)
    {
        s = (unit * 15) / 100;
        if (s <= 100)
        {
            s = 100;
        }
        printf("Surchage Amount :%f\n", s);
    }
    else
    {
        printf("Surchage Amount :%f\n", s);
    }
    t = s + unit;

    printf("Net Amount Paid By the Customer : %f\n", t);
}