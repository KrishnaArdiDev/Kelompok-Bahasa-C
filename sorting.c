#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <stdint.h>

int main(){
    int array[10] = {1, 3, 4, 5, 7, 8, 8,4, 5, 10};

    int temp;
    for (int i = 0; i<10; i++){
        for (int j = 0; j<10; j++){
            if (array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for (int i = 0; i<10;i++){
        printf("%d", array[i]);
        printf(" ");
    }
    return 0;
}