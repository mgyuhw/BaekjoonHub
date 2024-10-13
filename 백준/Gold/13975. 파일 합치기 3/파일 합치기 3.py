import sys
import heapq

if __name__ == "__main__":
	count = int(sys.stdin.readline())
	heap_queue = []
	
	for i in range(count):
		result = 0
		chapter = int(sys.stdin.readline())
		heap_queue = list(map(int, sys.stdin.readline().split()))
		heapq.heapify(heap_queue)
		
		while len(heap_queue) > 1:
			temp = heapq.heappop(heap_queue) + heapq.heappop(heap_queue)
			result += temp
			heapq.heappush(heap_queue, temp)
			
		print(result)
		