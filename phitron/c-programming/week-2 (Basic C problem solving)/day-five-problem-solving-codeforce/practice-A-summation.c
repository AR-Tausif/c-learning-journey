#include <stdio.h>

int main(void) {
    // your code goes here


    int n; // lenght number
    scanf("%d", & n);
    int a[n];

    // taking input for a over the loop
    for (int i = 0; i < n; i++)
    {
        scanf("%d", & a[i]);
    }

    // initialize the variable for absolute summation
    long long int sum = 0;

    // display the output over the using loop
    for (int i = 0; i < n; i++)
    {
        // check the absolute values
        
            sum += a[i];
        

    }
    if(sum > 0)
    {
        printf("%lld", sum);
    }
    else
    {
        printf("%lld", sum * (-1));
    }
    return 0;
}