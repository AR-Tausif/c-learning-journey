#include <stdio.h>

int main() {
    // your code goes here
    int n;
    scanf("%d", & n);
    int a[n];
    // taking array element input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", & a[i]);
    }

    // index of 1 position insert number of 50
    int pos = 1;
    // print the array
    for (int i = n; i >= pos + 1; i--)
    {
        a[i] = a[i - 1];
    }
    a[1] = 50;

    for (int i = 0; i <= n; i++)
    {

        printf("%d ", a[i]);
    }


    printf("\n finish and start\n");
    // remove array element
    for (int i = pos; i < n; i++)
    {
        a[i] = a[i + 1];
    }

    for (int i = 0; i < n; i++)
    {

        printf("%d ", a[i]);
    }
}