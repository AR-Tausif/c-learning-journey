#include<iostream>
using namespace std;
int* p;
 
int main()
{
    int a[5]; // it will take the size of memory for storing values, and its called array
    for( int i=0; i<5; i++)
    {
        cin >> a[i]; // taking input for an array 
    }
    for(int i=0; i<5; i++)
    {
        cout << " " << a[i]; // printing the output of an array
    }
    return 0;
}