# include <stdio.h>
int power(int base , int exponent)
{
    int result=1,i;
    for ( i = 0; i < exponent; i++)
    {
        result*=base;
    }
    
    return result;
}
void main()
{
    int num,digits=0,rev=0,temp1,temp2;
    printf("Enter the number you want to check armstrong number or not : ");
    scanf("%d",&num);
    temp1=num;
    temp2=num;
    while(temp1!=0)
    {
        digits+=1;
        temp1/=10;
    }
    while(temp2!=0)
    {
        rev+=power(temp2%10,digits);
        printf("%d\n",rev);
        temp2/=10;
    }
    if (rev==num)
        printf("Number you have entered is a armstrong!");
    else    
        printf("Number is not a armstrong!");
    
    
    
}