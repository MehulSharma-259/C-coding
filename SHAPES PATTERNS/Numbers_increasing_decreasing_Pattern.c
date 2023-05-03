# include <stdio.h>
void main()
{
    int i,j,numbers=-1,rows,k;
    printf("Enter the number of rows you want to print: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {   
        k=0;
        numbers+=2;
        for(j=1;j<=rows*2;j++)
        {
            if(j<rows-i+1 || j>rows+i-1)
                printf(" ");

            else
            {   
                if(j>rows)
                {
                    k--;
                    printf("%d",k);
                }
                else
                {
                    k++;
                    printf("%d",k);
                }
            }
        }
        printf("\n");
    }
}