#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define SIZE_M 6
#define SIZE_H 3

int main(){
    int arr[SIZE_M][SIZE_M];
    int sum = 0, maxSum = -10000;
    for(int arr_i = 0; arr_i < SIZE_M; arr_i++){
       for(int arr_j = 0; arr_j < SIZE_M; arr_j++){
          
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }
    for(int arr_i = 0; arr_i < SIZE_M - SIZE_H + 1; arr_i++) {
        for(int arr_j = 0; arr_j < SIZE_M - SIZE_H + 1; arr_j++) {
            for(int h_j = arr_j; h_j < arr_j + SIZE_H; h_j++) {
                sum += arr[arr_i][h_j] + arr[arr_i + SIZE_H - 1][h_j];
            }
            int middle = arr_j + (SIZE_H/2);
            for(int h_i = arr_i + 1; h_i < arr_i + SIZE_H - 1; h_i++) {
                sum += arr[h_i][middle];
            }
            //printf("%d\n", sum);
            if(sum > maxSum) maxSum = sum;
            sum = 0;
        }
    }
    printf("%d", maxSum);
    return 0;
}

