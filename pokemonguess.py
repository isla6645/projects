pokemon = 'pikachu'
guesspoke = input("Guess my favorite pokemon: ")
while guesspoke != pokemon:
    guesspoke = input("Guess my favorite pokemon: ")
if guesspoke == pokemon:
    print("You guessed it!")