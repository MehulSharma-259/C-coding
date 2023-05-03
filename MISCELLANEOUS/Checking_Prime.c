#include <stdio.h>

void main()
{
    int num,i;
    printf("Enter the number you want to check prime or not :");
    scanf("%d",&num);
    if(num==1)
    printf("It is not a prime number");

    if(num<=0)
    printf("Enter only positive numbers");

    for(i=2;i<=num-1;i++)
    {
        if(num%i==0)
        {
            printf("Number is not prime");
            break;
        }
    }
    if(i==num)
    printf("Number is prime");
}