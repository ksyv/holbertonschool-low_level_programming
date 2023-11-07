#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);

    n = _strlen_recursion("Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange.");
    printf("%d\n", n);

    n = _strlen_recursion("I guess I thought the dream-space would be all about the visual, but it's more about the feeling. My question is what happens when you start messing with the physics of it.ti fo scisyhp eht htiw gnissem trats uoy nehw sneppah tahw si noitseuq yM .gnileef eht tuoba erom s'ti tub ,lausiv eht tuoba lla eb dluow ecaps-maerd eht thguoht I sseug I");
    printf("%d\n", n);

    return (0);
}
