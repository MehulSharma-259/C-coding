# include <stdio.h>
void main()
{
    static int a[]={0,3,2,5};
    int *p[]={a,a+1,a+2,a+3};

    printf("%u %u %d",p,*p,*(*p+1));
}