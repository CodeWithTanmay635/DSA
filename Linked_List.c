#include<stdio.h>
#include<stdlib.h>

int main() {
    int i, a[10], n;
    
    printf("Enter the size of the array (max 10): ");
    scanf("%d", &n);
    
    if (n <= 0 || n > 10) {
        printf("Invalid array size! Size should be between 1 and 10\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("\nOriginal Array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    // Reverse the array for modified version
    printf("\nModified Array (Reversed): ");
    for(i = n-1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    
    return 0;
}