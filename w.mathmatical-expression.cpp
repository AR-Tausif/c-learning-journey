#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b,c;
    char s,q;
    cin >> a;
    cin >> s;
    cin >> b;
    cin >> q;
    cin >> c;
    // check given operator between a,b explicitly '+', '-', '*'
    if(s=='+')
    {
        if(a+b==c)
        {
            cout << "Yes";
        }else{
            cout << a+b;
        }
    }
    else if(s== '-')
    {
        if(a-b==c)
        {
            cout << "Yes";
        }
        else{
            cout << a-b;
        }
    }
    else if(s=='*')
    {
        if(a*b==c)
        {
            cout << "Yes";
        }
        else{
            cout << a*b;
        }
    }
    return 0;
}

