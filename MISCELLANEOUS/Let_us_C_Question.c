#include <stdio.h>
void main()
{
    int amount;
    int n1=1,n2=2,n5=5,n10=10,n50=50,n100=100;
    int rem,no_of_n1, no_of_n2, no_of_n5, no_of_n10, no_of_n50, no_of_n100;
    printf("Enter the amount: ");
    scanf("%d",&amount);

    no_of_n100=amount/n100;
    rem = amount % n100;

    no_of_n50=rem/n50;
    rem = rem % n50;
    
    no_of_n10=rem/n10;
    rem = rem % n10;
    
    no_of_n5=rem/n5;
    rem = rem % n5;
    
    no_of_n2=rem/n2;
    rem = rem % n2;
    
    no_of_n1=rem/n1;

    printf("%d notes od 100\n%d notes of 50\n%d notes of 10\n%d notes of 5\n%d notes of 2\n%d notes of 1",no_of_n100, no_of_n50, no_of_n10, no_of_n5, no_of_n2, no_of_n1);
}