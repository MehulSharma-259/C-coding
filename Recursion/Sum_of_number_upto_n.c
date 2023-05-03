#include <stdio.h>
// int sum(int n)
// {
//     int s=0;
//     if(n==0)
//         return 0;
//     s=n+sum(n-1);
//     return s;
// }
// void main()
// {
//     int number;
//     printf("Enter the number : ");
//     scanf("%d",&number);
//     printf("%d",sum(number));
// }

void sum(int n,int s)
{
    
    if(n==0)
    {
        printf("%d",s);
        return;
    }
    sum(n-1,s+n);
}


void main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    sum(number,0);
}