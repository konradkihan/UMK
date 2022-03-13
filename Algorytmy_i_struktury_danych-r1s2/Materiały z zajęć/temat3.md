# TEMAT 3

# Zagadnienia

## zadanie 1
Uzupełnij następujący tekst pochodzący z: http://smurf.mimuw.edu.pl/node/317

Załóżmy, że chcemy posortować n różnych elementów x1,…,xn i jedynym sposobem ustalenia porządku pomiędzy nimi jest porównywanie ich w parach. Wynikiem sortowania jest permutacja xi1<xi2<…<xin. Możliwych wyników sortowania jest oczywiście tyle, ile [1:...............] zbioru n-elementowego, czyli [2:...................]. Każdy algorytm sortowania przez porównania można zapisać za pomocą [3:.........................].

Drzewo decyzyjne jest drzewem [4:...............], w którym wszystkie węzły różne od liści mają po dwóch synów. W tych węzłach zapisujemy pary indeksów i:j, 1≤i<j≤n. Każda taka para i:j oznacza, że interesuje nas wynik porównania xi z xj.

Niech S(n) oznacza minimalną liczbę porównań zawsze wystarczającą do posortowania n elementów. Liczbę S(n)można z dołu oszacować za pomocą drzewa decyzyjnego.

Pesymistyczna złożoność algorytmu opisanego za pomocą drzewa decyzyjnego, to oczywiście [5:...............] tego drzewa, czyli długość najdłuższej ścieżki od korzenia do liścia w tym drzewie mierzona liczbą krawędzi. Drzewo decyzyjne sortujące n elementów jest drzewem binarnym o [6:.............] liściach. Najmniejsza wysokość drzewa binarnego o k  liściach wynosi ⌈logk⌉.   Wynika stąd, że każdy algorytm sortujący przez porównania wykonuje w pesymistycznym przypadku C(n) = ⌈logn!⌉         porównań. Można pokazać, że ⌈logn!⌉≥nlogn−1.45n

Zatem zachodziS(n) ≥ C(n) = ⌈logn!⌉ ≥ nlogn−1.45n

## zadanie 2. 
Uzupełnij następujący pseudokod algorytmu sortowania przez scalanie
```
// A - tablica/lista do posortowania wielkości n
function MergeSort(A, n):
	if n > 1:
		m = ?......
		A1 = A[0, .., m - 1]
		A2 = A[m, .., n - 1]
		MergeSort(?......)
		MergeSort(?......)
		Scal(A1, A2, A, m, n - m + 1)

// L1, L2 - scalane w L3 tablice/listy wielkości odpowiednio n1 i n2	
function Scal(L1, L2, L3, n1, n2):
	i1 = 0; i2 = 0; i3 = 0
	while i1 < n1 and i2 < n2:
		if L1[i1] < L2[i2]:
			L3[i3] = L1[i1]
			i1 = i1 + 1
		else:
			?.............
			?.............
		i3 = i3 + 1
	while i1 < n1:
		L3[i3] = L1[i1]
		i1 = i1 + 1
		i3 = i3 + 1
	while i2 < n2:
		?..............
		?..............
		?..............
```
## zadanie 3. 
Napisz pseudokod algorytmu sortowania przez zliczanie

## zadanie 4. 
Dla tablicy A=[1, 3, 0, 1, 0, 1, 1, 3] wykonaj kolejne kroki algorytmu sortowania przez zliczanie. Wypisz zawartość tablicy pomocniczej oraz wynikowej (posortowanej).

## zadanie 5. 
Przeanalizuj algorytm sortowania przez zliczanie z punktu 3, zwróć uwagę na tablicę pomocniczą oraz wynikową (posortowaną).

## zadanie 6.
 Przeanalizuj algorytm sortowania przez scalanie z punktu 2 (na podstawie pseudokodu).


# Odpowiedzi

## Zadanie 1.

wszystkich permutacji
n!
drzewa decyzyjnego
binarnym
wysokość
n!

## Zadanie 2.

1. n / 2
1. A1, m
1. A2, n - m
1. L3[i3] = L2[i2]
1. i2 = i2 + 1
1. L3[i3] = L2[i2]
1. i2 = i2 + 1
1. i3 = i3 + 1

## Zadanie 3.

```
funkcja zlicz(tablica, ogr_min, ogr_max):
    // można założyć, że ogr_min = 0
    inicjujemy tablicę liczba_wystapien rozmiaru ogr_max - ogr_min + 1
    wypełniamy tablicę liczba_wystapien zerami
    inicjujemy tablicę wynikowa roziaru takiego jak tablica
    
    dla każdej wartości element w tablicy tablica:
        liczba_wystapien[element] = liczba_wystapien[element] + 1
    
    dla indeksu indeks w przedziale [ogr_min, ogr_max]:
        dla i w przedziale [0, liczba_wystapien[indeks]]:
            do tablicy wynikowa wpisz wartość indeks
    zwróć wynikowa
```
## Zadanie 4.

- Dla danych tablica = [1, 3, 0, 1, 0, 1, 1, 3], ogr_min = 0, ogr_max = 3 mamy:

- liczba_wystapien = [0, 0, 0, 0]
- wynikowa = [0, 0, 0, 0, 0, 0, 0, 0]
- liczba_wystapien = [2, 4, 0, 2]
- wynikowa = [0, 0, 1, 1, 1, 1, 3, 3]