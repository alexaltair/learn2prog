#include <stdio.h>
#include <math.h>

#define MAX 600851475143

long largest_factor(long number){

    for (long i=2; i<sqrt(number); ++i){
        if (number % i == 0){
            return largest_factor(number/i);
        }
    }
    return number;
}

int main(){
    long largest = largest_factor(MAX);
    printf("%ld\n", largest);
    return 0;
}