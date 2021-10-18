def func1():
    print('Run')

def func2(x, y, z=None): #z is an optional parameter
    print('Run', x, y, z)
    return x * y, x / y

r1, r2 = func2(1,3,7)
print (r1, r2)
