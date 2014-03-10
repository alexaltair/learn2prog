#include <stdio.h>

int num_of_divisors(int n){
    int divisors = 0;
    for (int i = 1; i <= n/2; ++i){
        if (n % i == 0){
            divisors += 1;
        }
    }
    divisors += 1;
    return divisors;
}

int main(){
    int divisors;
    int i;
    int triangle1, triangle2;
    for (i = 2; divisors <= 500; ++i){
        if (i % 2 == 0){
            triangle1 = i/2;
            triangle2 = i + 1;
        } else {
            triangle1 = (i + 1)/2;
            triangle2 = i;
        }
        // This is because the divisor function is multiplicative, and triangle1 and triangle2 are coprime.
        divisors = num_of_divisors(triangle1) * num_of_divisors(triangle2);
    }
    printf("%d\n", triangle1*triangle2);
    return 0;
}
