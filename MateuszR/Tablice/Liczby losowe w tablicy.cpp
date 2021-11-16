#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	const int N=50;
	int A[N];
	
	srand(time(NULL));
	
		for(int i=0;i<N;i++)
		{
			A[i]= 1+ rand() % 100;//Przedial od 1 do 100
		}
		for(int i=0;i<N;i++)
		{
			cout<<A[i]<<" ";
		}
		
		//cout<<endl<<RAND_MAX;
}
