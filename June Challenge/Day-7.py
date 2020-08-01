class Solution:
    def change(self, amount: int, coins: List[int]) -> int:
        res=[0] *(amount+1)
        res[0]=1
        for i in coins:
            for j in range(1,amount+1):
                if j >= i:            
                    res[j] += res[j-i]

        return res[amount]
        
