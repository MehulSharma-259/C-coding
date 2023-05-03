# include <stdio.h>
int factorial(int num)
{
    if(num==1)
        return 1;
    else
        return (num*factorial(num-1));
}
void main()
{
    int number;
    printf("Enter the number you want to find factorial of : ");
    scanf("%d",&number);
    printf("%d ! = %d",number,factorial(number));
}