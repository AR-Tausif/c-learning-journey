#include <stdio.h>

int main(void) {
    // your code goes here

    int n;
    scanf("%d", & n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", & a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            printf("%d ", 1);
        }
        else if (a[i] == 0)
        {
            printf("%d ", a[i]);
        }
        else
        {
            printf("%d ", 2);
        }

    }
    return 0;
}