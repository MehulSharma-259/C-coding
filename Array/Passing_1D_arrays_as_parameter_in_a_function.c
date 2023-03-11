# include <stdio.h>
void function_1(int ar[],int rows)
{// Accessing array elements using another array.
    
    // ar[5]=2332; Changes made here are reflected back in main as it is a case of call by reference.
    int i;
    for ( i = 0; i < rows; i++)
    {
        printf("Element at address %d is %d\n",i,ar[i]);
    }
    
}

void function_2(int *p,int rows)
{// Accessing array elements using a pointer.
    int i;
    for ( i = 0; i < rows; i++)
    {
        printf("Element at address %d is %d\n",i,*(p+i));
    }
    
}

void main()
{
    int array[]={2,5,1,9,10,32,55,44};
    function_1(array,8);
    printf("\n\n");
    function_2(array,8);
}