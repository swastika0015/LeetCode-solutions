class Solution:
    def reverseString(self, s: List[str]) -> None:
        first = 0
        last = len(s)-1
        for i in range(len(s)):
            if first < last :
                s[first],s[last] = s[last],s[first]
                last -= 1
                first += 1
