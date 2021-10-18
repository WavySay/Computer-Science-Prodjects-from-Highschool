x = {'key': 4} #key value could be a list or single pair
print(x['key'])

x['key2'] = 5 #dicts are in constant time unless there is a hash collision 
x[2] = 8
print(x)

print('key' in x)

print(list(x.values()))

print(list(x.keys()))

del x['key'] #delete function 
print(x)

for key, value in x.items():
    print(key, value)

for key in x:
    print(key, x[key])