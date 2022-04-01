# TEMAT 6

# Zagadnienia

## zadanie 1
Kopiec typu max - definicja i przykład

## zadanie 2
Przeanalizuj tworzenie kopca typu max przy pomocy tablicy, gdzie numery sąsiadów węzła o numerze k w kopcu (numerujemy od zera) są następujące:
1. synowie o numerach 2*k+1 i 2*k+2
2. ojciec o numerze: powała(k/2)-1 

## zadanie 3
Przeanalizuj algorytm przywracania własności kopca

## zadanie 4
Przeanalizuj algorytm tworzenia kopca z listy A

## zadanie 5
Przeanalizuj algorytm sortowania przez kopcowanie

# Odpowiedzi

## zadanie 1
Kopiec typu max to zupełne drzewo binarne spełniające warunek kopca typu max, gdzie:

* drzewo binarne - drzewo z wyróżnionym wierzchołkiem (nazywanym korzeniem; w graficznej reprezentacji jest to wierzchołek rysowany na samej górze), które posiada hierarchię rodzic (inna nazwa: ojciec) - potomek (bezpośredni potomek to syn); nazwa "binarne" wymaga aby każdy węzeł miał co najwyżej 2 synów (nazywamy ich: lewy syn i prawy syn). Korzeń nie ma rodzica, a wierzchołki, które nie mają potomków to liście.

* drzewo binarne jest zupełne, jeśli (za wyjątkiem być może ostatniego/najniższego poziomu) wszystkie poziomy są zapełnione węzłami, a ostatni poziom zapełniony jest (bez przerw) od lewej strony do prawej

* warunek kopca typu max: wartości przechowywane w węźle rodzica są większe równe od wartości w węzłach jego potomków