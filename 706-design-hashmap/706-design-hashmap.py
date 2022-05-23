class MyHashMap:

    def __init__(self):
        self.capacity = 10**6
        self.values = [-1]*self.capacity
        

    def put(self, key: int, value: int) -> None:
        
        idx = key%self.capacity
        self.values[idx] = value
            

    def get(self, key: int) -> int:
        idx = key%self.capacity
        return self.values[idx]
        

    def remove(self, key: int) -> None:
        idx = key%self.capacity
        self.values[idx] = -1
        


# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key,value)
# param_2 = obj.get(key)
# obj.remove(key)