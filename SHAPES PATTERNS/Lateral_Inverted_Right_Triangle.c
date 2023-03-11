// ANOTHER METHOD IS AT THE BOTTOM OF THIS CODE

#include <stdio.h>

void main()
{
    int rows,i=1,j=1;
    printf("Enter the number of rows you want in the pattern : ");
    scanf("%d",&rows);
    for(i=rows;i>=1;i--)
    {   
        for(j=1;j<=rows;j++)
        {   
            if(j>=i)
            {printf("*");}
            else
            {printf(" ");}
        }        
        printf("\n");
        
    }


}

// Another Method

// #include <stdio.h>

// void main()
// {
//     int rows,i=1,j=1;
    
//     printf("Enter the number of rows you want to print :");
//     scanf("%d",&rows);

//     for(i=1;i<=rows;i++)
//     {
//         for(j=rows-1;j>=i;j--)
//         {
//             printf(" ");
//         }
//         for(j=1;j<=i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

// }