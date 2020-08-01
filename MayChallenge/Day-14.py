class Trie(object):

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.root= {}   #Using dictionary
        

    def insert(self, word):
        """
        Inserts a word into the trie.
        :type word: str
        :rtype: None
        """
        node = self.root
        for i in word:
            if i not in node:
                node[i]={}
            node = node[i]
        node['$']= '$'
        

    def search(self, word):
        """
        Returns if the word is in the trie.
        :type word: str
        :rtype: bool
        """
        node= self.root
        for i in word:
            if i not in node:
                return False
            node = node[i]
            
        return True if '$' in node else False
        

    def startsWith(self, prefix):
        """
        Returns if there is any word in the trie that starts with the given prefix.
        :type prefix: str
        :rtype: bool
        """
        node = self.root
        for i in prefix:
            if i not in node:
                return False
            node = node[i]
        return True
        


# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)
