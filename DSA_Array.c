#include<stdio.h>
#include<stdlib.h>



struct myArray {
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a, int tsize, int usize) {
    if (usize > tsize) {
        printf("Error: Used size cannot be greater than total size\n");
        exit(1);
    }
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
    if (a->ptr == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
}

void showArray(struct myArray *a) {
    if (a->ptr == NULL) {
        printf("Array not initialized!\n");
        return;
    }
    printf("\nArray elements are:\n");
    for (int i = 0; i < a->used_size; i++) {
        printf("Element %d: %d\n", i, a->ptr[i]);
    }
}

void setvalue(struct myArray *a) {
    if (a->ptr == NULL) {
        printf("Array not initialized!\n");
        return;
    }
    for(int i = 0; i < a->used_size; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &(a->ptr[i]));
    }
}

void freeArray(struct myArray *a) {
    if (a->ptr != NULL) {
        free(a->ptr);
        a->ptr = NULL;
    }
}

int main() {
    struct myArray marks;
    int total_size = 10;
    int used_size = 5;  // Changed to use more elements

    createArray(&marks, total_size, used_size);
    printf("Enter %d marks (0-100):\n", used_size);
    setvalue(&marks);
    showArray(&marks);
    
    // Calculate average
    float sum = 0;
    for(int i = 0; i < marks.used_size; i++) {
        sum += marks.ptr[i];
    }
    printf("\nAverage marks: %.2f\n", sum/marks.used_size);
    
    freeArray(&marks);  // Free memory before exit
    return 0;
}