#include<bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    int x = 20;
    p = &x;
    cout << "Fun : " << *p << endl;
    return;
}
int main()
{
    fun();
    cout << "Main : " << *p << endl;
    return 0;
}