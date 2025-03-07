#include <stdio.h>
#include <stdlib.h>
int main()
{
    int answer;

    do
    {
        printf("What is the result of 3 x 4?\n");
        scanf("%d", &answer);
        if (answer == 12)
        {
            printf("Thanks\n");
        }
        else
        {
            printf("Try again\n");
        }
    } while (answer != 12);

    return 0;
}
