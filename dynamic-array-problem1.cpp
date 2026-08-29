#include <bits/stdc++.h>
using namespace std;

int* get_array(int N) {
    
    int* arr = new int[N];
    // taking input for the array
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    
   return arr;
}
int main() {

    /*
        - take an input on main function (N)
        - make get_array(N) function for
            - create INT array size of N
            - taking array values from input
            - return the array 
        Print the array on main()
    */
    
    int N;
    cin >> N;
    int* arr = get_array(N);
     // printing the array
    for(int i=0; i<N; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;

}

