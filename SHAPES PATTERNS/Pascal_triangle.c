# include <stdio.h>
int factorial(int num)
{
	int fact=1;
	for(int i=1;i<=num;i++)
	{
		fact*=i;
	}
	return (fact);
}
int combination(int n,int r)
{
	int comb=1;
	
	comb = factorial(n) / (factorial(n-r)*factorial(r) );
	
	return (comb);
}
void main()
{
    int i,j,rows,k=1;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows-i-1;j++)
            printf(" ");
        
		for(j=0;j<rows;j++)
        {
			if(j>i)
	    		continue;
			else
				printf("%d ",combination(i,j));
        }
        printf("\n"); 
    }
}


