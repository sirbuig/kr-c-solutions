#include <stdio.h>

int main()
{
    int c, cc;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
            putchar(c);
        else if (c == ' ')
        {
            if (cc != ' ')
                putchar(c);
        }
        cc = c;
    }
}