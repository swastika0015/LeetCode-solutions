class MyHashSet:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.arr = [[] for i in range(1000)]
        
    
    def hash(self, key):
        return key % 1000

    def add(self, key: int) -> None:
        hashkey = self.hash(key)
        if not self.contains(key):
            self.arr[hashkey].append(key)
        

    def remove(self, key: int) -> None:
        hashkey = self.hash(key)
        if self.contains(key):
            self.arr[hashkey].remove(key)
        

    def contains(self, key: int) -> bool:
        """
        Returns true if this set contains the specified element
        """
        hashkey = self.hash(key)
        return key in self.arr[hashkey]
    
    
        


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)