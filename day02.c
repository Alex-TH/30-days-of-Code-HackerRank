#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double M, finalPrice;
    int T, X;
    scanf("%lf %d %d", &M, &T, &X);
    finalPrice = M + (M * T)/100 + (M * X)/100;
    printf("The final price of the meal is $%.0lf.", round(finalPrice));
    return 0;
}

