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
    int isFind=-1, x;
    scanf("%d", & x);
    for (int i = 0; i < n; i++)
    {

        if (a[i] == x)
        {
            isFind = i;
            break;
        }
        
    }
    printf("%d", isFind);
    return 0;
}