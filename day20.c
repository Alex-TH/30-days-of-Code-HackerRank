#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define DELIMITERS 13
const char* delimiters = " [!,?.\\_'@]+";

int validateDelimiters(char ch) {
    for(int i = 0; i < DELIMITERS; i++) {
        //printf("%c == %c?\n", ch, delimiters[i]);
        if(ch == delimiters[i]) {
            return 0;
        }
    }
    return 1;
}

int ignoreDelimiters(char *string, int index) {
    while(!validateDelimiters(string[index]) && string[index] != 0) {
        index++;
    }
    return index;
}

int nextToken(char *string, char **output, int index) {
    int end = index;
    char *aux = string + index;
    for(end = index; validateDelimiters(string[end]); end++);
    *output = malloc((end - index + 1) * sizeof(char));
    strncpy(*output, aux, end - index);
    (*output)[end - index] = '\0';
    end = ignoreDelimiters(string, end);
    return end;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char string[400000];
    char** array = malloc(sizeof(char *));
    int totalWords = 0, index = 0;
    fgets(string, 400000, stdin);
    index = ignoreDelimiters(string, index);
    while(string[index] != '\0') {
        array = (char**) realloc(array, (totalWords + 1) * sizeof(char *));
        index = nextToken(string, &array[totalWords], index);
        totalWords++;
        //printf("%c", string[index]);
    }
    printf("%d\n", totalWords);
    for(int i = 0;i < totalWords;i++) {
        printf("%s\n", array[i]);
    }
    return 0;
}

