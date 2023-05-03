# include <stdio.h>
void main()
{
    int num,temp,rev=0;
    printf("Enter the number you want to check palindrome or not: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rev+=temp%10;
        temp/=10;
        if(temp!=0)
            rev*=10;

    }
    if (rev==num)
        printf("Number you have entered is a palindrome!");
    else    
        printf("Number is not a palindrome!");
}