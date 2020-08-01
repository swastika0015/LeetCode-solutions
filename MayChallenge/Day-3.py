class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        c=0
        a=[]
        for i in range(len(ransomNote)):
            for j in range(len(magazine)):
                if ransomNote[i]==magazine[j] and j not in a :
                    a.append(j)
                    c+=1
                    break
        if c==len(ransomNote) or ransomNote=='':
            return True
        else:
            return False


#You may assume that both strings contain only lowercase letters.
