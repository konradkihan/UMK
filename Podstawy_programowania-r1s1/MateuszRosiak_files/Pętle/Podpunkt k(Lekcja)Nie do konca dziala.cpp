#include<iostream>
#include<cmath>

int dlugosc(int);

using namespace std;

int main()
{
	int n;
	cout<<"Podaj n: ";
	cin>>n;
	
	dlugosc(n);
	
	int l;
	cout<<"Podaj dlugosc: ";
	cin>>l;
	
	//sprawdzanie czy danaa liczba jest palindromem
	
		int liczba_odwr;
		int r=0;
		
		while(n>0)
		{
			r=n%10;
			liczba_odwr+=r * pow(10,l-1);
			n=n/10;
			l--;
			cout<<"L: "<<l<<" N: "<<n<<" R: "<<r<<endl;
		}	
		cout<<endl;
		cout<<"Liczba odwrocona: "<<liczba_odwr<<endl;
		
		if(n==liczba_odwr) cout<<"Jest Palindromem :)"<<endl;
		else cout<<"Nie jest palindormem :("<<endl;
		
}

int dlugosc(int a)
{
	int b;
	while(a>0)
	{
		a=a/10;
		b++;
	}
	cout<<"Dlugosc: "<<b<<endl;
}
