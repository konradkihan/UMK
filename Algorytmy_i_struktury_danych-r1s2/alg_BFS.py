from collections import defaultdict
from random import randint

def addElement(graph: "defaultdict", u: int, v: "element") -> "extended graph":
    graph[u].append(v)


def BFS(graph: defaultdict, v: int):
    visited = [False] * (max(graph)+1)

    Q = []

    Q.append(v)
    visited[v] = True

    while Q:
        v = Q.pop(0)
        print(v, end=" > ") # marking visited elelments 
        for i in graph[v]:
            if not visited[i]:
                Q.append(i)
                visited[i] = True


if __name__ == "__main__":
    graph = defaultdict(list) # generating graph

    # gSize: int = 10
    # for i in range(gSize):
    #     addElement(graph, randint(0, 5), randint(0, 5))

    addElement(graph, 0, 1)
    addElement(graph, 0, 2)
    addElement(graph, 1, 2)
    addElement(graph, 2, 0)
    addElement(graph, 2, 3)
    addElement(graph, 3, 3)

    BFS(graph, 2)