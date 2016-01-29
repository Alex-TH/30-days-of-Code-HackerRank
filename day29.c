#include <stdio.h>
#include <string.h>
#define MAXLENGTH 10000

int abs(int num) {
    return num >= 0 ? num : num *-1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int T;
    scanf("%d", &T);
    while(T-- > 0) {
        char string[MAXLENGTH];
        int length, funny = 1;
        scanf("%s", string);
        length = strlen(string);
        for(int i = 1;i < length - 1;i++) {
            int diffS = abs(string[i] - string[i - 1]);
            int diffR = abs(string[length - i] - string[length - i - 1]);
            if(diffS != diffR) {
                funny = 0;
                break;
            }
        }
        if(funny) printf("Funny\n");
        else printf("Not Funny\n");
    }
    return 0;
}

