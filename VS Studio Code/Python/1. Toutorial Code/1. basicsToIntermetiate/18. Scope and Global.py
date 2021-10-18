x = 'Osay'

def func(name):
    global x #variable changes stay within their function, global changes that
    x = name

print(x)
func('changed')
print(x)