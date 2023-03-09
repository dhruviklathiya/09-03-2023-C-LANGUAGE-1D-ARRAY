#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("How many values do you wanna add together?:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter value number [%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("Sum of all entered element is %d",sum);
    return 0;
}
