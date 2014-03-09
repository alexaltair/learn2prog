#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

char * long_to_string(long number){
    int length = log10(number) + 1 + 1; // One to round up the log, and one for the '/0'.
    char * string = malloc(length);
    return snprintf(string, length, "%ld", number);
}

void strrev(char * reversed, char * source){
    strcpy(reversed, source);
    int length = strlen(source);

    for (int i=0; i < length; ++i){
        reversed[i] = source[length - 1 - i];
    }
}

bool is_palindrome(char * string){
    char reversed[sizeof(string) - 1];
    strrev(reversed, string);
    return !strcmp(string, reversed);
}

int main(){
    long prod = 1;
    long max_palindrome = 0;

    for (int i = 100; i < 1000; ++i){
        for (int j = 100; j < 1000; ++j){
            prod = i*j;
            char * string = long_to_string(prod);

            if (is_palindrome(string)){
                max_palindrome = fmax(prod, max_palindrome);
            }
        }
    }
    printf("%ld\n", max_palindrome);
    return 0;
}
