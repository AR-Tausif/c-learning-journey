#include <bits/stdc++.h>
using namespace std;

/*
 * PROCESS:
 * - taking input N
 * - allocate a dynamic array for the name of 'A'
 * - get the 'A' values from input
 * - taking input for 'B' name of array size of 'M'
 * - allocate a new dynamic array name of 'B'
 * - copy 'A' to 'B'
 * - clear the memory of 'A' explicitly
 * - get rest of the values for 'B' from input
 * - FINALLy: print the combined array of 'B'
 *   */

int main(){
    
    // taking input N and make array of A 
    int N;
    cin >> N;
    int* A = new int[N]; // a dynamic array for the array to address the memory
    
    // taking input for the values of array A 
    for(int i=0; i<N; i++)
    {
        cin >> A[i];
    }
    
    // taking input size for B and copy A to B and clear the memeory of A
    int M; 
    cin >> M;
    int* B = new int[M];
    for(int i=0;i<N; i++)
    {
        B[i]=A[i]; // copy the array of A to B
    }
    delete[] A; // delete the array and declare it deletes array with sign of []
    
    // take rest of the input for the B array 
    for(int i = N; i<M; i++)
    {
        cin >> B[i];
    }
    
    // print the array of B
    for(int i=0; i<M; i++){
        cout << B[i] << " ";
    }
    return 0;

}

