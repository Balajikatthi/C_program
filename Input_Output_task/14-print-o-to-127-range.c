/*14. Write a C program to get four integer values range is 0 to 127 and print the corresponding characters.
     Expected Output:
     Input the four integer values(0 - 127): 49  66  99  123
     Character of 49 is: '1'
     Character of 66 is: 'B'
     Character of 99 is: 'c'
     Character of 123 is: '{'*/

#include <stdio.h>
int main()
{

     int x, y, z, w;
     printf("Input the four integer values(0 - 127):");
     scanf("%d%d%d%d", &x, &y, &z, &w);
     printf("Character of %d is: %c\n", x, x);
     printf("Character of %d is: %c\n", y, y);
     printf("Character of %d is: %c\n", z, z);
     printf("Character of %d is: %c\n", w, w);
     return 0;
}
