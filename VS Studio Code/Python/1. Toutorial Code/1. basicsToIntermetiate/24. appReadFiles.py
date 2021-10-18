emplyee_file = open("employees.txt", "r")
print(emplyee_file.readable()) #true
try:
    print(emplyee_file.readlines()[0]) #slight bug here should read line
except Exception as e:
    print(e)

emplyee_file.close()