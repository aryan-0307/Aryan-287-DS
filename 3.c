#include<stdio.h>
void main()
{
    int i,j,a[100],n,temp,k,b;
    printf("Enter the no of elements in an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element:");
        scanf("%d",&a[i]);
    }
    for(b=0;b<n-1;b++)
    {
    for(k=0;k<n-1;k++)
    {
    if (a[k]>a[k+1])
    {
        temp=a[k];
        a[k]=a[k+1];
        a[k+1]=temp;
    }
    }
    }
    for (j=0;j<n;j++)
    {
        printf("%d\t",a[j]);
    }
}