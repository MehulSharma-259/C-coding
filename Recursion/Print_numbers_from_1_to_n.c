# include <stdio.h>
// void number_printing(int num)
// {
//     if(num==1)
//     {   
//         printf("%d ",num);
//         return;
//     }
//     else
//     {
//         number_printing(num-1);
//         printf("%d ",num);
//         return;
//     }
// }


void number_printing(int num)
{
    if(num==0)         
        return;

    else
    {
        number_printing(num-1);
        printf("%d ",num);
        return;
    }
}
void main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    number_printing(number);

}