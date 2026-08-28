#include<bits/stdc++.h>
using namespace std;
int *p;

int main()
{
    int a[5];
    // taking input for the array
    for(int i =0; i<5; i++)
    {
        cin >> a[i];
    }

    for(int i =0; i<5; i++)
    {
        cout << a[i] << " ";
    }

    int *arr = new int[5]; // dynamic array declaration
    for(int i =0; i<5; i++)
    {
        cin >> arr[i];
    }

    for(int i =0; i<5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}