#include <stdio.h>
void main()
{
char answer;
int num,square;

do
{
    printf("Enter the number you want to print square of : ");
    scanf("%d",&num);
    printf("The square of the entered number is : %d\n",num*num);
    printf("Want to enter another number (y/n)? :");
    scanf("\n%c",&answer);
}while(answer=='y');
}