#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num > 0)
    {
        printf("positive %d", num);
    }
    else if (num == 0)
    {
        printf("zero");
    }
    else
    {
        printf("negative");
    }
}