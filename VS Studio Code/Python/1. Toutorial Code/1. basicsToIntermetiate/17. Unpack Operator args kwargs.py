def func(x):
    def func2():
        print(x)

    return func2 #functions are objects and can be passed around (like variables) in python

#print(func(3)())

#print()

x = func(3)
x()

#----------------------------------
x = [1,23,236363,2727]
#print(x)
#print(*x) #this is the unpack operator which unpacks all elements in a list
#----------------------------------
def func(x,y):
    print(x,y)

pairs = [(1,2), (3,4)]

for pair in pairs: #single for lists and tuples
    func(*pair)

func(**{'x': 2, 'y': 5}) #double '*' for dictionaries

#----------------------------------
def func(*args, **kwargs):
    pass