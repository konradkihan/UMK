#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Podaj n: ";
	cin>>n;
	cout<<endl;
	
		for(int i=1;i<=n;i++)
		{
			
			for(int j=1;j<=n;j++)
			{
				cout.width(5);
				cout<<i*j<<" ";
			}
			cout<<endl;
		}
		
}
