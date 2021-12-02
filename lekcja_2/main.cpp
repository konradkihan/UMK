#include <iostream>
#include <cmath>
#include <string>

using namespace std;

unsigned long long cw21a(int n){
    // Obliczanie silni
    if (n==0)
        return 1;
    return n * cw21a(n-1);

}


double cw21b(int n){
    // Użytkownik podaje liczbę naturalną n, a następnie n liczb rzeczywistych a1, a2, . . . , an.
    // Program oblicza średnią arytmetyczną tych liczb rzeczywistych.
    double suma = 0;
    double x;
    for(int i=0; i<=n; i++){
        cin >> x;
        suma += x;
    }
    return suma/n;
}


double cw21b2(){
    // Użytkownik podaje liczbę naturalną n, a następnie n liczb rzeczywistych a1, a2, . . . , an.
    // Wariacja funckji cw21b() która nie wymaga znajomości
    // ilości wprowadzanych danych
    int ctr = 0;
    double suma, liczba;
    char c;
    do{
        suma = 0.0;
        ctr = 0;
        cin >> liczba;
        if(liczba < 1)
            return suma / ctr;
        suma = suma + liczba;
        ctr++;
    }while(true);
}


void rownanie_kw(double a, double b, double c){
    // Program otrzymije 3 liczby i oblicza wartości liczb zerowych.
    int delta = sqrt(pow(b,2)-(4*a*c));
    if (delta >0){
        double x1 = (-b + delta)/2*a, x2 = (-b - delta)/2*a;
        cout<<"x1="  << x1 << " x2=" << x2;
    }
    else if (delta == 0){
        cout << " = " << (-b)/2*a;
    }
    else {
        cout << "brak miejsc zerowych";
    }
}


void cw21c(int n, int m){
    // Użytkownik podaje liczby naturalne m, n.
    // Program rysuje za pomocą symbolu * prostokąt o bokach długości m, n.
    for(int i =0 ; i<=n; i++){
        for(int j= 0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
}


void cw21d(int n){
    // Użytkownik podaje liczbę naturalną n.
    // Program rysuje za pomocą symbolu * trójkąt prostokątny o przyprostokątnej długości n. 
    for(int i=0 ; i<=n; i++){
        cout << string(i, '*') << endl;
    }
}


void cw21e(int n){
    // Użytkownik podaje liczbę naturalną n.
    // Program rysuje za pomocą symbolu * trójkąt prostokątny o przyprostokątnej długości n.
    for(int i=0; i<=n; i++){
        cout << string(n-i, ' ') << string(i, '*') << endl;
    }
}


void cw21f(int n){
    // Użytkownik podaje liczbę naturalną n. 
    // Program wyświetla tabliczkę mnożenia liczb od1 do n
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout << i << "\t*\t" << j << "\t=\t" << i*j << endl;
        }
        cout << endl << endl;
    }
}


double cw21g(int n){
    // Użytkownik podaje liczbę naturalną n. 
    // Program oblicza wartość sumy
    double suma = 0;
    for(int i=1; i<=n; i++){
        suma = suma + pow((i+3), 3) - 8; 
    }
    return suma/n;
}


bool cw21h(int n){
    // Sprawdzanie czy liczba naturalna jest liczbą pierwszą.
    for(int i = 2; i<=sqrt(n); i++)
        if(n % i == 0)
            return false;   // nie jest liczbą pierwszą
    
    return true;    // jest liczbą pierwszą
}


bool cw21i(int n){
    // Sprawdzenie czy liczba naturalna jest liczbą doskonałą.
    int suma = 0;
    for(int i = 1; i<=n/2-1; i++){
        if(n%i == 0)
            suma = suma + i;
    }
    return suma == n;
}


int cw21j(int n){
    // Obliczanie sumy cyfr podanej liczby.
    int suma = 0;
    while(n != 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}


int cw21k(int n){
    int odwr_n = 0;
    while(n > 0){
        int r = n % 10;
        odwr_n = odwr_n * 10 + r;
        n = n/10;
    }
    return odwr_n;
}


int cw21l(int n){
    int r;
	int postac_10=0;
	int i=0;
	
	while(n!=0)
	{
		r=n%10;
		postac_10+=r*pow(2,i);
		i++;
		n=n/10;
	}
	return postac_10;
}


int cw21m(int n){
    // Zmiana liczby z postaci dziesiętnej na dwójkową
    const int LEN = 10;
    int a[LEN];
    for(int i=0; n>0; i++){    
        a[i]=n%2;    
        n= n/2;  
    }    
    cout<<"Bin:";    
    for(int i=LEN ;i>=0 ;i--){    
        cout<<a[i];    
    }    
}


int cw21n(int n, int base){
    // Zmiana liczby z systemu o podstawie n na system o podstawie m
    /* n - liczba w systemie dziesiętnym
    base - podstawa systemu do konwersji */
	long double k_int=0;
	int i=0;
    /* tak długo jak liczba jest większa od 0 to będzie wykonywana operacja MOD baza systemu
    i dodanie wyniku działania na odpowiedni rząd wielkości określany zmienną i*/
	while(n!=0){
		k_int+=(n%base)*pow(10,i);
		n=n/base;
		i++;
		}
	
	//Liczba postaci base
    return k_int;
}

int main(){}
