#include <stdio.h>
void main()
{
    int s[4][2]={
        {1234,56},
        {1212,33},
        {1434,80},
        {1312,78}
                };
    int (*p)[2];
    int i,j,*pint;
    for (i=0;i<=3;i++)
    {
        p=&s[i]; // Assigning base address of individual 1D array from 2D array to pointer-to-array.
        pint=p; // Assigning base address of individual 1D array from pointer-to-array in integer-pointer.
        printf("\n");
        for(j=0;j<=1;j++)
            printf("%d\t",*(pint+j));
    }
}