class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        n = numCourses
        if len(prerequisites) <=1 :
            return True
        graph = [[] for i in range(n)]
        visit = [0] * n
        for i,j in prerequisites:
            graph[j].append(i)
            visit[i] +=1
        res=[i for i in range(n) if visit[i]==0]
        for i in res:
            for j in graph[i]:
                visit[j] -=1
                if visit[j] == 0:
                    res.append(j)
        return len(res) == n
