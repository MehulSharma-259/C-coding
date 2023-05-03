# include <stdio.h>
void main()
{
    char string[]="Mehul Sharma",change;
    char answer='Y';
    int index;
    while (answer=='Y'|| answer=='y')
    {
        printf("Enter the change in character: ");
        scanf("\n%c",&change);
        printf("Enter the index in which you want to change: ");
        scanf("%d",&index);
        string[index]=change;
        printf("The changed string is: %s\n",string);
        printf("Do you want to change more? (y/n) : ");
        scanf("\n%c",&answer);
    }
}