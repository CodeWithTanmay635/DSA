#include<stdio.h>
int main()
{
    int i,a[10],n,search=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter The Elements Of The Array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter The Element To Search: ");
    scanf("%d",&search);
    for(i=0; i<n; i++)
    {
        if(a[i]==search)
        {
        
            printf("Element Found At Position %d",i+1);
        break;
    }
    if(search==0)
    {
        printf("Element Not Found In The Array");
        break;
    }
    else
    {
        printf("Element Not Found In The Array");
        break;
    }
}
    return 0;
}