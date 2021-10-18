password = 'honey'
lives = 3
input1 = 'NULL'
while password != input1:
    seceret = password
    input1 = input('guess the word: ')
    lives -= 1
    if lives <= 0:
        print('Out of geuses')
        break
    elif password == input1:
        print('Your right! the word was ' + password + ' congrats!')
'''
this is how to write 
multi line comments in
python weird huh?
'''
#stick with pound though