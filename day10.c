#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void toBinary(int n, char * src) {
    do {
        //printf("%d\n", n);
        char temp[32];
        strcpy(temp, src);
        sprintf(src, "%d%s", n & 1, temp);
        n = n >> 1;
    }
    while(n > 0);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    unsigned int T, n;
    scanf("%d", &T);
    while(T > 0) {
        char binaryString[32] = "";
        scanf("%d", &n);
        toBinary(n, binaryString);
        printf("%s\n", binaryString);
        T--;
    }
    return 0;
}

