# include <stdio.h>

float square(float);

void main()
{
    float a,b;
    printf("Enter any number you want square of :");
    scanf("%f",&b);
    a=square(b);
    printf("The square of %f is : %f",b,a);
    }

float square(float a)
{
    float b;
    b=a*a;
    return b;
}