# TEMAT 6

# Zagadnienia

## zadanie 1
Algorytm przeszukiwania wszerz (BFS) - opis, zastosowania (co ten algorytm wyznacza/oblicza?)

## zadanie 2
BFS - opis słowny (w języku naturalnym) algorytmu, idea algorytmu

## zadanie 3
Który z podanych pseudokodów jest opisem algorytmu BFS?

1. 
```cpp
// G = (V, E) - graf o zbiorze wierzchołków V oraz krawędzi E
// v - wierzchołek grafu G
function BFS(G, v):
	kolejka = empty
	kolejka.enqueue(v)
	visited[v] = True
	
	while kolejka not empty:
		u = kolejka.first()
		if visited[w] = False dla pewnego w in Adj[u]:
			kolejka.enqueue(w)
			visited[w] = True
		else:
			kolejka.dequeue()
```

2. 
```cpp
// G = (V, E) - graf o zbiorze wierzchołków V oraz krawędzi E
// s - wierzchołek grafu G
function BFS(G, s):
    for u in V\{s}:
        color[u] = WHITE
        d[u] = infinity
        pi[u] = NIL
    color[s] = GRAY  
    d[s] = 0
    pi[s] = NIL
    kolejka = empty
    kolejka.enqueue(s)  
    while kolejka not empty:
        u = kolejka.dequeue()
        for v in Adj[u]:
            if color[v] = WHITE:
                color[v] = GRAY
                d[v] = d[u] + 1
                pi[v] = u				
                kolejka.enqueue(v)
        color[u] = BLACK
```

## zadanie 4
Zmodyfikuj pseudokod algorytmu BFS z poprzedniego podpunktu tak, aby sprawdzał, czy podany graf jest spójny

## zadanie 5
Przedstaw podany graf zapisany w postaci listy sasiedztwa w postaci graficznej (tzn. należy narysować podany graf), a następnie wykonaj na nim algorytm BFS, zaczynając od wierzchołka numer 9:
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

## zadanie 6
Przeanalizuj algorytm BFS na podstawie pseudokodu z podpunktu 3, zwróć uwagę na kolejność odwiedzanych wierzchołków

## zadanie 7
Przeanalizuj rozszerzony algorytm BFS na podstawie pseudokodu z podpunktu 4, zwróć uwagę na kolejność odwiedzanych wierzchołków


# Odpowiedzi

## zadanie 1
Algorytm BFS jest używany do przeszukiwania wierzchołków i krawędzi grafu, w ten sposób zbieramy informacje o strukturze tego grafu: można m.in. sprawdzić czy graf jest spójny, dwudzielny.
Do implementacji algorytmu używamy kolejki.

## zadanie 2
Idea: najpierw odwiedzamy wszystkich naszych najbliższych sąsiadów, później najbliższych sąsiadów pierwszego z naszych najbliższych sąsiadów, następnie najbliższych sąsiadów naszego drugiego najbliższego sąsiada itd.

## zadanie 3
Oba podane pseudokody opisują algorytm BFS.

## zadanie 4
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

## zadanie 5
```
1 - 3 - 6
|   |   |
2 - 5 - 8
|   |   
4 - 7 - 9
```
Kolejność odwiedzenia wierzchołków metodą BFS, zaczynając od wierzchołka 9 i zawsze najpierw wybierając wierzchołek o mniejszym numerze: 9, 7, 4, 5, 2, 3, 8, 1, 6

