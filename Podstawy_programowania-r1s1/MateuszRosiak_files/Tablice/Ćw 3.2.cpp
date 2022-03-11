#include<iostream>

using namespace std;

int main()
{
	int n;
	double suma=0;
	cout<<"Podaj n:";
	cin>>n;
	if(n>=1 && n<=10)
	{
		cout<<"Poprawnie"<<endl;
	}
	else
	{
		cout<<"Liczba spoza zakresu";
		return 0;
	}
	
	double a;
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<".Liczba: ";
		cin>>a;
	}
	
	double tab[n];
	
		for(int i=0;i<n;i++)
		{
			tab[i]=a;
		}
		for(int i=0;i<n;i++)
		{
			cout<<tab[i]<<" ";
		}
		for(int i=0;i<n;i++)
		{
			suma+=tab[i];
		}
		cout<<endl;
		cout<<"Suma: "<<suma;
	
}
