# include <stdio.h>
void main()
{
    int num;
    printf("Enter the number of books you want to enter: ");
    scanf("%d",&num);
    struct book
    {
        char name[20];
        float price;
        int pages;
    }b[num];

    int i;
    for(i=0;i<num;i++)
    {
        printf("\nEnter the name, price, pages respectively: ");
        scanf("\n%s %f %d",&b[i].name,&b[i].price,&b[i].pages);
    }

    for ( i = 0; i < num; i++)
    {
        printf("\n%s\t%f\t%d",b[i].name,b[i].price,b[i].pages);
    }
    
}