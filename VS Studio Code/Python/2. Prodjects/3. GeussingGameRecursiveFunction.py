def game(inputPassword, inputLives):
    password = inputPassword
    lives = inputLives
    lives -= 1
    input1 = input('guess the word: ')
    if input1 == password:
        print('Your right! the word was ' + password + ' congrats!')
        return
    elif lives <= 0:
        print('You are out of lives sorry!')
        return
    else:
        game(password, lives)
game('honey', 3)