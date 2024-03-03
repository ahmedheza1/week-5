#include <stdio.h>
#include <stdlib.h>

void fun(int a[],int b[],int s,int r[])
{
    for(int i=0 ; i<s ; i++)
    {
        r[i]=a[i]*b[i];
    }
}
int main()
{
    int arr1[]= {1,2,3,4};
    int arr2[]= {5,6,7,8};
    int size= sizeof(arr1)/sizeof(arr1[0]);
    int result[size];
    fun(arr1,arr2,size,result);
    printf("The result of multiplication is:\n");
    for(int i=0 ; i<size ; i++)
    {
        printf("%d ",result[i]);
    }
    printf("\n");
    return 0;
}

