'''Hashmaps handle collisions using:
1. Seperate chaining - same key elements are stored as linked lists
2. Linear Probing - if the spot for the value is full then 
   add it just after its closest element
'''
''' note - immutable items are hashable, ex - Strings, Integers, Tuples etc'''

'''Hashset'''
a = set()
a.add(1)
a.add(3)
a.add(3)
print(a)

#lookup in set
if 5 in a:
    print('Yes')
else:
    print('No')

#remove an element
a.remove(1)
print(a)

'''Hashmaps or dictionaries'''

h  = {'Pk':2,'hk':3}
print(h)
h['gk']= 4
print(h)

for key in h.keys():
    print(key)

for value in h.values():
    print(value)

for key,value in h.items():
    print(f'key is {key} and value is {value}\n')

'''default dict used to get rid of key errors'''
from collections import defaultdict 
dict = defaultdict(list)
print(dict[2])