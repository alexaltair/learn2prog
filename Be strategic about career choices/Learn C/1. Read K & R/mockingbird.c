#include <stdio.h>

int main()
{
    int next_char;

    while ((next_char = getchar()) != EOF) {
        putchar(next_char);
    }
    return 0;
}