#pragma warn+rvl // return value
#pragma warn+par // parameter not used
#pragma warn+rch // unreachable code
# include <stdio.h>
int f1()
{
    printf("\nIn f1");
}

void f2(int x)
{
    printf("\nIn f2");
    x++;
}
void main()
{
    int a;
    f1();
    printf("\nIn main");
    f2(a);
}