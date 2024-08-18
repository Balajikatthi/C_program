/*2. Check whether given number is even or odd until this program run to click exit, using goto statement.
    Expected output:
        Enter the number: 21
    Entered number 21 is even
    Exit to click 1, or Run again to click any number:
    5
        Enter the number: 2
    Entered number 2 is even
    .........
    .........
    .........
    .........
    Exit to click 1, or Run again to click any number:
    1
    Program terminated succesfully.
*/
#include <stdio.h>
int main()
{
    int i;
start:
    printf("enter the number: ");
    scanf("%d", &i);

    if (i % 2 == 0)
    {
        printf("entered a %d is even \n", i);
    }
    else
    {
        printf("entered a %d is odd \n", i);
    }
    printf("Exit to click 1, or Run again to click any number: ");
    scanf("%d", &i);
    
    if (i == 1)
    {
        printf("program terminated sucesfully\n");
    }
    else{
        goto start;
    }
    
    
    return 0;

    // else{
    //      printf("entered a %d is odd \n", i);
    //     goto start;
    // }
}







