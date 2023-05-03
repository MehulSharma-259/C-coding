# include <stdio.h>
void numbers_printing(int n)
{
    if(n==0)
        return;
    
    printf("%d\n",n);
    numbers_printing(n-1);
    printf("%d\n",n);
}

void main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    numbers_printing(number);
}