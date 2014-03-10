#include <stdio.h>
#include <stdbool.h>

int main(){
    int primes[200000] = {0};
    primes[0] = 2;
    // Test every number for primality. Stop when you've hit 2,000,000.
    for (long i=3; i<2000000; ++i){
        // For a given number, see if it's divisible by any of the primes in the array so far.
        bool is_prime = true;
        int j;
        for (j = 0; primes[j] != 0; ++j){
            if (i % primes[j] == 0){
                is_prime = false;
                break;
            }
        }
        if (is_prime){
            primes[j] = i;
            printf("%ld\n", i);
        }
    }
    long sum = 0;
    for (int i = 0; i < 200000; ++i){
        sum += primes[i];
    }
    printf("%ld\n", sum);
    return 0;
}
