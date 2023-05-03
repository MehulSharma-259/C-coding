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
    int i,j,n,temp,flag=0;
    printf("Enter the number of array elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array one by one: \n");
    Entering_array_elements(n,arr);
    Printing_array_elements(n,arr);

    // Logic of sorting.
    
    for ( i = 0; i < n; i++)
    {
        flag=0;
        for ( j = 0; j < n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                flag=1;
            }
        } 
        if(flag==0)  
            break;
    }   
    Printing_array_elements(n,arr);
}
