#include<iostream>
using namespace std;
int* p;
void fun()
{
    int x=10;
    p=&x; // set the address of x variable
    cout << "Fun --> " << *p << endl; // print the pointer with decrypted

    return;
}
int main()
{
    fun();
    cout << "Main --> "<< *p << endl;
    return 0;
}