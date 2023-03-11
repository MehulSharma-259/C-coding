#include<stdio.h>
void main()
{
  int i,j,k;
  printf(" enter no.s to compare ");
  scanf("%d %d %d",&i,&j,&k);
  switch(i>j && i>k)
      {   
        case 1: printf("i is Maximum");  
                break;  
        case 0: 
            switch(j>k)
                {   
               case 1: printf("j is Maximum");  
                        break;
               case 0:
                    printf("k is maximum" );  
                     break;  
            //    default:
            //         printf("You have entered same value of two numbers !!")
                 }
        // default:
        //     printf("You have entered same value of two numbers")
      }
}
//  DEFAULT IS COMMENTED BECAUSE SWITCH STATEMENT HAS BOOLEAN VALUE i.e. EITHER TRUE OR FALSE SO THERE IS NO CHANCE OF ANY OTHER INPUT SO DEFAULT WILL NEVER RUN (main reason is it is showing error while using default but after commenting default it is not showing any error)