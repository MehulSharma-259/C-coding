# include<stdio.h>
void number_printing(int num)
{
    printf("%d ",num);
    if(num==1)
        return;
    else
        number_printing(num-1);
}
void main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    number_printing(number);
}