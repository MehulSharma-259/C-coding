# include <stdio.h>

void Entering_array_elements(int nl,int a[nl])
{
    int i,j,temp;
    for ( i = 0; i < nl; i++)
    {
        printf("Enter the %d element: ",i);
        scanf("%d",&a[i]);
    }
}
void Printing_array_elements(int nl,int array[nl])
{
    int i;
    printf("\n");
    for ( i = 0; i < nl; i++)
    {
        printf("%d\t",i[array]);
    }
}
void main()
{
    int i,j,min,n,temp;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int arr[n];
    Entering_array_elements(n,arr);
    printf("Entered array is:-");
    Printing_array_elements(n,arr);
    for ( i = 0; i < n-1; i++)
    {
        min = i;
        for ( j = i+1; j < n; j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;   
            }
            
            
        }
        if (min!=i)
            {
                temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
            }
    }
    printf("\nSorted array is:-");
    Printing_array_elements(n,arr);

}