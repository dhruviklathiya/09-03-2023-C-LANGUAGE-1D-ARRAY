#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("For how many values you're willing to find average?:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element number [%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    sum = sum/n;
    printf("Average of all entered element is %d",sum);
    return 0;
}
