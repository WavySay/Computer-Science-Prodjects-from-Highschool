x = [3,2,4,2,1,5,6,3,4,5,5,6,8,7]

mp = map(lambda i: i + 2, x) #map returns a map object, so it is better in a list
print(list(mp))

mp = filter(lambda i: i % 2 == 0, x) #filter filter through list making for easy code switching
print(list(mp))