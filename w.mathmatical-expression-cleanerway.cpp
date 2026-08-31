#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b,c;
    char s,q;
    cin >> a >> s >> b >> q >> c;
    int result;
    if(s=='+')
    {
        result = a+b;
    }
    else if(s== '-')
    {
        result=a-b;
    }
    else
    {
        result=a*b;
    }
    
    if(result == c)
    {
        cout << "Yes";
    }
    else
    {
        cout << result;
    }
    return 0;
}

