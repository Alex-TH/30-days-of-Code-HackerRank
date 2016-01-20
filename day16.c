#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_output(int* output, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", output[i]);
    }
}

int compare(const void* num1, const void* num2) {
    return (*(int*) num1 - *(int*) num2);
}

int add_output(int num, int size, int* output) {
    if(size == 0) output[0] = num;
    else {
        output[size] = num;
    }
    return size + 1;
}

int get_minimum(int* arr, int * output, int N) {
    int size, minimum, bnd_first = 0;
    for(int arr_i = 1; arr_i < N - 1; arr_i++) {
        int difference = abs(arr[arr_i] - arr[arr_i - 1]);
        if(bnd_first == 0 || difference < minimum) {
            bnd_first = 1;
            minimum = difference;
            size = add_output(arr[arr_i - 1], 0,  output);
            size = add_output(arr[arr_i], size, output); 
        }
        else if( difference == minimum) {
            size = add_output(arr[arr_i - 1], size,  output);
            size = add_output(arr[arr_i], size, output);
        }
    }
    return size;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, size;
    int* arr;
    int* output;
    scanf("%d",&N);
    arr = (int *) malloc(N * sizeof(int));
    output = (int *) malloc(N * sizeof(int));
    for(int arr_i = 0; arr_i < N; arr_i++) {
        scanf("%d", &arr[arr_i]);
    }
    qsort(arr, N, sizeof(int), compare);
    size = get_minimum(arr, output, N);
    print_output(output, size);
    return 0;
}

