#include<iostream>

using namespace std;
int* p;
 
int main()
{
    string s = "Hello";
    cout << s;

    for(char c:s)
    {
        cout <<c << endl;
    }
    return 0;
}