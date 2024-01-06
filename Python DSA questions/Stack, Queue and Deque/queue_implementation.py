class Queue():
    def __init__(self):
        self.items = []
        self.front = 0
        self.rear = -1

    def is_empty(self):
        return self.items == []

    def enqueue(self, item):
        self.items.append(item)
        self.rear += 1

    def dequeue(self):
        if not self.is_empty():
            item = self.items.pop(self.front)
            self.rear -= 1
            return item

    def peek(self):
        if not self.is_empty():
            return self.items[self.front]

# class Queue():
    
#     def __init__(self):
#         self.elements = []
        
#     def isEmpty(self):
#         return self.elements == []
    
#     def enqueue(self,element):
#         self.elements.insert(0,element)
    
#     def dequeue(self):
#         return self.elements.pop()
    
#     def size(self):
#         return len(self.elements)

q = Queue()
q.enqueue(1)
q.enqueue(2)
q.enqueue(3)
q.enqueue(4)
print(q.items)
print(q.dequeue())
print(q.front)
print(q.items)
print(q.rear)
print(q.peek())
print(q.items)
print(q.dequeue())
print(q.items)