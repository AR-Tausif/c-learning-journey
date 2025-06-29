#include <stdio.h>

int main() {
	// your code goes here
    int n;
    scanf("%d", &n);
    int a[n];
    // taking array element input
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    // print the array
    for(int i = 0; i<n; i++)
    {
       if(a[i] <= 10)
       {
            printf("A[%d] = %d\n", i, a[i]);
       }
    }
    
}

