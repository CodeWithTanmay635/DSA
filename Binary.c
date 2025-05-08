#include<stdio.h>
int main(){
    int i,a[10],n,search,low,high,mid;
    printf("Enter The size of the array: ");
    scanf("%d",&n);
    printf("Enter The Element Of the array: ");
    for(i=0; i<n; i++){
    scanf("%d",&a[i]);
    }
    printf("Enter The Element To Search: ");
    scanf("%d",&search);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high){
        if(a[mid]==search){
            printf("Element Found At Position %d",mid+1);
            break;
        }
        else if(a[mid]<search){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        mid=(low+high)/2;
    }
    if(low>high){
        printf("Element Not Found In The Array");
    }
    return 0;
}