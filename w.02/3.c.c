#include <stdio.h>
#include <stdlib.h>

int main()
{ int x;
    printf("enter your id \n") ;
    scanf("%d",&x);
    switch(x)
    {  case 1234:
        printf("you are harry");
        break;
    case 5678:
        printf ("you are ron");
        break;
    case 1145:
        printf("you are hermione");
        break;
    default :
        printf("wrong id");

    }

    return 0;
}
