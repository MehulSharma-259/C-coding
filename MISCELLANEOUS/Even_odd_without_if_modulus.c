# include <stdio.h>
void main()
{
    int num;
    printf("Enter the number you want to check :");
    scanf("%d",&num);
    (num-((num/2)*2))? printf("Number is odd") : printf("Number is even") ;
}