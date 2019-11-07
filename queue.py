# Queue (first in, first out) implementation

class Queue():
    def __init__(self):
        self.queue = []

    def is_empty(self):
        if self.queue == []:
            return True
        else: 
            return False
    
    def enqueue(self, item):
        self.queue.insert(0, item)
    
    def dequeue(self):
        return self.queue.pop()
    
    def peek(self):
        return self.queue[0]
    
    def size(self):
        return len(self.queue)

queue = Queue()
print('is empty?:' , queue.is_empty())
queue.enqueue(1)
queue.enqueue(2)
print('is empty?:' ,queue.is_empty())
print('peek:' ,queue.peek())
print('size:' ,queue.size())
print('pop:' ,queue.dequeue())
print('peek:' ,queue.peek())