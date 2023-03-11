#include<stdio.h>
void main()
{
    int s1,s2,s3,sum,c;
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1>s2 && s1>s3)
        c = s1;

    else if(s2>s3)
        c = s2;
    else 
        c = s3;
        
    sum = s1+s2+s3;

    if(c > (sum - c))
        printf("Triangle is valid");

    else printf("Triangle is not valid");

}
