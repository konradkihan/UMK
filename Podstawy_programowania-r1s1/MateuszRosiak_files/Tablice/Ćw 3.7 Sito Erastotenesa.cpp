#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	const int N=10000;
	bool czy_pierwsza[N];
	
	int n;
	cout<<"N: ";
	cin>>n;
	
	//ustawienie wszystkich wartosci na prawda
	for(int i=2; i<=n;i++)
	{
		czy_pierwsza[i] = true;
	}
	
	//wykreslanie wieloktornosci czyli do pierwiastka z liczby (n) np 50 czyli do 7...
	
	for(int i=2;i<=sqrt(n);i++)
	{
		if(czy_pierwsza[i]==true)
		{
			for(int j = 2 * i; j <= n  ;j = j + i )
			{
				czy_pierwsza[j] = false;
			}
		}
	}
	
	for(int i=2;i<=n;i++)
	{
		if(czy_pierwsza[i] == true)
		{
			cout<<i<<" ";
		}
	}
	
	
}
