# include <stdio.h>
int powerlogab(int base,int power)
{
    if (power<=0) return 1;
    
    if(power==1) return base;
    if(power%2==1)
    {
        int b=powerlogab(base,(power-1)/2);
        return base*b*b;
    }
    int a=powerlogab(base,power/2);
    return a*a;
}
int main()
{
    int base,power;
    printf("Enter the base : ");
    scanf("%d",&base);
    printf("Enter the power : ");
    scanf("%d",&power);
    
    printf("%d raise to the power of %d = %d",base,power,powerlogab(base,power));
}