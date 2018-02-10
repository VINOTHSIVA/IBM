#include<stdio.h>
void main()
{
    int n,i,a[3],*p;
    p=a;
    printf("enter the number of element");
    scanf("%d",&n);
    printf("enter the array of element");
    for(i=0;i<3;i++)
    {
    scanf("%d",&a[3]);
    p=a;
    }
    for(i=0;i<3;i++)
    {
        printf("%d",*p);
        p++;
    }
    printf("enter the address of array");
    for(i=0;i<3;i++)
    {
        printf("%d",p);
        p++;
    }
}
    
