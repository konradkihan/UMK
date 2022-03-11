#include<iostream>
using namespace std;

int main()
{
    int n;
    double a;
	char c;
	
    cout<<"Podaj n: ";
    cin>>n;

    double suma=0;
    
do{

    for(int i=0;i<n;i++)
    {
        cout<<"Podaj "<<i+1<<" wartosc a: ";
        cin>>a;
        suma+=a;
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
