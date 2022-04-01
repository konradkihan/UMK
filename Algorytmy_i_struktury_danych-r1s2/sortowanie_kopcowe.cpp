// Sortowanie przez kopcowanie
//--------------------------------------------------------
// (C)2012 mgr Jerzy Wałaszek
// I Liceum Ogólnokształcące
// im. K. Brodzińskiego
// w Tarnowie
//--------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
  const int N = 20;  // liczebność zbioru
  int d[N + 1],i,j,k,m,x;

  srand((unsigned)time(NULL));

  cout << " Sortowanie przez kopcowanie \n"
          "-----------------------------\n"
          "   (C)2005  Jerzy Walaszek\n\n"
          "Przed sortowaniem:\n\n";

// Wypełniamy tablicę liczbami pseudolosowymi i wyświetlamy je

  for(i = 1; i <= N; i++)
  {
    d[i] = rand() % 100; cout << setw(4) << d[i];
  }
  cout << endl;

// Budujemy kopiec

  for(i = 2; i <= N; i++)
  {
    j = i; k = j / 2;
    x = d[i];
    while((k > 0) && (d[k] < x))
    {
      d[j] = d[k];
      j = k; k = j / 2;
    }
    d[j] = x;
  }

// Rozbieramy kopiec

  for(i = N; i > 1; i--)
  {
    swap(d[1], d[i]);
    j = 1; k = 2;
    while(k < i)
    {
      if((k + 1 < i) && (d[k + 1] > d[k]))
        m = k + 1;
      else
        m = k;
      if(d[m] <= d[j]) break;
      swap(d[j], d[m]);
      j = m; k = j + j;
    }
  }

// Wyświetlamy wynik sortowania

  cout << "Po sortowaniu:\n\n";
  for(i = 1; i <= N; i++) cout << setw(4) << d[i];
  cout << endl;
  return 0;
}
 