#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    printf("The value before change is: %d\n",x);
    int *ptr=&x;
    *ptr=20;
    printf("The value after change is: %d",*ptr);
    return 0;
}
