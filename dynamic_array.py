# Dynamic array implementation
import ctypes

class DynamicArray():
    def __init__(self):
        self.size = 0
        self.capacity = 1
        self.array = self.make_array(self.capacity)
    
    def __len__(self):
        return self.size
    
    def __getitem__(self, k):
        if not 0 <= k < self.size:
            return IndexError
        return self.array[k]
    
    def append(self, ele):
        if self.size == self.capacity:
            self._resize(2*self.capacity)
        self.array[self.size] = ele
        self.size += 1
    def _resize(self, new_cap):
        temp_array = self.make_array(new_cap)

        for k in range(self.size):
            temp_array[k] = self.array[k]
        
        self.array = temp_array
        self.capacity = new_cap

    def make_array(self, new_cap):
        return (new_cap * ctypes.py_object)()

arr = DynamicArray()

arr.append(1)
print('size: ', arr.__len__())
print('arr[1] is ', arr[0])