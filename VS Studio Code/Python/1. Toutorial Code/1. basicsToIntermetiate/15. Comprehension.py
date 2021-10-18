#A comprihension is a one line initionalization of a list, a tuple, a dictionary, and many other things
x = [x for x in range(5)]
#print(x)

x = [x + 5 for x in range(5)]
#print(x)

x = [[0 for x in range (100)] for x in range(5)]
#print(x)

x = [i for i in range (100) if (i % 5) == 0]
#print(x)

x = {i:0 for i in range (100) if (i % 5) == 0} #it is a dictionary now
print(x)

x = {i for i in range (100) if (i % 5) == 0} #it is a set now
print(x)

x = tuple(i for i in range (100) if (i % 5) == 0) #it is tuple now
print(x)