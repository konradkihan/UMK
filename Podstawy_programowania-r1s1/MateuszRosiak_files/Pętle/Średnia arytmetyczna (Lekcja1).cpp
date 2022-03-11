#include<iostream>

using namespace std;

int main()
{
	int n=1,ilosc_liczb;
    double a;
	char c;
    double suma=0;
    bool czy_dalej;
    
do{
	czy_dalej = true;

    while(czy_dalej)
    {
        cout<<"Podaj "<<" wartosc a: ";
        cin>>a;
        if(a == 0 )
         czy_dalej = false;
         else
		 {
			suma+=a;
        	ilosc_liczb++;
        	n++;
		 } 
		 

    }

    cout<<endl;

    cout<<"Suma: "<<suma;

    double srednia;

    cout<<endl;

    srednia=(suma)/n;
    cout<<"Srendia: "<<srednia<<endl;
    
    cout<<"Czy chcesz kontynnuowac? ";
    cin>>c;
    
}while(c=='t'||c=='T');    
}
