#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
	const int N = 5; //rozmiar tablicy
	double tab[N]; //tablica
	
	srand(time(NULL));
	//Genrowanie liczb rzeczywistych do tablicy
	for(int i=0;i<N;i++)
	{
		tab[i] = 1.0 * rand() / RAND_MAX; //Przedzial [0,1]
	}
	//Tablica przed sortowaniem
	for(int i=0;i<N;i++)
	{
		cout<<" "<<tab[i];
	}
	
	
//Po sortowaniu	

cout<<endl<<endl;
	
	for(int i=0;i<N-1;i++)
	{
		double minimum;
		int min_index=i;
		minimum=tab[i];
		for(int j = i+1 ; j<N-1;j++)
		{
			if(minimum > tab[j])
			{
				minimum = tab[j];
				min_index = j;
			}
			
		}
	//	swap(tab[i],tab[min_index]);
	double tmp;
	tmp=tab[i];
	tab[i] = tab[min_index];
	tab[min_index]=tmp;
	}
	
	for(int i=0;i<N;i++)
	{
		cout<<tab[i]<<" ";
	}
	
}
