#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    for(int i=1; i<N; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    int count = 0;
    for(int i = 0; i<N; i++)
    {
        if(arr[i] == min)
        {
            count++;
        }
    }
    
    if(count % 2 == 1)
    {
        cout << "Lucky";
    }
    else
    {
        cout << "Unlucky";
    }
    return 0;
}
