'''Singly linked list'''

class node:
    def __init__(self,data,next=None):
        self.data = data
        self.next = next
    def __repr__(self):
        return str(self.data)


head = node(22)
b = node(23)
c = node(24)
d = node(25)
e = node(26)

head.next = b
b.next = c
c.next = d
d.next = e


'''Traversing a linked list'''
def traverse_linked_list(head):
    curr = head
    while(curr!=None):
        print(curr.data)
        curr = curr.next

'''Displaying the linekd list'''
def display(head):
    curr = head
    elements = []
    while curr:
        elements.append(str(curr.data))
        curr = curr.next
    print('->'.join(elements))

# display(head)

'''Searching for a value in linked list'''
def search(head,val):
    curr = head
    while curr:
        if val==curr.data:
            return 'element found'
        curr = curr.next
    return 'element not found'

search(head,24)

'''Doubly linked list'''
# same as singly with a prev pointer

# Only run the following code if this script is run directly (not imported)
if __name__ == "__main__":
    print("Traversing the linked list:")
    traverse_linked_list(head)
    
    print("\nDisplaying the linked list:")
    display(head)
    
    print("\nSearching for value 24:")
    search(head, 24)