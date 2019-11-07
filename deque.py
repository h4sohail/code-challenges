# Deque (double ended queue) implementation

class Deque():
    def __init__(self):
        self.deque = []
    
    def is_empty(self):
        if self.deque == []:
            return True
        else:
            return False

    def push_back(self, item):
        self.deque.insert(0, item)
    
    def push_front(self, item):
        self.deque.append(item)

    def pop_front(self):
        return self.deque.pop()
    
    def pop_back(self):
        return self.deque.pop(0)

    def peek_front(self):
        return self.deque[0]
    
    def peek_back(self):
        return self.deque[-1]

    def size(self):
        return len(self.deque)

deque = Deque()
deque.push_back(2)
deque.push_front(1)
print('peek front:', deque.peek_front())
print('pop front:', deque.pop_front())