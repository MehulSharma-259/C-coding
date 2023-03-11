#include <stdio.h>

void main()
{
    int rows,i=1,j=1;
    
    printf("Enter the number of rows you want to print :");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=rows-1;j>=i;j--)
        {
            printf(" ");
        }
        for(j=1;j<=rows;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

}