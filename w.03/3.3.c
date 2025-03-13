 #include <stdio.h>
int digit(int num );
int main() {
    int num, x;

    printf("Please enter a number: ");
    scanf("%d", &num);
   x= digit(num);
    printf("Number of digits: %d\n", x);

    return 0;
}
 int digit(int num )
{  int count =0;
    while (num != 0)
        {
    num = num / 10;
        count++;
        }
   return count ;
    }
