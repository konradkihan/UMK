#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Podaj n: ";
	cin>>n;
	
	int suma=0;
	
	for(int i=1;i<n;i++)
	{
		if(n%i==0) suma+=i;
	}
	
	cout<<"Suma: "<<suma;
	cout<<endl;
	
	if(suma == n) cout<<"Ta liczba jest liczba doskonala";
	else cout<<"Liczba ta nie jest doskonala";
}
