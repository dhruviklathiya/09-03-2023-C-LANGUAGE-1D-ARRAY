#include <stdio.h>
int main()
{
    int b,c,d;
    int a[]={9,8,7,6,5,4,3,2,1};
    b = sizeof(a);
    c = sizeof(a[0]);
    d = b/c;
    printf("Size of array is:%d",d);
    return 0;
}
