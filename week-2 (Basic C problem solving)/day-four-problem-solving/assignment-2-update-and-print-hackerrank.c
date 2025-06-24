#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d", &n);
    // declare n-th of array (VLA)
    int a[n];
    // taking input for the n-th of array over the loop
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    // declare x and v for target and update
    int x, v;
    scanf("%d %d", &x, &v);
    // change the targeted index value of the a[x] array
    a[x] = v;
    // print the 
    for(int i = n-1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
