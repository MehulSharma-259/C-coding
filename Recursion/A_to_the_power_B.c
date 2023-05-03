# include <stdio.h>
int powerab(int base,int power)
{
    int product=1;
    if(power==0)
        return 1;
    return base*powerab(base,power-1);
}


void main()
{
    int base,power;
    printf("Enter the base : ");
    scanf("%d",&base);
    printf("Enter the power : ");
    scanf("%d",&power);
    
    printf("%d",powerab(base,power));
}