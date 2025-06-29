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

    int i=0, j=n-1;
    
    while(i<j)
    {
        int temp=a[i];
        printf("I%d = J%d \n", i, j);
        a[i] = a[j];
        a[j]= temp;
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {

        printf("%d ", a[i]);
    }
}