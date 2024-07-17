#include <stdio.h>

int main()
{
    int c, nb, nt, nl;
    nb = 0, nt = 0, nl = 0;

    // Ctrl+D for EOF (Unix)
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++nb; // blank counter
        else if (c == '\t')
            ++nt; // tab counter
        else if (c == '\n')
            ++nl; // newline counter
    }

    printf("%d, %d, %d\n", nb, nt, nl);
}