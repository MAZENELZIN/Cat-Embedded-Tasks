#include <stdio.h>
#include <stdlib.h>
int main ()
{
int arr [5] [5]={ {8,3, 9, 0, 10 },{3, 5, 17, 1, 1} ,{2, 8 ,6, 23, 1} ,{15, 7, 3, 2 ,9},{6, 14, 2, 6 ,0} };
int i,j,sum1=0,sum2=0;
printf("rows sum :");
for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        sum1+=arr[i][j];
    }
    printf("%d \t",sum1);
    sum1=0;
}
   printf("\n coulmn total :");

   for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        sum2+=arr[j][i];
    }
    printf("%d \t",sum2);
    sum2=0;
}

    return 0;
}
