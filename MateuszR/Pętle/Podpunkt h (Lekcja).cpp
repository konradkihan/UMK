#include<iostream>
#include<cmath>

using namespace std;

bool pierwsza(int a)
{
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{ 
		return false; // nie jest licza pierwsza
		break;
		}
	}
	return true;// jest liczba pierwsza
}

int main()
{
	int n;
	cout<<"Podaj n: ";
	cin>>n;
	
	if(n<=1) cout<<"Ta liczba nie jest pierwsza";
	else if(pierwsza(n)) cout<<"Ta liczba jest pierwsza"<<endl;
	else cout<<"Ta liczba nie jest pierwsza";
	
	
	
}
