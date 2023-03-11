# include <stdio.h>
void fun(int a);

void main()
{
    int a=20;
    
    printf("The address of a is %u\nThe value of a is %d",&a,a);

}
void fun(int a)
{
    a=40;
    printf("%d\n",a);
}
