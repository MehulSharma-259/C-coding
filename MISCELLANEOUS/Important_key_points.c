// * is known as the dereference operator or indirection operator and it means value at address.
// %p is the format specifier which is used to print the address of pointer. 
// NULL POINTER: It is a pointer that is not assigned any value but NULL is known as the NULL pointer.
// We can use it to initialize a pointer variable when that pointer variable isn't assigned any valid memory address yet.
// If we manipulate the elements of array defined in main, in another function then the changes made are reflected back in main as when we pass array as a parameter in a funtion then they are passed as pointers. 
// char name[]="Mehul"; Base addess of this string can be denoted by: 1)name 2)"Mehul" 3)&name 
// Difference in 1 and 3 of the above comment is: name=&name[0] and &name is the address of whole string or character array but practically address stored in name and &name is but difference is only visible if we add 1 to them. name will give the address of next character in the string but &name will give address after the whole string.  
#include <stdio.h>
void main()
{
    int a=2;
    int *p=&a;
    int *q=NULL; // Making null pointer.
    printf("Address of pointer p is %d\n",p);
    //p+=2; //d referencing is not allowed means we cannot print the value of undefined address.
    printf("Value of a is %d\n",*p);
    printf("Value of q is %p\n",q);
    *p=4;
    printf("\nValue of a after changing once by dereferencing is %d\n",*p);

    *p=2332;// This means that we are asking the c compiler to store 2332 at some place in the memory and assign the address in the integer pointer (here in this case it is p).
    
    printf("Value of a after changing twice by dereferencing is %d",*p);
}