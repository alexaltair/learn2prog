#include <stdio.h>

int main(){
    for (int i = 1; i <= 100; ++i){
        if (i % 3 == 0 && i % 5 == 0){
            printf("%d: fizzbuzz\n", i);
        } else if (i % 3 == 0){
            printf("%d: fizz\n", i);
        } else if (i % 5 == 0){
            printf("%d: buzz\n", i);
        }
    }
    return 0;
}
