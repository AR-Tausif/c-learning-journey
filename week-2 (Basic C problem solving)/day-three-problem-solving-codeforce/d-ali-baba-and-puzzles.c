#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (d <= 10)
    {
        long long int sum = a - b + c;
        if (sum == d)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        long long int sum = a + b * c;
        if (sum == d)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}