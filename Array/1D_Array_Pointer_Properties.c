#include <stdio.h>
void main()
{ // array_name[value] it is known as subscripting.
    int arr[]={2,3,5,8,9,0,10,24,25,96};
    int *i,*j,*a,*b;
    printf("%d\n",&arr[0]); // For accessing 8 type arr[7], In array declaration arr[8] will have 8 elements and the last element will have index 7
    printf("%d\n",arr);

    i=&arr[4];
    j=arr + 4; // Here arr=&arr[0] and the address of array is the address of first element and it will not show any warning of : initialization from incompatible pointer type as it was giving in case of 2D array.

    // SO WE CAN SAY THAT NAME OF ANY ARRAY BEHAVES AS A POINTER 
    // FOR ACCESSING FIRST ELEMENT WE CAN WRITE *(arr) or *(arr+0)
    // FOR ACCESSING SECOND OR THIRD OR N ELEMENT WE CAN WRITE *(arr+2) or *(arr+3) or *(arr+N)

    if(j==i)
        printf("Both pointer point to same location\n");
    
    else printf("Do not point to same location\n");

// PROPERTIES OF ARRAY POINTERS 
// ON INCREMENTATION OF A POINTER , IT WILL START POINTING TO THE IMMEDIATE NEXT VALUE AND IN CASE OF DECREMENTATION IT WILL START POINTING TO THE LAST EARLIER VALUE
    a=arr;
    b=&arr[4];

    printf("%d address of first element\n%d address of fifth element\n%d subtraction of address of 5th and 1st element\n",a,b,b-a);
// HERE DECREMENTATION OF b and a IS GIVING 4 BECAUSE b and a are pointing to the locations that are 4 integers apart    
}