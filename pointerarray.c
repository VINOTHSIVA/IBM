#include<stdio.h>
void main()
{
    int i,a[3],*p;
    p=a;
    printf("enter the array of element");
    for(i=0;i<2;i++)
    {
    scanf("%d\n",&a[i]);
    }
    printf("elements in array");
    for(i=0;i<2;i++)
    {
        printf("%d\n",*p);
        p++;
    }
    printf("enter the address of array");
    for(i=0;i<2;i++)
    {
        printf("%d\n",p);
        p++;
    }
}
    
