# include <stdio.h>

void main()
{
    int a,b,rows=9;
    char f;
    printf("Enter \'U\' to see :");
    scanf("%c",&f);
    if (f=='U')
    {
        for(a=1;a<=rows;a++)
        {
            
            for(b=1;b<=rows;b++)
            {   
                if (b==1 || b==9)
                printf("U");
                else if (a==9)
                printf("U");
                else
                printf(" ");
            
            }
        printf("\n");

        }
    }
    else
    printf("Please enter as specified don't use your intelligence!!");
}
// a=1,b=9 a=2,b=8 a=3,b=7 a=4,b=6 a=5,b=5 