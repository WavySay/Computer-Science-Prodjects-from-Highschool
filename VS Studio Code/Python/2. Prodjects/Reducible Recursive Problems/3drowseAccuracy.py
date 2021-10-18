'''
Osay: This code came about from a question I had about the chance of a drowse hiting hypnosis.
When given two tries, hypnosis has an 82%-84% chance of hitting.

more sources regarding this phenomena can be found here:
https://math.stackexchange.com/questions/1892249
'''

import random

def get_two_random(times):
    hit = 0
    random_nums = [0, 0]

    for i in range(times):
        for j in range(len(random_nums)):
            random_nums[j] = (random.randint(1, 10))
        for k in range(len(random_nums)):
            if random_nums[k] <= 6:
                hit += 1
                break
        #print(random_nums)
    print(hit / times)
get_two_random(10000000)