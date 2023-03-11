# include <stdio.h>
# include "library.h"

void main()
{
    
    int a,b;
    printf("Enter the number you want to print factorial of :");
    scanf("%d",&a);
    b=fact(a);
    printf("Factorial of %d is : %d",a,b);
}


