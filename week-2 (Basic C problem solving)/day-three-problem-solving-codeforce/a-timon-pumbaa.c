#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int sbustract = a - b;
    if (sbustract >= 0)
    {
        printf("%d \n", sbustract);
    }
    else
    {
        printf("%d", 0);
    }
    return 0;
}