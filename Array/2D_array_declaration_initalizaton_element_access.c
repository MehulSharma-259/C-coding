# include <stdio.h>
void main()
{
    //  Size of first dimension is optional but second third or nth dimension is must.
    /*a[][4]={   
                    1,9,1,4,
                    2,6,5,8,
                    9,10,11,12,
                    63,32,15,1,
                    1,111,0,40 
              } both the initializations are same as array are stored in contiguous memory locations*/

    int a[][4]={
                    {1,9,1,4},
                    {2,6,5,8},
                    {9,10,11,12},
                    {63,32,15,1},
                    {1,111,0,40}
                };
        
    int i,j;
    for (j=0;j<5;j++)
    {
        for (i=0;i<4;i++)
        {
            printf("%d\t",*(*(a+j)+i)); // = printf("%d\t",a[j][i]) = *(a[j]+i)
            
            // Here we are using two ** because there is an array inside an array so accessing the elements one needs to use two ** sign.

            // If we use only one * then it will give the address of the inner array and by incrementing it ,we will get address of different elements.

            // For accessing the elements of 2D array the method is same as accessing the pointer of pointers. ex- **j

            // For accessing the elements of higher order array, the number of * used will depend upon the order of array. ex- order is 3 then three * will be used. 
            
            // All these rules will apply only when we use name of array as a pointer but if we use another pointer and store the base address in int then the scenario is completely different and we are able to access the element by using only one * sign.
        }
        printf("\n");
    }
    // ANOTHER METHOD OF PRINTING THE ELEMENTS OF A 2D ARRAY
    
    /* int *q=&a;  IT WILL SHOW WARINING OF : INITIALIZATION FROM INCOMPATIBLE POINTER TYPE.
    
    for (j=0;j<20;j++)
    {
        printf("%d\t",*(q+j)); 
        if ((j+1)%4==0 && j>0)
            printf("\n");
    }*/
    
    printf("\n\nPRINTING ARRAY OF ADDRESSES\n\n");
    for (i=0;i<5;i++)
    {   
        for (j=0;j<4;j++)
            printf("%d\t",*(*(a+i)+j)); 
        
        printf("\n");
    }
    
    // printf("\n%d\n",*a[1]); PRINTS THE 1st ELEMENT OF 1st 1D ARRAY.
    printf("\n%d",*(a+1));
}