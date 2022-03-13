# TEMAT 2

# Zagadnienia

1. Algorytm - definicja, przykłady, zastosowania, sposoby zapisu 
1. Pseudokod - definicja, przykłady, zastosowania
1. Złożoność obliczeniowa - definicja, notacja O(n)
1. Struktury danych: kolejki, stosy - podstawowe operacje, własności
1. Algorytm iteracyjny (funkcja iteracyjna) - definicja
1. Algorytm rekurencyjny (funkcja rekurencyjna) - definicja
1. Algorytm Euklidesa - co oblicza (wyznacza)? pseudokody
1. Przeanalizuj pseudokody z 7

# Odpowiedzi

## Zadanie 1. {#zad1}

Algorytm to dobrze zdefiniowany ciąg jednoznacznych instrukcji przeprowadzających  dane wejściowe w dane wyjściowe. Przykłady algorytmów to:

- algorytm Euklidesa
- algorytmy sortowania
- algorytmy wyszukiwania.
- Algorytmy służą do przedstawienia instrukcji prowadzących do rozwiązania zadanego problemu.

Najpopularniejsze sposoby zapisu algorytmu to:

- lista kroków
- pseudokod
- zapis w konkretnym języku programowania
- opis słowny
- schemat blokowy

## Zadanie 2.

Pseudokod to jeden ze sposobów zapisu algorytmu. Zapis przypomina implementację w języku programowania, jednak z usunięciem wszystkich instrukcji charakterystycznych dla konkretnego języka programowania (np. deklaracji zmiennych). Bloki kodu oznaczamy graficznie wcięciami (tabulacje, spacje). Przykłady pseudokodów znajdują się w rozwiązaniu zadania 7. Pseudokody stosuje się powszechnie do zapisu algorytmów.

## Zadanie 3.

Złożoność obliczeniowa (czasowa) to liczba operacji dominujących wykonanych w algorytmie. Operacja dominująca jest podana i jest to najczęściej: operacja arytmetyczna, logiczna, przypisanie, porównanie.

Notacja dużego O: f jest co najwyżej rzędu g, co oznaczamy jako f(n)\in O(g(n)) jeśli dla pewnego n_0 > 0 istnieje stała c>0 taka, że dla wszystkich n>n_0 zachodzi nierówność f(n) \leq c\cdot g(n).

## Zadanie 4.

**Kolejka** to struktura danych przechowująca dowolną liczbę elementów. Nowe elementy możemy dodawać wyłącznie na koniec kolejki, a zdejmować elementy możemy tylko z początku kolejki zgodnie z zasadą: First In, First Out - pierwszy na wejściu, pierwszy na wyjściu. Podstawowe operacje na kolejce to:
- enqueue - dodanie elementu na koniec kolejki 
- dequeue - pobranie elementu z początku kolejki 

**Stos** to struktura danych przechowująca dowolną liczbę elementów. Nowe elementy możemy dodawać wyłącznie na koniec stosu, zdejmować elementy możemy też tylko z końca stosu zgodnie z zasadą: Last In, First Out - ostatni na wejściu, pierwszy na wyjściu. Podstawowe operacje na stosie to:
- push - dodanie elementu na koniec stosu
- pop - pobranie elementu z końca stosu

## Zadanie 5.

Algorytm iteracyjny (funkcja iteracyjna) wykonuje w pętli tą samą operację (z góry określoną liczbę razy lub do spełnienia wskazanego warunku). Przykładowy algorytm iteracyjny podany jest w rozwiązaniu zadania 7, gdzie operacja odejmowania powtarzana jest do chwili, gdy wartości zmiennych a oraz b będą równe.

## Zadanie 6.

Algorytm rekurencyjny (funkcja rekurencyjna) wywołuje sam siebie. Ważnym elementem algorytmów rekurencyjnych jest warunek stopu, czyli informacja przy spełnieniu jakich warunków algorytm zwraca konkretną wartość zamiast wywołać siebie. Przykładowy algorytm rekurencyjny podany jest w rozwiązaniu zadania 7, gdzie warunkiem stopu jest osiągnięcie przez zmienną b wartości zero (w takiej sytuacji zwracana jest w algorytmie wartość zmiennej a).

## Zadanie 7.

**Algorytm Euklidesa** wyznacza największy wspólny dzielnik dwóch liczb naturalnych, tzn. największą liczbę naturalną, która dzieli bez reszty obie z podanych liczb.

Wersja iteracyjna algorytmu z odejmowaniem:

```py
function NWD(a, b)
    while a != b
       if a > b
          a = a - b 
       else
          b = b - a 
    return a
```
Wersja rekurencyjna algorytmu z operacją modulo:

```py
function NWD(a, b)
    if b = 0
       return a 
    else
       return NWD(b, a mod b)
```