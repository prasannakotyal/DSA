'''Bubble sort TC, key idea - compare adjacent ele and sort the highest value in arr to the end per iteration
  TC -O(N2) and SC - O(1), it is an inplace algorithm'''

A = [2,5,3,4,6,-3,1]

def bubble_sort(A):
    for i in range(len(A)-1):
        for j in range(0,len(A)-i-1):
            if A[j] > A[j + 1]:
                temp = A[j]
                A[j] = A[j + 1]
                A[j + 1] = temp
    return A


print('Bubble sort:\n')
print(bubble_sort(A))
print('\n')

'''Insertion sort, key idea - array at 0 is sorted, rest is unsorted. Take element from unsorted and place it in sorted
 TC - O(N2) and SC - O(1), it is an inplace algorithm'''

def insertion_sort(A):
    for i in range(1,len(A)):
        for j in range(i,0,-1):
            if A[j-1]>A[j]:
                A[j-1],A[j] = A[j],A[j-1]
            else:
                break
    return A
print('Insertion sort:\n')
print(insertion_sort(A))
print('\n')

'''Selction sort, key idea - find min of the arr in every iteration and place it in order
 TC - O(N2) and SC - O(1), it is an inplace algorithm'''

def selection_sort(A):
    for i in range(len(A)):
        min_idx = i
        for j in range(i+1,len(A)):
            if A[j]<A[min_idx]:
                min_idx=j
        A[j],A[min_idx] = A[min_idx],A[j] 
    return A

print('Selection sort:\n')
print(insertion_sort(A))
print('\n')

'''Merge sort, key idea - divide the array by half until it is separated into individual elements and start comparing until you
reach all the elements. aka divide and conquer strategy, TC - O(NlogN) and SC - O(N), it is an inplace algorithm'''

def merge_sort(A):
    n = len(A)

    if n==1:
        return A
    
    m = len(A)//2
    L = A[:m]
    R = A[m:]

    merge_sort(L)
    merge_sort(R)

    sorted_arr = [0]*n
    i=0
    l,r = 0,0

    while l<len(L) and r<len(R):
        if L[l]<R[r]:
            sorted_arr[i]=L[l]
            l+=1
        else:
            sorted_arr[i]=R[r]
            r+=r
        i+=1

    while l<len(L):
        sorted_arr[i]=L[l]
        l+=1
        i+=1
    
    while r<len(R):
        sorted_arr[i]=R[r]
        r+=1
        i+=1
    return sorted_arr

print('Merge sort:\n')
print(merge_sort(A))
print('\n')

'''Quick sort, key idea - select a pivot usually last or first element, 
divide the array into 3 halves left is less than or equal to pivot, pivot and right is more than pivot,
TC - O(NlogN) and SC - O(N), it is an inplace algorithm'''

def quick_sort(A):

    if len(A)<=1:
        return A
    
    pivot = A[-1]
    L = [x for x in A[:-1] if x<=pivot]
    R = [x for x in A[:-1] if x>pivot]

    quick_sort(L)
    quick_sort(R)

    return L+[pivot]+R

print('Quick sort:\n')
print(quick_sort(A))
print('\n')


'''Counting sort, key idea - count frequency of each number in array,
create new array and place each number in its correct position using the frequency count,
TC - O(N+K) and SC - O(N+K) where K is range of numbers, not good when range is too large'''
B = [5,5,4,6,1,3,2]
def counting_sort(B):
    maxx = max(B)
    counts = [0]*(maxx+1)

    for x in B:
        counts[x]+=1
    i=0
    for c in range(maxx+1):
        while counts[c]>0:
            B[i]=c
            i+=1
            counts[c]-=1
    return B

print('Count sort:\n')
print(counting_sort(B)) 
print('\n')

'''Note - the implementation is slightly different for array with negative numbers.'''