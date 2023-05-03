# include <stdio.h>
// int stair_case(int n)
// {   
//     if (n<=2) return n;

//     return stair_case(n-1) + stair_case(n-2);
// }
// For 1,2,3 steps
int stair_case (int n)
{
    if(n<=2) return n;
    if(n==3) return 4;
    return stair_case(n-1) + stair_case(n-2) + stair_case(n-3);
}
void main()
{
    int stairs;
    printf("Enter the number of stairs : ");
    scanf("%d",&stairs);
    printf("%d",stair_case(stairs));
}