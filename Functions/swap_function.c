#include <stdio.h>

void swap(int *,int *);
void main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Value of a is %d\nValue of b is %d\n",a,b);
    swap(&a,&b);
    printf("New value of a is %d\nNew value of b is %d",a,b);
}

void swap(int *x,int *y)
{
    int d;
    d=*x;
    *x=*y;
    *y=d;

}