from linked_list import head
'''Recursive functions generate a function call stack'''

'''TC - O(2^n) where n is the number of elements in the function call ex - f(n)'''
'''SC - O(n) where n is the number of elements which is also the height of the tree'''

#fibonacci using recursion

def fib(n):
    if n==0:
        return 0
    elif n==1:
        return 1
    else: 
        return fib(n-1)+fib(n-2)
    

#printing elements in reverse for a linked list using recursion
def print_rev_ll(head):
    if head==None:
        return
    print_rev_ll(head.next)
    print(head.data)

print("Printing linked list in reverse:")
print_rev_ll(head)