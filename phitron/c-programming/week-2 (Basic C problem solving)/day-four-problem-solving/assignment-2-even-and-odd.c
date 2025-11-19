#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d", &n);
    // declare a VLA (variable length array)
    int numArr[n];
    // taking input for array over the for loop
    for(int i = 0; i<n; i++)
    {
       
        scanf("%d", &numArr[i]);
    }
    int evenSum =0, oddSum=0;
    // calculated the array values
    for(int i=0; i<n; i++)
    {
        if(numArr[i] %2 == 0)
        {
            evenSum += numArr[i];
        }
        else
        {
            oddSum += numArr[i];
        }
    }
    // finally print the even and odd calculated sum
    printf("%d %d", evenSum, oddSum);
    return 0;
}
