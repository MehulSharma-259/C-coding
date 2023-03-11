#include <stdio.h>
void main()
{
    int array[]={2,56,45,23,6,9,0,2,6,8};
    int *i,j=0;
    i=array; // i=&array[0] both are same
    for(;j<10;j++)
    {
        printf("%d address element %d %d %d %d %d \n",i,*i++,*(array+j),*(j+array),j[array],array[j]);
    }
}
// Accessing elements using pointers takes less time than accessing it from subscripts