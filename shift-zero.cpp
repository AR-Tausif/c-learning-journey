#include <bits/stdc++.h>
using namespace std;

void shift_zero(int a[], int n)
{
    int pos = 0;
    // take into array's begin
    for(int i=0; i<n; i++)
    {
        if(a[i]!=0)
        {
            a[pos]=a[i];
            pos++;
        }
    }
    // replace zero on remaining indexes
    while(pos < n)
    {
        a[pos] = 0;
        pos++;
    }
}
int main() {
	// your code goes here
    int n;
    cin >> n;
    int arr[n];
    // taking input for the array size of 'n'
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    shift_zero(arr, n);
    
    // print the array 
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

