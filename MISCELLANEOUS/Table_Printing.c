#include <stdio.h>
void main()
{  
    int value,loop;
    printf("Enter the number you want to print table of : ");
    scanf("%d",&value);
    for(loop=1;loop<=10;loop++)
    {   
        printf("%dX%d=%d\n",value,loop,value*loop);
    }
}