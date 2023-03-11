# include <stdio.h>
void main()
{
    int arr[]={5,1,2,4,3,2};

    int *ptr=arr; // If we use 2d array the it gives warining of incompatible pointer because in that case arr=&arr[0] and it will point to whole 0th 1d array.But in this case it will not give any error as arr=&arr[0] and at 0th address there is 5 not an individual array while &arr will point to whole array in this present case (1d array case).

    char name[]="Mehul Sharma";
    char *p;
    p=name; // name stores base address.
    int i=0;
    
    printf("%s","Mehul Sharma");
    
    printf("\n\nAnother method of printing\n\n");
    while (*p!='\0')
    {
        printf("%c",*p);
        p++;
    }
    
    printf("\n\nAnother method of printing\n\n");
    
    while (name[i]!='\0')
    {
        printf("%c",name[i]);
        i++;
    }
    
    // How this program is terminating
    // while (*p!='\0')
    // {
    //     printf("%c",name[i]);
    //     i++;
    // }
    
    
}
