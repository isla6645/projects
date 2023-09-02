favpoke = 'pikachu'
tries = 1
guesspoke = input("Guess my favorite pokemon: ")
while favpoke != guesspoke:
    tries += 1
    guesspoke = input("Incorrect, Guess my favorite pokemon: ")
    if tries == 3:
        break
        
if favpoke == guesspoke:
    print("Yes, " + favpoke + " is my favorite pokemon")

