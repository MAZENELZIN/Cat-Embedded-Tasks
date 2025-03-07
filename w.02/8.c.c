#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,i,multi;
    printf("enter the number to disblay the multi::\n");
    scanf("%d",&y);
    for(i=0;i<=12;i++)
    {
        multi=y*i;
         printf("%d * %d= %d \n ",y,i,multi);
    }

    return 0;
}
