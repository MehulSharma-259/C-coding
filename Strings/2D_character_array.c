#include <stdio.h>
void main()
{   
    int i,j,k;
    printf("Enter the number of strings you want to enter:");
    scanf("%d",&k);
    fflush(stdin);
    char array_of_names[k][10];
    for(j=0;j<k;j++)
    {
        printf("Enter the string: ");
        gets(&array_of_names[j][0]);
    }
    printf("\n");
    for(i=0;i<k;i++)
    {
        printf("%s\n",&array_of_names[i][0]);
    }
}