#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec={70, 1, 2, 3, 4};
    for(int i:vec){
        cout << i << endl;
    }
    return 0;
}