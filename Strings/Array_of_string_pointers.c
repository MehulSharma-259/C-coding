#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{   
    int i,num;
    printf("Enter the number of strings you want to enter: ");
    scanf("%d",&num);
    char *name[num];
    char *p,str[20];
    fflush(stdin);
    for (i=0;i<num;i++)
    {
        printf("Enter the string: ");
        gets(str);
        p=(char *) malloc(strlen(str)+1);
        strcpy(p,str);
        name[i]=p;
    }
    printf("\n");

    for ( i = 0; i < num; i++)
    {
        printf("%s\n",name[i]);
    }
    

}