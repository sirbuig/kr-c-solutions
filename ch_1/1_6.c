#include <stdio.h>

int main()
{
    // verify that the expression getchar() != EOF is 0 or 1
    int c;

    while (c = getchar() != EOF)
    {
        // putchar(c);
        printf("%d\n", c);
    }

    // CORRECT
    // while ((c = getchar()) != EOF)
    // {
    //     putchar(c);
    // }
}