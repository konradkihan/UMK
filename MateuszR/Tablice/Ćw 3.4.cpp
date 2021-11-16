#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	const int N=100;
	double A[N];
	
	srand(time(NULL));
	for(int i=0;i<N;i++)
	{
		A[i]= 1.0*rand() / RAND_MAX; //Liczby rzeczywiste z przedzialu [0 1]
	}         //Zamiana na liczby calk na rzeczywsita
	for(int i=0;i<N;i++)
	{
		cout<<A[i]<<" ";
	}
	
	double mini = A[0];
	int indeks_mini = 0;
		for(int i=1;i<N;i++)
		{
			if(A[i]<mini)
			{
			mini=A[i];
			indeks_mini=i;
			}
		}
		cout<<endl<<"Najmniejsza liczba to: "<<mini<<endl;
		cout<<"Indeks tej liczby to (polozenie): "<<indeks_mini;
}
