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
void Printing_array_elements(int n,int array[n])
{
    int i;
    printf("\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",i[array]);
    }
}
void main()
{   
    int i,j,n,temp;
    printf("Enter the number of array elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array one by one: \n");
    Entering_array_elements(n,arr);
    Printing_array_elements(n,arr);

    // Now the sorting logic begins.

    for ( i = 0; i < n; i++)
    {
        for ( j = i; j < n; j++)
        {
            if(arr[i]>arr[j+1])
            {
                temp=arr[i];
                arr[i]=arr[j+1];
                arr[j+1]=temp;
            }
        }  
    }
    
    printf("\nThe sorted array is:-\n");
    
    Printing_array_elements(n,arr);
  
}