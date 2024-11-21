'''Stack - LIFO'''
'''Consider rightmost element as top, 
stacks appends on right and pops from right'''

stack = []
stack.append(3)
stack.append(4)
stack.append(6)
stack.append(1)

stack[-1] #this is peek, looking at the top element

if stack:
    print(True) #Checking if stack is empty or not

stack.pop()
stack.pop()
stack.pop()
print(stack)


'''Queue - FIFO'''
'''Consider first element as first, 
queues appends on right and pops from left'''

from collections import deque

queue = deque() #called deque because it's a double ended queue

queue.append(1)
queue.append(2)
queue.append(3)
queue.append(4)

print(queue)

queue.popleft()
print(queue)