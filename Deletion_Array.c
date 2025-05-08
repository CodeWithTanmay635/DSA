#include<stdio.h>
int main(){
    int i,a[10],n,pos;
    printf("Enter The Size Of Array :");
    scanf("%d",&n);
    printf("Enter The elements Of Array :\n");
    for(i=0; i<n; i++){
    scanf("%d",&a[i]);
    }
    printf("Enter The Position Of Element To Be Deleted :");
    scanf("%d",&pos);
    printf("\nOriginal Array :\n");
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    if(pos<0 || pos>=n){
        printf("\nInvalid Position\n");
    }
    else{
        for(i=pos; i<n-1; i++){
            a[i]=a[i+1];
        }
        n--;
        printf("\nArray After Deletion :\n");
        for(i=0; i<n; i++){
            printf("%d ",a[i]);
        }
    }
    printf("\n");
    printf("Array Size After Deletion : %d\n",n);
    printf("Array Elements After Deletion :\n");
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }   
    printf("\n");
    return 0;
}