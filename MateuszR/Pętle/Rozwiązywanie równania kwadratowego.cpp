#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int a,b,c,delta;
    int x1,x2,x3;

    cout<<"Podaj wartosc a:";
    cin>>a;
    cout<<"Podaj wartosc b:";
    cin>>b;
    cout<<"Podaj wartosc c: ";
    cin>>c;

    delta=(b*b)-(4*a*c);
    cout<<"Delta wynosi: "<<delta;
    cout<<endl;

    if(delta<0)
    {
        cout<<"Rownanie nie posiada rozwiazan";
    }
    else if(delta==0)
    {
        x3= (-b)/(2*a);
        cout<<"x3: "<<x3;
    }
    else if(delta>0)
    {
        x1=((-b)+sqrt(delta))/(2*a);
        x2=((-b)-sqrt(delta))/(2*a);
        cout<<"x1: "<<x1<<" x2: "<<x2;
    }
}
