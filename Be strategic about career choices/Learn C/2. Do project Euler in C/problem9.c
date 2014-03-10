#include <stdio.h>
#include <stdbool.h>

int main(){
    int a, b, c;
    for (a = 1; a <= 1000-2; ++a){
        for (b = a; b < 1000-a-1; ++b){
            c = 1000-a-b;
            if (a*a + b*b == c*c){
                printf("%d\n", a*b*c);
            }
        }
    }
    return 0;
}
