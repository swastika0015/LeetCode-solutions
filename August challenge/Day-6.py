class WordDictionary:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.words_dic = collections.defaultdict(list)
        

    def addWord(self, word: str) -> None:
        """
        Adds a word into the data structure.
        """
        if word:
            self.words_dic[len(word)].append(word)
            
    def search(self, word: str) -> bool:
        if not word:
            return False
  
        if '.' not in word:
            return word in self.words_dic[len(word)]
        
        for w in self.words_dic[len(word)]:
            for i, ch in enumerate(word):
                if ch != w[i] and ch != '.':
                    break
            else:
                return True
            
        return False
                
        


# Your WordDictionary object will be instantiated and called as such:
# obj = WordDictionary()
# obj.addWord(word)
# param_2 = obj.search(word)
