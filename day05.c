#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void serie(int a,int b,int N) {
    int i, j, suma = a;
    for(i = 0; i < N; i++) {
        j = 0;
        while(j <= i) {
            suma += pow(2, j) * b;
            j++;
        }
        printf("%d ", suma);
        suma = a;
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, a, b, N;
    scanf("%d", &T);
    while(T > 0) {
        scanf("%d %d %d", &a,&b,&N);
        serie(a, b, N);
        printf("\n");
        T--;
    }
    return 0;
}

