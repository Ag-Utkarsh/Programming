class Stack():
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)
    
    def pop(self):
        if not self.is_empty():
            return self.items.pop()
    
    def peek(self):
        if not self.is_empty():
            return self.items[len(self.items)-1]#self.items[-1]
    
    def is_empty(self):
        return len(self.items) == 0
    
stack = Stack()
stack.push("A")
stack.push("B")
stack.push("C")
print(stack.items)
print(stack.peek())
print(stack.is_empty())
print(stack.pop())
print(stack.items)
print(stack.pop())
print(stack.pop())
print(stack.is_empty())
print(stack.peek())