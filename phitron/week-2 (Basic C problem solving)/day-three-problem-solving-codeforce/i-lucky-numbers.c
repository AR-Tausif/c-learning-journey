#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int firstDigit = num / 10;
    int lastDigit = num % 10;
    // check the divisible is zero or not. if zoro then skip
    if ((lastDigit != 0 && firstDigit % lastDigit == 0) || (firstDigit != 0 && lastDigit % firstDigit == 0))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}