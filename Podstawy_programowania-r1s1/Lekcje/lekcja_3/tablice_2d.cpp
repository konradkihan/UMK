#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void nad_przekatna(){
    // Zadanie: policz sumę elementów nad przekątną tablicy o wymiarach N x N
    #pragma region generowanie tablicy z losową zawartością
        const int N = 4;
        int A[N][N];
        srand(time(NULL));
        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
                A[i][j] = rand() % 10;

        // wyświetlanie tablicy
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++)
                cout<<A[i][j]<<" ";
            cout<<endl;
        }
    #pragma endregion

    int suma = 0;
    #pragma region wykonianie zadania
        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
                if(i<j) suma += A[i][j];
    #pragma endregion

    #pragma ulepszone wykonanie zadania
        for(int i = 0; i < N; i++)
            for(int j = i + 1; j < N; j++)
                suma += A[i][j];
    #pragma endregion
    cout<<endl<<suma;
}

void najwieksza_suma(){
    // Zadanie: policz największą sumę w wierszu
    #pragma region generowanie tablicy z losową zawartością
        const int N = 4;
        int A[N][N];
        srand(time(NULL));
        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
                A[i][j] = rand() % 10;

        // wyświetlanie tablicy
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++)
                cout<<A[i][j]<<" ";
            cout<<endl;
        }
    #pragma endregion

    #pragma region algorytm
        int s_max = 0;
        for(int i = 0; i < N; i++){
            int suma = 0;
            for(int j = 0; j < N; j++)
                suma += A[i][j];
            if(s_max < suma) s_max = suma;
        }
        cout<<s_max;
    #pragma endregion

}

int main(){
    najwieksza_suma();
}