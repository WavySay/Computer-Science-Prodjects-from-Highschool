#fib()

def fib(input):
    if input == 0:
        return 0
    if input <= 2:
        return 1
    return(fib(input - 1) + fib(input - 2))

for i in range (20):
    print(fib(i))