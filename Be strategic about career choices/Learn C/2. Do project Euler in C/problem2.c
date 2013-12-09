#include <stdio.h>

#define MAX 4000000

int main()
{
    int first = 1;
    int second = 2;
    int third = 0;
    int sum = 0;

    for (int i = 0; second < MAX; ++i)
    {
        if (second % 2 == 0)
        {
            sum = sum + second;
        }

        third = first + second;
        first = second;
        second = third;
    }

    printf("%d\n", sum);
    return 0;
}