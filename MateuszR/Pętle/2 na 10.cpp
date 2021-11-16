#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;//Liczba w postaci 2
	cout<<"Podaj n: ";
	cin>>n;
	
	int r;
	int postac_10=0;
	int i=0;
	
	while(n!=0)
	{
		r=n%10;
		postac_10+=r*pow(2,i);
		i++;
		n=n/10;
	}
	cout<<endl;
	cout<<"10: "<<postac_10;
	
}
