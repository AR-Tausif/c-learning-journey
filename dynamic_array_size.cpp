#include<bits/stdc++.h>
using namespace std;


int main()
{
    
     int *a = new int[5];
    // taking input for the array
    for(int i =0; i<5; i++)
    {
        cin >> a[i];
    }
    int *b = new int[10];
    for(int i=0; i<5; i++)
    {
        b[i] = a[i];
    }
    for(int i=5; i<10; i++)
    {
        cin >> b[i];
    }
   
    cout << "new array: ";
    for(int i =0; i<10; i++)
    {
        cout << b[i] << " ";
    }
    delete a;
    
    cout << endl;
     // previous array print
    cout << "old array: ";
    for(int i=0; i<5; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}