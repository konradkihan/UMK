#include<iostream>
#include<cmath>

using namespace std;

int bin_to_dec(int n){
	int postac_10=0;
	int i=0;
	
	while(n!=0){
		postac_10 += (n%10)*pow(2,i);
		i++;
		n=n/10;

	}
	return postac_10;
}


void dec_to_hex(int n)
/* konwersja systemu dzieisątkowego do szesnastkowego z wykorzystaniem tablicy char */
{
    string s; // string przechowujący wynik konwersji na szesnastkowy
    char c[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'}; // char tablica z danymi do konwersji
    
    while(n)
    {
        // operacja konwersji - na 16-stkowy więc operacja MOD16 i dodanie do stringa s wyniku operacji
        s+=(char)c[n%16];
        n = n / 16 ;
    }
    
    // wypisanie "liczby"
    for(int i=s.length()-1;i>=0;i--)
    {
        cout<<s[i];
    }
}


int dec_to_k(int n, int base){
    /* n - liczba w systemie dziesiętnym
    base - podstawa systemu do konwersji */
	long double postac_k=0;
	int i=0;
    /* tak długo jak liczba jest większa od 0 to będzie wykonywana operacja MOD baza systemu
    i dodanie wyniku działania na odpowiedni rząd wielkości określany zmienną i*/
	while(n!=0){
		postac_k += (n%base)*pow(10,i);
		n=n/base;
		i++;
	}
	
	//Liczba postaci base
    return postac_k;
}


int k_to_dec(int n, int base){
    /* n - liczba w systemie base
    base - podstawa systemu do konwersji */				
	int postac_10=0;
	int i=0;
	while(n!=0){
    /* wykonanie operacji modulo oraz dodanie wyniku na odpowiedni rząd liczby w systemie dec */
		postac_10+=(n%10)*pow(base, i);
		n=n/10;
		i++;
	}		
    //Postac [10]:
    return postac_10;
}


int main(){
    dec_to_hex(205);
}