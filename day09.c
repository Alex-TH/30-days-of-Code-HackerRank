#include <stdio.h>
#include <string.h>

int find_gcd(int a,int b){
    //Write base condition
    if(a == b) return a;
    else return find_gcd(a > b ? (a - b) : (b - a), a < b ? a : b);
}


int main() {

    int a,b;
    //Take input
    scanf("%d %d", &a, &b);
    int gcd=find_gcd(a,b);
    printf("%d",gcd);
    return 0;
}
