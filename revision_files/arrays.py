# initializing arrays
A = [1,3,4,5,6]

'''Appending - Inserts element at the end, TC - O(1)'''
A.append(5)
print(A)

'''Popping - Removes elements at the end of the array, TC - O(1)'''
A.pop()
print(A)

'''Insert in the middle, TC - O(n)'''
A.insert(2,5)    #array.insert(idx,value)
print(A)

'''Checking length, TC - O(n)'''
print(len(A))