#include<iostream>

using namespace std;

int main()
{
	int m;
	int n;
	
	int liczba_wierszy;
	int liczba_gwiazdek;
	
	liczba_wierszy=m;
	liczba_gwiazdek=n;
	
	cout<<"Podaj m : ";
	cin>>m;
	
	cout<<"Podaj n : ";
	cin>>n;
	
	cout<<endl;
	
/*	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
*/

//Druga wersja za pomoc¹ while

/*	int i = 1;
	int j = 1;
	while(i<=liczba_wierszy)
	{
		while(j<=liczba_gwiazdek)
		{
			cout<<"*";
			j++;
		}
		cout<<endl;
		j = 1;
		i++;
	}
*/		
}
