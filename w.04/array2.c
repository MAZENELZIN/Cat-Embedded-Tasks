#include <stdio.h>
#include <stdlib.h>

int main()
{ int size,i,max1,max2;
printf("enter the size of array \n ");
scanf("%d",&size);
int arr [size];
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
 max1=arr[0];
for(i=1;i<size;i++)
{
    if(arr[i]>max1){max2 = max1;
            max1 = arr[i];}
    else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];}
} printf("the second maximum number is %d ",max2);
    return 0;
}
