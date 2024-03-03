#include <stdio.h>
#include <stdlib.h>

int sum(int *a, int *b);
int main()
{
    int x, y;
    printf("Please enter two numbers: ");
    scanf("%d %d",&x,&y);
    printf("The result of summation is: %d",sum(&x,&y));
    return 0;
}
int sum(int *a, int *b)
{
    int sum;
    sum = *a + *b;
    return sum;
}
