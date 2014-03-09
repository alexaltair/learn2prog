#include <stdio.h>
#include <math.h>

int main()
{
    long sum = 0;
    long sum_of_squares = 0;

    for (int i = 0; i <= 100; ++i)
    {
        sum += i;
        sum_of_squares += pow(i, 2);
    }

    long diff = pow(sum, 2) - sum_of_squares;
    printf("%ld\n", diff);
    return 0;
}
