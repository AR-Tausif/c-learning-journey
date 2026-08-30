#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b;
    char s;
    cin >> a;
    cin >> s;
    cin >> b;
    
    if(s== '>')
    {
        if(a>b){
            cout << "Right";
        }
        else{
            cout << "Wrong";
        }
    }
    else if(s=='<'){
        if(a<b){
            cout << "Right";
        }
        else{
            cout << "Wrong";
        }
    }
    else if(s=='=')
    {
        if(a==b)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    return 0;
}

