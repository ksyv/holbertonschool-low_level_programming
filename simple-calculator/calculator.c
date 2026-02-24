#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int choice = -1;
    int first = 0;
    int twice = 0;
    int result = 0;

    printf("simple calculator\n");

    while (choice != 0) 
    {
        printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        if (choice > -1 && choice < 5)
        {
            if (choice == 1)
            {
                printf("A: ");
                scanf("%d", &first);
                printf("B: ");
                scanf("%d", &twice);
                result = first + twice;
                printf("Result: %d\n", result);
            }
        }
        else 
        {
            printf("Invalid choice\n");
        }
    }
    printf("Bye!\n");

    return (0);
}