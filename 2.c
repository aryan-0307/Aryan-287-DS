#include <stdio.h>

int main() {
    int a[100],i,n;
    printf("Enter the number of elements in an array:");
    scanf("%d",&n);
    for(i =0;i<n;i++)
    {
        printf("Enter an element:");
        scanf("%d",&a[i]);
    }
    for(i =0;i<n;i++){
    printf("%d\n",a[i]);
        
    }
    return 0;
}