#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime(int number) {
    int until = number > 0 ? sqrt(number) : 0;
    for(int i = 2;i < until;i++) {
        if(number % i == 0) {
            return 0;
        }
    }
    return number > 1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    scanf("%d", &N);
    while(N-- > 0) {
        int number;
        scanf("%d",&number);
        if(isPrime(number)) {
            printf("Prime\n");
        }
        else {
            printf("Not prime\n");
        }
    }
    return 0;
}

