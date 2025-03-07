#include <stdio.h>
#include <stdlib.h>

int main()
{ int i,num,sum=0;
    float ava;
    printf("enter the numbers \n ");
    for(i=0;i<10;i++)
        {
            printf("number%d::",i);
        scanf("%d",&num);
        sum+=num;
    }
   ava=sum/10.0;
    printf("the sum of 10 number : %d \n", sum);
    printf("the ava of 10 number : % f",ava);
    return 0;
}
