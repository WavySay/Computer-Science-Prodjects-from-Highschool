x = [4, True, 'hi']
y = 'hi'
print(x)
print(len(x), len(y)) #len works on strings as well

x.append('hello') #adds value to end of list
print(x)

x.extend([3,3,3,3,3,3,5,5]) #appends whole list to array

print(x.pop) #removes last part of list

y = x[:] #makes a new list that is indivisualy mutable

x = (0,0,0,3) #A tuple is an imutable list