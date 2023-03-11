#include <stdio.h>
void main()
{
    int i,j,rows,a,stars=1;
    printf("Enter the number of rows you want to print :");
    scanf("%d",&rows);
    a=rows;
    stars=rows+(rows-1);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=stars;j>=1;j--)
        {   
            printf("*");
        }
        a--;
        stars=a+(a-1);
        printf("\n");
    }
}

