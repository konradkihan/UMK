#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
	//Prosba o podanie liczb z zakresu  od 1 do 49
	int n;
	int lotek[6];
	cout<<"Wielka Kumulacja do wygrania nawet 100 milionow :O"<<endl;
	cout<<"Prosze o podanie 6 cyfr "<<endl;
	
		for(int i=0;i<6;i++)
		{
			cout<<i+1<<" Cyfra: ";
			cin>>lotek[i];
			if(lotek[i]>=1 && lotek[i]<=49)
			{
				cout<<"Poprawna Cyfra"<<endl;
			}
			else
			{
				cout<<"Liczba jest nie poprawna sproboj jeszcze raz: ";
				cin>>lotek[i];
			}
		}
		system("cls");
		//Wypisanie podanych liczb przez u¿ytkowanika do tablicy
		cout<<"Twoje liczby ktore moga zagwarantowac ci wygrana: "<<endl<<endl;
		for(int i=0;i<6;i++)
		{
			cout<<setw(5)<<lotek[i];
		}
		cout<<endl<<endl;	
		//Wypisanie liczb wygenerowanych przez komputer od 1 do 49
		srand(time(NULL));
		int komp[6];
		cout<<"To sa liczby wygenerowane przez komputer: "<<endl<<endl;
		for(int j=0;j<6;j++)
		{
			komp[j]= 1+rand()%49; // Przedzial od 1 do 49;
		}
		
		for(int j=0;j<6;j++)
		{
			cout<<setw(5)<<komp[j];
		}
		cout<<endl<<endl;
		//Porowanie liczb wpisanych przez uzytkownika do tych wygenerowanych przez komputer
		int licznik=0;
		for(int i=0;i<6;i++)
		{
			for(int j=0;j<6;j++)
			{
				if(lotek[i]==komp[j]) licznik++;
			}
		}
		cout<<"Oto twoja liczba trafien: "<<licznik<<endl<<endl;
		//Wypisywanie nagrod za ilosc trafionych liczb
		switch(licznik)
		{
			case 6:
				cout<<"Wygrales: 100 Milionow zlowtych :o"<<endl;
				break;
			case 5:
				cout<<"Wygrales 100 tys zlotych :o"<<endl;
				break;
			case 4:		
				cout<<"Wygrales 10 tys zlotych :)"<<endl;
				break;
			case 3:
				cout<<"Wygrales 3 tys zlotych :)"<<endl;
				break;	
		}
		if(licznik<3)
		{
			cout<<"Nic nie wygrales :("<<endl;
		}	
}
