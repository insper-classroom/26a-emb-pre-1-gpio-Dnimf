#include <stdio.h>
#include <stdlib.h>

#define NUM_ELEMENTS 5

int multiplyNumbers(int x, int y) {
    int product = x * y;
    return product;
}

int main(void) {
    int a = 5; //uninitvar, legacyUninitvar
    int b = 5; //uninitvar, legacyUninitvar
    int result = multiplyNumbers(a, b);
    NUM_ELEMENTS = result;
    int arr[NUM_ELEMENTS];
    for(int i = 0; i < NUM_ELEMENTS; i++) { //arrayIndexOutOfBounds
        arr[i] = i;
    }
    for(int j = 0; j<NUM_ELEMENTS; j++){
        printf("%d",arr[j]);
    }
    return 0;
}
