# include <stdio.h>

void main()
{
    int a,b,rows,c;
    char a1='A',a2='A';

    printf("Enter the number of rows you want to print :");
    scanf("%d",&rows);
    for(a=0;a<rows;a++)
    {   
        a1='A';
        a2+=rows-1;
        for (b=0;b<rows;b++)
        {
            if (b<rows-a)
            {
                printf("%c",a1);
                a1++;
            }
            else printf(" ");
        }
        for (b=0;b<rows-1;b++)
        {   
            if (a>b+1)
            {
                a2--;
                printf(" ");
            }
            else 
            {
                a2--;
                printf("%c",a2);
            }
        }
        printf("\n");
    }
}