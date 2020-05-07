# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isCousins(self, root: TreeNode, x: int, y: int) -> bool:
        if root==None:
            return False
        px=None
        py=None
        q=[]
        t=TreeNode(-1)
        q.append((root,t))
        
        while len(q) > 0:
            lev=len(q)
            
            while lev:
                e=q.pop(0)
                
                if e[0].val == x:
                    px = e[1]
                if e[0].val ==y:
                    py =e[1]
                if e[0].left:
                    q.append((e[0].left,e[0]))
                if e[0].right:
                    q.append((e[0].right,e[0]))
                    
                lev -= 1
                
                if px and py :
                    break
            if px and py :
                return px != py
            if (px and not py) or (py and not px):
                return False
        return True