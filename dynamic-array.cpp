#include<iostream>
using namespace std;

 
int main()
{
    int* a= new int[5]; // it will take the size of memory for storing values on Heap Memory, and its called array
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
