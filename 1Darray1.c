#include <stdio.h>
int main()
{
    int n,i;
    printf("How many member do you wanna get inside array?:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element for [%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Element index [%d]: %d\n",i,a[i]);
    }
    return 0;
}
