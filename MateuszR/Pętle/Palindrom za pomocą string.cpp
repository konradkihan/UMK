#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
	string s;//slowo normalne
	cout<<"Wpisz slowo: ";
	cin>>s;
	
	cout<<endl<<s.size()<<endl;//B³êdna bo liczmy od 1
	cout<<endl<<s.size()-1<<endl;//Poprawna bo liczmy od 0
	
	string odwr;//slowo odwrocone
	
	for(int i=s.size()-1;i>=0;i--)
	{
		odwr+=s[i]; //Wypisywanie slowo od koñca
	}
	cout<<endl;
	cout<<"Slowo odwrocone: "<<odwr<<endl;
	
	cout<<endl;
	
	if(odwr==s)
	{
		cout<<"Jest palindromem";
	}
	else cout<<"Nie jest palindromem";
	
	
	
	
}
