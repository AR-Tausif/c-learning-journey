#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int min_idx =0;
    int max_idx =0;
    // get the min idx 
    for(int i=0; i<n; i++)
    {
        if(arr[i] < arr[min_idx])
        {
            min_idx = i;
        }
    }
     // get the max idx 
    for(int i=0; i<n; i++)
    {
        if(arr[i] > arr[max_idx]) // 10 < 8
        {
            max_idx = i;
        }
    }
    swap(arr[max_idx], arr[min_idx]);
    
    // print the arary
    for(int i=0; i<n; i++)
    {
        if(i>0)
        {
            cout << " ";
        }
        cout << arr[i];
    }
    return 0;
}

