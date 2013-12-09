#include <stdio.h>

#define ARRAY_SIZE 1000

int main()
{
    int array[ARRAY_SIZE] = {0};

    int i;
    for (i = 0; i < ARRAY_SIZE; ++i)
    {
      if ((i % 3 == 0) || (i % 5 == 0))
      {
        array[i] = i;
      }
    }

    i = 0;
    int sum = 0;
    for (i = 0; i < ARRAY_SIZE; ++i)
    {
      sum = sum + array[i];
    }

    printf("%d\n", sum);
    return 0;
}