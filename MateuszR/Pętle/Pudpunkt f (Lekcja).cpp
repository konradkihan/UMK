#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Podaj liczbe do ktorej bedzie wystepowac tabliczka mnozenia: ";
	cin>>n;
	cout<<endl;
	int liczba=1;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			
			cout<<liczba<<" * "<<j<<" = "<<j*liczba;
			cout<<endl;
		}
		cout<<endl;
		liczba++;
	}
}
