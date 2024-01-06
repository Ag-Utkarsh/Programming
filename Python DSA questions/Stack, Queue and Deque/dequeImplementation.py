class Deque():
    
    def __init__(self):
        self.elements = []
        
    def isEmpty(self):
        return self.elements == []
    
    def addLeft(self,element):
        self.elements.insert(0,element)
    def addRight(self,element):
        self.elements.append(element)
    
    def removeLeft(self):
        return self.elements.pop(0)
    def removeRight(self):
        return self.elements.pop()
    
    def size(self):
        return len(self.elements)