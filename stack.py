# Stack implementation

class Stack():
    def __init__(self):
        self.stack = []

    def is_empty(self):
        if self.stack == []:
            return True
        else: 
            return False
    
    def push(self, item):
        self.stack.append(item)
    
    def pop(self):
        return self.stack.pop()
    
    def peek(self):
        return self.stack[-1]
    
    def size(self):
        return len(self.stack)

stack = Stack()
print('is empty?: ', stack.is_empty())
stack.push(1)
print('is empty?: ', stack.is_empty())
print('peek: ', stack.peek())
print('size: ', stack.size())
print('pop: ', stack.pop())
print('is empty?: ', stack.is_empty()) 