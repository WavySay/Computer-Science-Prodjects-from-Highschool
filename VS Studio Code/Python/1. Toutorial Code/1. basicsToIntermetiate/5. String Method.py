hello = 'hello'
print(type(hello)) #instance of class string

hello = 'heLLO'.upper() #method called only on strings upper
hello = 'HELLo'.lower() #method called only on strings lower

print(hello.capitalize()) #upper first letter and lower other letters

print(hello.count('ll')) #counts instances of 'll' in given string
