#include <stdio.h>
#include <stdlib.h>

int main()
{ int  salary ;
int h ;
printf("enter your hour \n");
scanf("%d",&h);
salary=h*50 ;
if(h<40)
{
    salary = (salary*90)/100 ;
}
printf("your salary is %d",salary);
    return 0;
}
