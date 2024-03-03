#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void array(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {7, 3, 11, 4, 6, 8,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("before sorting: \n");
    array(arr, n);
    sort(arr, n);
    printf("after sorting: \n");
    array(arr, n);
    return 0;
}
