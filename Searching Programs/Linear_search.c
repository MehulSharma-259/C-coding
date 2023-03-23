# include <stdio.h>
void Entering_array_elements(int n,int a[n])
{
    int i,j,temp;
    for ( i = 0; i < n; i++)
    {
        printf("Enter the %d element: ",i);
        scanf("%d",&a[i]);
    }
}
void Printing_array_elements(int n,int arr[n])
{
    int i;
    printf("\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",i[arr]);
    }
}
void sorting(int n,int arr[n])
{
    int i,j,temp;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }   
    }   
}
void main()
{   
    int i,j,n,search,flag=0;
    printf("Enter the number of array elements: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of array one by one: \n");
    Entering_array_elements(n,array);

    Printing_array_elements(n,array);

    printf("\nEnter the element you want to search in array: ");
    scanf("%d",&search);

    //Logic of searching.
    
    for ( i = 0; i < n; i++)
    {
        if(array[i]==search)
            {
                printf("Element found !!! at index %d !!!",i);
                flag=1;
                break;
            }
    }
    if(flag==0)
        printf("Element not found !!!");
}    