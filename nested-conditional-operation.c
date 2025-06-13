#include <stdio.h>

int main()
{
    int amount;
    scanf("%d", &amount);

    if (amount > 20000)
    {
        printf("Gucci Bag \nGucci Belt");
    }
    else if (amount >= 10000)
    {
        printf("Gucci Bag");
    }
    else if (amount >= 5000)
    {
        printf("Levis Bag");
    }
    else
    {
        printf("Something");
    }
    return 0;
}