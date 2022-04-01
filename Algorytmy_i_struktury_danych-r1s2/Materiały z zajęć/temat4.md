# TEMAT 6

# Zagadnienia

## zadanie 1
Podaj definicje następujących pojęć:
1. graf prosty (nieskierowany!)
1. multigraf (nieskierowany!)
1. (multi)graf skierowany
1. drzewo
1. las

## zadanie 2
Algorytm przeszukiwania w głąb (DFS) - opis, zastosowania (co ten algortym wyznacza/oblicza?)

## zadanie 3
DFS - opis słowny (w języku naturalnym) algorytmu, idea algorytmu

## zadanie 4
Który z podanych pseudokodów jest opisem algorytmu DFS?

1. 
```cpp
// G - graf, v - początkowy wierzchołek grafu G
function DFS(G, v):
	stos = empty
	stos.push(v)
	visited[v] = True
	
	while stos not empty:
		u = stos.top()
		if visited[w] = False dla pewnego w in Adj[u]:
			stos.push(w)
			visited[w] = True
		else:
			stos.pop()
```
2. 
```cpp
// G = (V, E) - graf o zbiorze wierzchołków V oraz krawędzi E
// u - wierzchołek grafu G
function DFS-VISIT(G, u):    
    time = time + 1
    d[u] = time
    color[u] = GRAY
    for v in Adj[u]
        if color[v] = WHITE:
            pi[v] = u
            DFS-VISIT(G, v)
    color[u] = BLACK
    time = time + 1
    f[u] = time

// G = (V, E) - graf o zbiorze wierzchołków V oraz krawędzi E
function DFS(G):
    for u in V:
        color[u] = WHITE
        pi[u] = NIL
    time = 0
    DFS-VISIT(G, u)
```

## zadanie 5
Zmodyfikuj pseudokod algorytmu DFS z poprzedniego podpunktu tak, aby sprawdzał, czy podany graf jest spójny

## zadanie 6
Przedstaw podany graf zapisany w postaci listy sąsiedztwa w postaci graficznej (tzn. należy narysować podany graf), a następnie wykonaj na nim algorytm DFS, zaczynając od wierzchołka numer 9:
```cpp
Adj[1] = [2, 3]
Adj[2] = [1, 4, 5]
Adj[3] = [1, 5, 6]
Adj[4] = [2, 7]
Adj[5] = [2, 3, 7, 8]
Adj[6] = [3, 8]
Adj[7] = [4, 5, 9]
Adj[8] = [5, 6]
Adj[9] = [7]
```

## zadanie 7
Przeanalizuj algorytm DFS na podstawie pseudokodu z podpunktu 4, zwróć uwagę na kolejność odwiedzanych wierzchołków

## zadanie 8
Przeanalizuj rozszerzony algorytm DFS na podstawie pseudokodu z podpunktu 5, zwróć uwagę na kolejność odwiedzanych wierzchołków

# Odpowiedzi

## zadanie 1
1. graf prosty (nieskierowany!) - graf jest to para (V, E), gdzie V to zbiór wierzchołków, a E to zbiór krawędzi; każda krawędź e to dwuelementowy podzbiór zbioru wierzchołków, tzn. e = {v_1, v_2}, gdzie v_1, v_2 należą do zbioru V; graf prosty nie posiada pętli (krawędź zaczynająca się i kończąca w tym samym wierzchołku) ani wielokrotnych krawędzi (tzn. każda para wierzchołków może być połączona co najwyżej jedną krawędzią)

1. multigraf (nieskierowany!) - graf, w którym mogą występować pętle i wielokrotne krawędzie

1. (multi)graf skierowany - (multi)graf, w którym każda krawędź jest skierowana (graficznie oznaczana jest strzałką), tzn. krawędź jest parą e = (v_1, v_2), gdzie v_1, v_2 należą do zbioru V

1. drzewo - graf prosty spójny bez cykli

1. las - zbiór drzew

## zadanie 2
Algorytm DFS jest używany do przeszukiwania wierzchołków i krawędzi grafu, w ten sposób zbieramy informacje o strukturze tego grafu: można m.in. sprawdzić czy graf jest spójny, dwudzielny.
Algorytm można zapisać w sposób rekurencyjny, do implementacji używamy stosu.

## zadanie 3
Idea: przeglądaj wierzchołki, do których możesz dojść (maksymalnie daleko, w głąb), najpierw sąsiada, następnie sąsiada tego sąsiada, potem sąsiada tego sąsiada sąsiada itd. Jeśli nie możemy już iść dalej, to musimy się cofnąć i powtórzyć procedurę.

## zadanie 4
Oba podane pseudokody opisują algorytm DFS.

## zadanie 5
uzupełnienie pseudokodu nr 1:
```
jeśli visited[v] = False dla pewnego wierzchołka v:
    zwróć niespójny
 w przeciwnym wypadku:
    zwróć spójny
```
uzupełnienie pseudokodu nr 2:
```
jeśli color[v] = WHITE dla pewnego wierzchołka v:
    zwróć niespójny
 w przeciwnym wypadku:
    zwróć spójny
```

## zadanie 6
```
1 - 3 - 6
|   |   |
2 - 5 - 8
|   |
4 - 7 - 9
```
Kolejność odwiedzenia wierzchołków metodą DFS, zaczynając od wierzchołka 9 i zawsze wybierając wierzchołek o mniejszym numerze: 9, 7, 4, 2, 1, 3, 5, 8, 6 

