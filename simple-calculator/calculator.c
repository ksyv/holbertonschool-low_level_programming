#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void clean_buffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


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
                while (scanf("%d", &first) != 1)
                {
                    printf("Invalid number\nA: ");
                    clean_buffer();
                }

                printf("B: ");
                while (scanf("%d", &twice) != 1)
                {
                    printf("Invalid number\nB: ");
                    clean_buffer();
                }
                result = first + twice;
                printf("Result: %d\n", result);
            } else if (choice == 2)
            {
                printf("A: ");
                while (scanf("%d", &first) != 1)
                {
                    printf("Invalid number\nA: ");
                    clean_buffer();
                }

                printf("B: ");
                while (scanf("%d", &twice) != 1)
                {
                    printf("Invalid number\nB: ");
                    clean_buffer();
                }
                result = first - twice;
                printf("Result: %d\n", result);

            } else if (choice == 3)
            {
                printf("A: ");
                while (scanf("%d", &first) != 1)
                {
                    printf("Invalid number\nA: ");
                    clean_buffer();
                }

                printf("B: ");
                while (scanf("%d", &twice) != 1)
                {
                    printf("Invalid number\nB: ");
                    clean_buffer();
                }
                result = first * twice;
                printf("Result: %d\n", result);

            } else if (choice == 4)
            {
                printf("A: ");
                while (scanf("%d", &first) != 1)
                {
                    printf("Invalid number\nA: ");
                    clean_buffer();
                }

                printf("B: ");
                while (scanf("%d", &twice) != 1)
                {
                    printf("Invalid number\nB: ");
                    clean_buffer();
                }
                if (twice == 0)
                {
                    printf("Error: division by zero\n");
                    continue;
                }
                result = first / twice;
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