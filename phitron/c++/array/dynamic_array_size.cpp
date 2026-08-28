#include<bits/stdc++.h>
using namespace std;

// Process:
/**
 * Declare a pointer with a 'new' keyword
 * taking input with the length of the array with for loop
 * then print the array
 * COPY the existing array and increase the size with declaration a new dynamic array
 * shallow copy those values into the new array
 * THEN delete the previous/old array with 'delete[]' keyword
 * print the new array and old/previous array
 * FINALLY get the output and compare it.
 */

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
    delete[] a;
    
    cout << endl;
     // previous array print
    cout << "old array: ";
    for(int i=0; i<5; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}