class Solution:
    def findCheapestPrice(self, n: int, flights: List[List[int]], src: int, dst: int, K: int) -> int:
        if src == dst:
            return 0
        if not flights:
            return -1

        flights_graph = defaultdict(list)
        for s, d, p in flights:
            flights_graph[s].append((d,p))

        # Assume arrival is also a stop
        max_stop = K + 1
   
        cost_heap = [(0,src,0)]
        while cost_heap:
            cur_p, cur, stop = heapq.heappop(cost_heap)
            if cur == dst:
                return cur_p
            for nxt, nxt_p in flights_graph[cur]:
                if stop < max_stop:
                    heapq.heappush(cost_heap, (cur_p+nxt_p, nxt, stop+1))
        return -1
