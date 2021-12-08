#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

void choinka(int n, int m){
    // n - wysokość
    // m - wielkość stópek
	for(int i=0;i<n;i++)
	{
		for(int k=n;k>i;k--)
		{
			cout<<" ";
		}
		for(int j=0;j<i;j++)
		{
			cout<<" *";
		}
		cout<<endl;
	}
}
int bintodec(int n){
    int dec = 0;
    int i = 0;
    while(n!=0){
        dec += (n%10) * pow(2,i);
        n = n/10;
        i++;
    }
    return dec;
}

int dectok(int n, int base){
    int postack = 0;
    int i = 0;
    while(n!=0){
        postack += (n%base)*pow(10,i);
        n = n/base;
        i++;
    }
    return postack;
}


int k_to_dec(int n, int base){
    int postac_dec = 0;
    int i = 0;
    while(n!=0){
        postac_dec+=(n%10)*pow(base, i);
        n=n/10;
        i++;
    }
    return postac_dec;
}

void generowanie(int tab[],int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
    {
        tab[i]=10+rand()%99;
    }
}

void wypisywanie(int tab[],int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
    {
        cout<<tab[i]<<" ";
    }
}

int dl_liczby(int n){
    int suma = 0;
    while(n!=0){
        n=n/10;
        suma++;
    }
    return suma;
}


int odwr(int n){
    int odwr;
    while(n>0){
        int reszta = n%10;
        odwr = odwr * 10+reszta;
        n=n/10;
    }
    return odwr;
}


int bins(int tab[], int start, int end, int tofind){
    int middle = (start+end)/2;
    if(start > end) return -1;
    if(tab[middle] == tofind) return middle;
    else if (tab[middle] > tofind) return bins(tab, start, middle-1, tofind);
    else return bins(tab, middle+1, end, tofind);   
}



int main()
{
    // const int N=2;
    // srand(time(NULL));
    // int a[N];
    // generowanie(a,N);
    // wypisywanie(a,N);
    choinka(8, 7);
}