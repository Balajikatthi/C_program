/*4. Write a C program to skip the some statements in your program.*/

#include <stdio.h>
int main()
{
    int i;
    printf("Enter the number");
    scanf("%d", &i);
    goto end;
    printf("%d\n", i);
    i++;
    printf("%d\n", i);
    i++;
    printf("%d\n", i);
    i++;
end:
    printf("%d\n", i);
    i++;
    return 0;
}


