# include <stdio.h>
void main()
{
    int i,j,rows;
    char k;
    printf("Enter the number of rows you want to print: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {   
        k='A';
        for(j=1;j<=rows*2;j++)
        {
            if(j<rows-i+1 || j>rows+i-1)
                printf(" ");

            else if(j>=rows)
            {
                
                printf("%c",k);
                k--;
            }
            else
            {
                printf("%c",k);
                k++;
            }
            
        }
        printf("\n");
    }
    for(i=rows-1;i>0;i--)
    {
        k='A';
        for(j=0;j<rows*2;j++)
        {
            if(j<rows-i || j>rows+i-2 )
                printf(" ");
            
            else if(j>=rows-1)
            {
                
                printf("%c",k);
                k--;
            }

            else

            {  
                printf("%c",k);
                k++;
            }
        }   

        printf("\n");
    }

}
