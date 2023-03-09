#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter Size array:");
    scanf("%d",&n);
    int a[n];
    int b[n];
    int sum[n];
    for(i=0;i<n;i++)
    {
        printf("Enter value number [%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Enter value number [%d]:",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {   sum[i]=0;
        sum[i]=a[i]+b[i];
    }
    for(i=0;i<n;i++)
    {
    printf("Sum of value number [%d] is: %d\n",i,sum[i]);
    }
    return 0;
}
