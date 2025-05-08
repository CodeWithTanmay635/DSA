#include<stdio.h>
int main(){
    int i, a[10],num, pos, n;
    printf("Enter Size of Array (max 10): ");
    scanf("%d", &n);    
    if(n <= 0 || n > 10){
        printf("Invalid Array Size! Size should be between 1 and 10\n");
        return 1;
    }
    printf("Enter %d Elements:\n", n);
    for(i = 0; i < n; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\nOriginal Array: ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\nEnter Element to Insert: ");
    scanf("%d", &num);
    printf("Enter Position to Insert (1 to %d): ", n + 1);
    scanf("%d", &pos);
    if(pos < 1 || pos > n + 1){
        printf("Invalid Position! Position should be between 1 and %d\n", n + 1);
        return 1;
    }
    for(i = n; i >= pos; i--){
        a[i] = a[i - 1];
    }
    a[pos - 1] = num;
    n++;
    printf("\nArray After Insertion: ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
    
}