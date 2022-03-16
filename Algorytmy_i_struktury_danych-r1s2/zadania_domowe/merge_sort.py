def merge_sort(a: list):
    if len(a) > 1:
        pivot: int = len(a) // 2
        a1: list = a[:pivot]
        a2: list = a[pivot:]
        # dzielenie rekursywne tablicy na dwie
        merge_sort(a1)
        merge_sort(a2)

        i1: int = 0
        i2: int = 0
        i3: int = 0

        # scalanie tablic - w pythonie aby zachować prostotę rozwiązania lepiej zrobić wszystko w jednej funkcji
        while i1 < len(a1) and i2 < len(a2):
            if a1[i1] <= a2[i2]:
                a[i3] = a1[i1]
                i1 += 1
            else:
                a[i3] = a2[i2]
                i2 += 1
            i3 += 1

        while i1 < len(a1):
            a[i3] = a1[i1]
            i1 += 1
            i3 += 1

        while i2 < len(a2):
            a[i3] = a2[i2]
            i2 += 1
            i3 += 1


# wykonanie programu wraz z pobraniem input i wypisaniem output
size = int(input())
A = []
for i in range(size):
    x = int(input())
    A.append(x)
merge_sort(A)
for i in range(len(A)):
    print(A[i])
