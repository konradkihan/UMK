#include <iostream>
using namespace std;

int main(){
    const int N = 10;
    int A[N];

    for(int i = 0; i < N; i++)
        A[i] = 2 * i;

    for(int i = 0; i < N; i++)
        cout<<A[i]<<" ";
}