# include <stdio.h>
void main()
{
    int ar[8]={3,5,1,6,9,10,22,11},i;
    int *a;
    a=ar; // No warning.
    a=&ar; // warning of assignment  form incompatible pointer type.
    for (i=8;i<=10;i++)
    {
        ar[i]=i;        
    }
    
    for (i=8;i<=10;i++)
    {
        printf("%d %d\n",&ar[i],i);
       // Keeping in mind the lenght of array is the programmer's concern.
       
       // Compiler will not give warning about exceeding the size of array, it will store elements outside the array; probably on top of other data, or on the program itself. 
    }

    printf("\n\n");

    for ( i = 0; i < 8; i++)
    {
        printf("%d\t%d\n",(ar+i),((&ar)+i)); // It shows that when we use ((&ar)+i) we get an address 32 bytes after which shows that &ar is a pointer which points the array as whole.

        // But ar is a pointer which only points to the first element.ar=&ar[0]. See above assgnment.
    }
}