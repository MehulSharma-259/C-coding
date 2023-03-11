# include <stdio.h>

void main()
{
    int a,b,rows=9;
    char f;
    printf("Enter \'M\' to see :");
    scanf("%c",&f);
    if (f=='M')
    {
        //PRINTING LETTER M !!
        for(a=1;a<=rows;a++)
        {
            
            for(b=1;b<=rows;b++)
            {   
                if (a==b || b==1|| b==9)
                {
                    if(b<=5 || b==9)
                    {printf("M");}
                    else
                    {printf(" ");}
                }
                else if(a<5 && b>5 && a+b==10)
                {printf("M");}
                else 
                printf(" ");
            }
            printf("\n");
        }
    
        printf("\n\n");
        // PRINTING LETTER E !!
        for(a=1;a<=rows;a++)
        {
            
            for(b=1;b<=rows;b++)
            {   
                if (b==1)
                printf("E");
                else if (a==1|| a==9)
                printf("E");
                else if (a==5 && b<=5)
                printf("E");
            
            }
            printf("\n");

        }
        printf("\n\n");
        // PRINTING LETTER H!!
        for(a=1;a<=rows;a++)
        {
            
            for(b=1;b<=rows;b++)
            {   
                if (b==1 || b==9)
                printf("H");
                else if (a==5)
                printf("H");
                else
                printf(" ");
            
            }
            printf("\n");

        }
        // PRINTING LETTER U!!
        printf("\n\n");

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
        printf("\n\n");

        // PRINTING LETTER L!!
        for(a=1;a<=rows;a++)
        {
            
            for(b=1;b<=rows;b++)
            {   
                if (b==1)
                printf("L");
                else if (a==9)
                printf("L");  
            }
            printf("\n");

        }
    }
    else
    printf("Enter as specified don't use your intelligence!!");
}