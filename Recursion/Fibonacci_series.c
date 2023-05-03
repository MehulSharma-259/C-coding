# include <stdio.h>
int fibonacci(int n)
{
    if(n==1 || n==2)
        return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
void main()
{
    int n;
    printf("Enter the terms of fibonacci series : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        printf("%d\n",fibonacci(i));
}