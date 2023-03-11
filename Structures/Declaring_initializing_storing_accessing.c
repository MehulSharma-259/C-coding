# include <stdio.h>
void main()
{
    struct book // Structure type declaration.
    {
        char name[10];
        float price;
        int pages;
    };
    struct book b1,b2,b3; // structure variables.

    // ANOTHER METHOD
    //     struct book
    // {
    //     char name[10];
    //     float price;
    //     int pages;
    // } b1,b2,b3;

    // ANOTHER METHOD
    //     struct
    // {
    //     char name[10];
    //     float price;
    //     int pages;
    // } b1,b2,b3;

// INITIALIZING A STRUCTURE
    struct notebook
    {
        char name[20];
        float price;
        int pages;
    };
    struct notebook a={"Class mate",50.0,150};
    struct notebook b={"Camlin",55,200};
    struct notebook c={"Delight",40,250};
    struct notebook d={0};

// STORING VALUES AND PRINTING IN STRUCTURE BOOK
    printf("Enter the name,price,number of pages respectively: ");
    scanf("\n%s %f %d",&b1.name,&b1.price,&b1.pages);
    scanf("\n%s %f %d",&b2.name,&b2.price,&b2.pages);
    scanf("\n%s %f %d",&b3.name,&b3.price,&b3.pages);

    printf("Entered values are:\n");
    printf("%s %f %d\n",b1.name,b1.price,b1.pages);
    printf("%s %f %d\n",b2.name,b2.price,b2.pages);
    printf("%s %f %d\n",b3.name,b3.price,b3.pages);



}