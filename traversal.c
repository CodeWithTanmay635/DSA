#include<stdio.h>
int main()
{
    int i,a[10],n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nTravesal arrays :\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);

    }
    return 0;
}