#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

char * long_to_string(long number){
    int length = log10(number) + 1 + 1; // One to round up the log, and one for the '/0'.
    char * string = malloc(length);
    snprintf(string, length, "%ld", number);
    return string;
}

bool is_palindrome(char * string){
    int length = strlen(string);
    for (int i=0; i < length/2; ++i){
        if (string[i] != string[length - 1 - i]){
            return false;
        }
    }
    return true;
}

int main(){
    long prod = 1;
    long max_palindrome = 0;

    for (int i = 100; i < 1000; ++i){
        for (int j = i; j < 1000; ++j){
            prod = i*j;
            if (prod > max_palindrome){
                char * string = long_to_string(prod);
                if (is_palindrome(string)){
                    max_palindrome = prod;
                }
                free(string);
            }
        }
    }
    printf("%ld\n", max_palindrome);
    return 0;
}
