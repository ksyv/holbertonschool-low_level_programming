#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int choice = -1;

    printf("simple calculator\n");

    while (choice != 0) 
    {
        printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
        printf("Choice: ");
        scanf("%d", &choice);
    }
    printf("Bye!\n");

    return (0);
}