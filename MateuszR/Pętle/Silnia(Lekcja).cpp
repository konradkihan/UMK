#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Podaj liczbe: ";
    cin>>n;

    int silnia=1;

    for(int i=1;i<=n;i++)
    {
        silnia=silnia*i;
    }

    cout<<"Silnia: "<<silnia<<endl;

}
