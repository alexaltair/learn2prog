#include <stdio.h>
#include <stdbool.h>

int main(){
    int primes[10001] = {0};
    primes[0] = 2;
    // Test every number for primality. Stop when you've filled the array.
    for (long i=3; primes[10000] == 0; ++i){
        // For a given number, see if it's divisible by any of the primes in the array so far.
        bool is_prime = true;
        int j;
        for (j = 0; primes[j] != 0; ++j){
            if (i % primes[j] == 0){
                is_prime = false;
            }
        }
        if (is_prime){
            primes[j] = i;
        }
    }
    printf("%d\n", primes[10000]);
    return 0;
}
