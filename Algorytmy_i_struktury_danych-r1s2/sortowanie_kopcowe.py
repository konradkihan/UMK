class HeapSorter():
    def __init__(self):
        self.array: list = []
        self.is_maxi: bool = True

    def get_array(self, arr_size: int):
        for i in range(arr_size):
            self.array.append(
                int(input())
            )

    def maxi_or_mini(self) -> bool:
        for i in range(len(self.array)-1):
            if self.array[i] < self.array[i+1]:
                self.is_maxi = False

    def make_maxi_mini(self, mini: bool = False):
        self.array.sort(reverse=mini)

    def heap_sort(self):
        m: int = 0
        for i in range(len(self.array)-1, 0, -1):
            self.array[1], self.array[i] = self.array[i], self.array[1]
            j: int = 1
            k: int = 2
            
            while(k < i):
                if (k+1 < i) and (self.array[k+1] > self.array[k]):
                    m = k + 1
                else:
                    m = k
                if self.array[m] <= self.array[j]: 
                    break
                self.array[j], self.array[m] = self.array[m], self.array[j]
                j = m
                k = 2*j

    def print_result(self):
        for i in range(len(self.array)):
            print(self.array[i], sep="\t", end="")
        print()
            

heap_sorter = HeapSorter()

heap_sorter.get_array(10)
heap_sorter.make_maxi_mini()
heap_sorter.heap_sort()
heap_sorter.print_result()

