#include <stdio.h>

#define MAX 4000000

int main(){
    int first = 0;
    int second = 1;
    int temp = 0;
    int sum = 0;

    while (second < MAX){
        if (second % 2 == 0){
            sum += second;
        }
        temp = first + second;
        first = second;
        second = temp;
    }
    printf("%d\n", sum);
    return 0;
}