# include <stdio.h>
void main()
{
    int i,j,rows,a,stars=1,div;
    printf("Enter only odd rows you want to print : ");
    scanf("%d",&rows);
    div=(rows/2)+1;
    a=rows-div;
    for(i=1;i<=div;i++)
    {   
        for(j=div;j>=i;j--)
        {
            printf("*");
        }
        for(j=1;j<=stars;j++)
        {
            printf(" ");
            stars=i+(i-1);
        }
        for(j=div;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    stars=a+(a-1);
    for(i=1;i<=a;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        for(j=stars;j>=1;j--)
        {
            printf(" ");    
        }
        stars-=2;
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}