#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5, y=6, z=7;
    int *px=&x, *py=&y, *pz=&z;
    printf("The value of x is: %d\n",x);
    printf("The value of y is: %d\n",y);
    printf("The value of z is: %d\n",z);
    printf("The value of px is: %d\n",(int *)px);
    printf("The value of py is: %d\n",(int *)py);
    printf("The value of pz is: %d\n",(int *)pz);
    printf("The value of *px is: %d\n",*px);
    printf("The value of *py is: %d\n",*py);
    printf("The value of *pz is: %d\n",*pz);
    printf("swapping pointers\n");
    int swap=pz;
    pz=px;
    px=py;
    py=swap;
    printf("The value of x is: %d\n",x);
    printf("The value of y is: %d\n",y);
    printf("The value of z is: %d\n",z);
    printf("The value of px is: %d\n",(int *)px);
    printf("The value of py is: %d\n",(int *)py);
    printf("The value of pz is: %d\n",(int *)pz);
    printf("The value of *px is: %d\n",*px);
    printf("The value of *py is: %d\n",*py);
    printf("The value of *pz is: %d\n",*pz);
    return 0;
}
