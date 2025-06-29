#include <stdio.h>

#include <limits.h>

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

    int min = INT_MAX, pos;

    // print the array
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            pos = i+1;
        }
    }
    printf("%d %d", min, pos);

}