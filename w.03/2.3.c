#include <stdio.h>
#include <stdlib.h>
int x,y ;
 void swap (void);
int main()
{ printf("enter the x value :");
    scanf(" %d", &x);
     printf("enter the y value :");
     scanf(" %d", &y);
    printf("the value before swap %d\t%d\n",x,y);
    swap();
    printf("the value after swap %d\t%d\n",x,y);

    return 0;
}

void swap (void)
{
    int h=x;
    x=y;
    y=h;
}
