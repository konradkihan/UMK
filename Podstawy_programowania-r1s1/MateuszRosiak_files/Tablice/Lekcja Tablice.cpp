#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Podaj rozmiar tablicy: ";
	cin>>n;
	//const int N = 20;
	//int A[N];
	int A[n];
	
		for(int i=0;i<n;i++)
		{
			A[i]=2*i;
		}
		
		for(int i=0;i<n;i++)
		{
			cout<<A[i]<<" ";
		}
}
