# include <stdio.h>
// THERE ARE THREE WAYS OF PASSING 2D ARRAYS IN A FUNCTION.
void function_1(int *q,int rows,int columns)
{
    int i=0,j=0;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d\t",*(q+i*columns+j)); // (base address + row no. * no. of columns + column no.)
        }
        printf("\n");
    }
}
void function_2(int (*q)[2],int rows,int columns)
{
    int i,j;
    int *p;
    for(i=0;i<rows;i++)
    {
        p=q+i;
        for(j=0;j<columns;j++)
        {
            printf("%d\t",*(p+j));
        }
        printf("\n");
    }
}
void function_3(int rows,int columns,int q[rows][columns])
{
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d\t",q[i][j]);
        }
        printf("\n");
    }
}
void main()
{
    int a[2][2]={{3,65},{8,101}};
    function_1(a,2,2);
    printf("\n\n");
    function_2(a,2,2);
    printf("\n\n");
    function_3(2,2,a);
}