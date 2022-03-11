#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	const int I=4;
	
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
	
	int suma=0;
	int nr_indeksu=0;
	int max=0;
	for(int i=0;i<I;i++)
	{
		for(int j=0;j<I;j++)
		{
			suma+=tab[i][j];
			 if(max<suma) max=suma;
		}	
	cout<<"Suma wynosi: "<<suma<<" nr: "<<nr_indeksu<<endl;
	nr_indeksu++;
	suma=0;	
	}
	cout<<endl;
	cout<<"Max: "<<max;
	
}
