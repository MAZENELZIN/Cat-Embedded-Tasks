#include <stdio.h>
#include <stdlib.h>

int main()
{ int x= 10;
printf("the value of x= %d \n",x);
int*ptr=&x;
*ptr=20;
printf("the value of x = %d",x);
    return 0;
}
