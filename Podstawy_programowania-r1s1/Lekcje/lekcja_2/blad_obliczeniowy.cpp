#include <iostream>
using namespace std;

int main(){
    const int N = 1000000;
    float S = 0.0;
    double S2 = 0.0;
    // float jest znacznie mniej precyzyjny niż double co powoduje wystąpienie błędu obliczeniowego w przypadku dużych liczb
    for(int i=1; i <= N; i++)
        S = S + 0.1;
        S2 = S2 + 0.1;
    cout << S << "\t||\t" << S2;
}