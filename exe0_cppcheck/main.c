#include <stdio.h>
#include <stdlib.h>

#define NUM_ELEMENTS 5

void multiplyNumbers(int x, int y) {
    int product = x * y;
    printf(product)
}

int main(void) {
    int a = 5; //uninitvar, legacyUninitvar
    int b = 5; //uninitvar, legacyUninitvar
    multiplyNumbers(a, b);
    int arr[NUM_ELEMENTS];
    for(int i = 0; i < NUM_ELEMENTS; i++) { //arrayIndexOutOfBounds
        arr[i] = i;
    }
    for(int j = 0; j<NUM_ELEMENTS; j++){
        printf("%d",arr[j]);
    }
    return 0;
}
