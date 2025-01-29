'''Binary search, TC - O(logn) and SC - O(1)'''

'''Condition - the arrray should be sorted'''

# Traditional method

a = [-5,3,2,1,4,7,9]

def binary_search(key,a):
    left = 0
    right = len(a)-1

    while(left<=right):
        mid = left+(right-left)//2

        if(key==a[mid]):
            return True
        elif(key>a[mid]):
            left = mid+1
        else:
            right = mid-1
    return False

print(binary_search(-5,a))