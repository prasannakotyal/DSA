'''Heaps and priority queues are a particular type of binary tree
   for a given index i the left child is at '2i+1' and right child is at '2i+2'
   min heap - parent is smaller than the children
   max heap - parent is smaller than the children  '''

import heapq

A = [2,5,3,4,6,-3,1]

heapq.heapify(A) #O(n) time to convert A into min heap
print(A)

heapq.heappush(A,9) #insert element into heap
print('\n')
print(A)

min = heapq.heappop(A) #extract min/max element from heap
print(A,min)

def heapsort(arr):  # TC - O(nlogn)
    heapq.heapify(arr)
    n = len(arr)
    sorted_list = [0]*n

    for i in range(n):
        min = heapq.heappop(arr)
        sorted_list[i] = min
    
    return sorted_list


print(heapsort(A))