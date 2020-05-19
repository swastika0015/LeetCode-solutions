class StockSpanner:

    def __init__(self):
        self.stack = []
        self.length = 0
        self.index = 0
        

    def next(self, price: int) -> int:
        while (self.length and  price >= self.stack[-1][0]):
            #print(self.stack[-1][0],self.length,price, self.stack)
            self.stack.pop()
            self.length -= 1
            #print(self.stack)
        
        if self.length > 0:
            result = self.index - self.stack[-1][1]
           #print(result)
        else:
            result = self.index + 1
        self.stack.append([price, self.index])
        self.length += 1
        self.index +=1
        
        return result
