# include <stdio.h>
void main ()
{
    char str1[13]="Mehul Sharma";
    char *p="Mehul";

    char str2[25]; //Source:GeeksforGeeks We should always account for one extra space which will be assigned to the null character. If we want to store a string of size n then we should always declare a string with a size equal to or greater than n+1.
    
    // printf("Enter a string: "); // We cannot accept multi-word strings from keyboard.
    // scanf("%s",str2);
    // printf("Entered string is: %s\n",str2);
    printf("Enter a multiword string: ");
    // gets(str2); // Can accept multi-word strings , only accept one string at a time.
    // ANOTHER METHOD OF ACCEPTING MULTI-WORD STRING.
    
    scanf("%[^\n]s",str2);// [^\n] indicates that scanf will keep receiving characters into str2 until a \n is encountered. 

    puts(str2); // Can only print one string at a time, place the cursor in next line.
 
    // printf("\nEntered multi-word sting is: %s\n",str2);
    
    // str1="Mehul";// Once a string is defined, it cannot be assigned to another set of characters but in case of pointers it is perfectly valid.

    // str2=str1; // It is not allowed to assign one string to another. (not allowed to assign one array to another).

    char *a="Sharma"; // Here we are asking the compiler to store the string "Sharma" in memory and store its address in pointer a.

    printf("Value of *a is %s",a);

    a="sharma"; // Here it stores the base address of "sharma" in pointer a. We can assign a new address of new string in char pointer as pointer is not constant.

    printf("\nValue of *a after modification is %d",a);
    printf("\nAddress of str is %u\nAddress of p is %u",&str1,p);
}