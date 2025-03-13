
#include <stdio.h>
#include <stdlib.h>

int Get_Max(int x, int y);

int main()
{
    int max, a, b;
    printf("enter the first number ");
    scanf("%d", &a);
    printf("enter the second number ");
    scanf("%d", &b);
    max = Get_Max(a, b);
    printf("the maximum number is %d ", max);

    return 0;
}

int Get_Max(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
