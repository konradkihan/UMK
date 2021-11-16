#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
	const int N = 5;
	double tab[N];
	
	srand(time(NULL));
	
	for(int i=0;i<N;i++)
	{
		tab[i] = 1.0 * rand() / RAND_MAX;
	}
	
	for(int i=0;i<N;i++)
	{
		cout<<" "<<tab[i];
	}
	//Po sortowaniu
	
	double tmp;
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N-1;j++)
		{
			if(tab[j]>tab[j+1])
			{	
				tmp=tab[j];
				tab[j]=tab[j+1];
				tab[j+1]=tmp;
			}
			//swap(tab[j],tab[j+1]);
		}
	}
	
	cout<<endl<<endl;
	
	for(int i=0;i<N;i++)
	{
		cout<<" "<<tab[i];
	}
}
