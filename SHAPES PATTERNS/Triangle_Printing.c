// // TWO ANOTHER METHOD ARE AT THE BOTTOM OF THIS CODE

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
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=1;j<=i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}


// Another method!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// #include <stdio.h>

// void main()
// {
//     int rows,i=1,j=1,a=0,b=1;
//     printf("Enter the number of rows you want in the pattern : ");
//     scanf("%d",&rows);
//     for(i=rows;i>=1;i--)
//     {   a++;
//         for(j=1;j<=rows;j++)
//         {   
//             if(j>=i)
//             {printf("*");}
//             else
//             {printf(" ");}
//         }
//         for(b=1;b<=a-1;b++)
//         {printf("*");}
        
//         printf("\n");
        
//     }


// }
// //  ANOTHER METHOD
// #include <stdio.h>

// void main()
// {
//     int i,j,rows,stars=1;
    
//     printf("Enter the number of rows you want to print :");
//     scanf("%d",&rows);
    

//     for(i=1;i<=rows;i++)
//     {
//         for(j=rows-1;j>=i;j--)
//         {
//             printf(" ");
//         }
//         for(j=1;j<=stars;j++)
//         {   
//             stars=i+(i-1);
//             printf("*");
//         }
//         printf("\n");
//     }
// }