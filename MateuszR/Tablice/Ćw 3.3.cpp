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
			A[i]= 1 + rand() % 1000;
		}
		for(int i=0;i<N;i++)
		{
			cout<<A[i]<<" ";
		}
		
		int maks = A[0];
		for(int i=1 ;i<N;i++)
		{
			if(A[i]>maks) maks = A[i];
		}
		cout<<endl<<"Max: "<<maks;
}
