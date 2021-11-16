#include<iostream>
using namespace std;

int main()
{
    int m;
    int n;
    cout<<"Podaj m:" ;
    cin>>m;
    cout<<"Podaj n:" ;
    cin>>n;
    
    cout<<endl;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
          cout<<"* ";
        }
        cout<<endl;
    }
}
