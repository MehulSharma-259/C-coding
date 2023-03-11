# include <stdio.h>
void main()
{
    int i=3,*j,**k;
    j=&i;
    k=&j;
    
    printf("%d %d %d ",i,*j,**k);

//   VARIABLES    i             j          k
//   ADDRESSES  6422300       6422296     6422292 
//   VALUES       3           6422300     6422296
}
