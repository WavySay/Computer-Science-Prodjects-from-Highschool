for i in range (10):
    print(i)
print()
for i in range (0,11,2): #start stop step
    print(i)    
for i in [3,2,4,6,3]: #list printed
    print(i)
print()

x = [3,2,4,6,3]
for i in range(len(x)):
    print(x[i])
print()
for i, element in enumerate(x): #enummerate makes indexs and values for all items in list
    print(i, element)