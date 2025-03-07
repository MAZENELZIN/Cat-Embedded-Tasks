 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
 printf("enter your grade:");
 scanf("%d",&x);
 if(x>=85)
    { printf("your rating is excellent");
    }
    else if (x>=75)
   { printf("your rating is very good");

   }
 else if (x>=65)
{
     printf("your rating is good");

}
 else if ((x>=50))
{
    printf("your rating is pass");

}


  else
  {
      printf("your rating is faild");
 }

    return 0;
}

