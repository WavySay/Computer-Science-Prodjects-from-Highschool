#calcutator app
input1 = float(input('Number: '))
operator = input('Operator: ')
input2 = float(input('Second Number: '))

if (operator == '+'):
    print(input1 + input2)
elif (operator == '-'):
    print(input1 - input2)
elif (operator == '*'):
    print(input1 * input2)
elif (operator == '/'):
    print(input1 / input2)
elif (operator == '%'):
    print(input1 % input2)
else:
    print('*INVALID INPUT*')