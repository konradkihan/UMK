#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
#include<cmath>

using namespace std;

bool pierwsza(int);

int main()
{
	int n;
	cout<<"Podaj n: ";
	cin>>n;
	
	int tab[n];
	for(int i=2;i<=n;i++)
	{
		tab[i]=i;
	}
	/*for(int i=2;i<=n;i++)
	{
		cout<<setw(5)<<tab[i];
	}
	*/
	for(int i=2;i<=n;i++)
	{
		if(pierwsza(tab[i])) cout<<setw(5)<<tab[i];
	}

	
}

bool pierwsza(int x)
{
		if(x<=1) return false;
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0) return false;
	}
	
	return true;
}
