#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double n;
	cout<<"Podaj n: ";
	cin>>n;
	
	double suma=0;
	
		for(int i=1;i<=n;i++)
		{
			suma +=  (pow(i+3,3)/ n);		
		}
		cout<<endl;
		cout<<"Suma wynosi: "<<suma-8;
}
