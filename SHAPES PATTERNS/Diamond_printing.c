// EXACT METHOD IS AT THE BOTTOM

// #include <stdio.h>

// void main()
// {
//     int i,j,rows,a,stars=1;  
//     printf("Enter the number of rows you want to print :");
//     scanf("%d",&rows);
//     a=rows-1;
//     for(i=1;i<=rows;i++)
//     {
//         for(j=rows-1;j>=i;j--)
//         {
//             printf(" ");
//         }
//         for(j=1;j<=stars;j++)
//         {   
//             stars=i+(i-1);
//             printf("?");
//         }
//         printf("\n");
//     }
//     stars=a+(a-1);
//     for(i=1;i<=rows-1;i++)
//     { 
//         for(j=1;j<=i;j++)
//         {
//             printf(" ");
//         }
//         for(j=stars;j>=1;j--)
//         {     
//             printf("?");   
//         }
//         stars-=2;
//         printf("\n");
//     }
// }



//1=1 2=3 3=5 4=7 5=9 6=11 7=13

#include <stdio.h>

void main()
{
    int i,j,rows,a,stars=1,div;  
    printf("Enter the number of rows(!!only odd otherwise diamond will not be symmetrical!!) you want to print :");
    scanf("%d",&rows);
    div=(rows/2)+1;
    a=rows-div;
    for(i=1;i<=div;i++)
    {
        for(j=div;j>=i;j--)
        {
            printf(" ");
        }
        for(j=1;j<=stars;j++)
        {   
            stars=i+(i-1);
            printf("*");
        }
        printf("\n");
    }
    stars=a+(a-1);
    for(i=1;i<=a;i++)
    {   
        if(rows%2==0)
        {
            for(j=-1;j<=i;j++)
        {
                printf(" ");
        }
        }

        else
        {
            for(j=0;j<=i;j++)
        {
                printf(" ");
        }
        }

        for(j=stars;j>=1;j--)
        {     
            printf("*");   
        }
        stars-=2;
        printf("\n");
    }
}






