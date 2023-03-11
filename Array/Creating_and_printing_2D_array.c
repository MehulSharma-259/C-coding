#include<stdio.h>
#include<conio.h>
void main()
{
  int i=1,j=1,a,b,k,z,x;
  printf("Enter no. of rows : ");
  scanf("%d",&a);
  printf("Enter no. of column : ");
  scanf("%d",&b);
  int g [a][b];
  for (i=0;i<a;i++)
     {    
        
        for(j=0;j<b;j++)
           {
              printf("Enter the value of column: (%d,%d)",i+1,j+1);
              scanf("%d",&g[i][j]);  
           }
       }
   printf("Printing the value of Array");
   printf("\n");
//    for(k=1;k<=a;k++)
//     {
        
//         for(z=1;z<=b;z++)
//         {
//             printf("%d",g[k][z]);
//         }
        
//         printf("\n");
//     }
int *q;
q=g;
   for(k=0;k<a;k++)
    {
        
        for(z=0;z<b;z++)
        {
            printf("%d\t",*(q+k*b+z));
        }
        
        printf("\n");
    }
printf("\n value of 0th element of array is %d",*q);
}
