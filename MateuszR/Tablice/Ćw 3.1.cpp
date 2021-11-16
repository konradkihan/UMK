#include<iostream>

using namespace std;

int main()
{
	int tab[5];
	
		for(int i=0;i<5;i++)
		{
			cin>>tab[i];
		}
		for(int i=4;i>=0;i--)
		{
			cout<<tab[i]<<" ";
		}
}
