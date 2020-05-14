class Trie {
public:
    /** Initialize your data structure here. */
    bool isLeaf;
    unordered_map<char, Trie *> map;
    Trie() {
        this->isLeaf=false;
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Trie * temp = this;
        int n=word.length();
        for(int i=0;i<n;i++)
        {
            if(temp->map.find(word[i])==temp->map.end())
                temp->map[word[i]]=new Trie();
            temp=temp->map[word[i]];
        }
        temp->isLeaf=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie * temp = this;
        int n= word.length();
        for(int i=0;i<n;i++)
        {
            if(temp->map.find(word[i])==temp->map.end())
                return false;
            temp=temp->map[word[i]];
        }
        return (temp!=nullptr && temp->isLeaf);
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie * temp = this;
        int n= prefix.length();
        for(int i=0;i<n;i++)
        {
            if(temp->map.find(prefix[i])==temp->map.end())
                return false;
            temp=temp->map[prefix[i]];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */