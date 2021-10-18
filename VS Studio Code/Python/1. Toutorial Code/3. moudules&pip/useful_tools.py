import random
feet_in_a_mile = 5280
meters_per_kilometer = 1000
chessplayers = ['Magnus Carlsen', 'Hikaru Nakamura', 'Ian Nepomniachtchi', 'Maxime Vashier-Lagrave', 'Levon Aronian']

def get_file_ext(filename):
    return filename[filename.index('.') + 1:]

def roll_dice(num):
    return random.randint(1, num)

