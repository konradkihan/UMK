#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	const int I=2;
	
	int tab[I][I];
	
	srand(time(NULL));
	
	for(int i=0;i<I;i++)
	{
		for(int j=0;j<I;j++)
		{
			tab[i][j]= 1+rand()%10; 
		}
	}
	
	for(int i=0;i<I;i++)
	{
		for(int j=0;j<I;j++)
		{
			cout<<" "<<tab[i][j];
		}
		cout<<endl;
	}
	
	int suma = 0;
//1 metoda	
	for(int i=0;i<I;i++)
	{
		for(int j=0;j<I;j++)
		{
			if(i<j) suma+=tab[i][j];
		}
	}
	
	cout<<endl<<"Suma: "<<suma;
//2 Metoda
	suma=0;
	for(int i=0;i<I;i++)
	{
		for(int j=i+1;j<I;j++)
		{
			suma+=tab[i][j];
		}
	}	
	
	cout<<endl<<"Suma: "<<suma;
	
}
