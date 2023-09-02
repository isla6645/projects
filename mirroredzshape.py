n = int(input("Enter a positive odd integer that is 5 or greater: "))
while n < 5 or n % 2 == 0:
    n = int(input("Enter a positive odd integer that is 5 or greater: "))
for r in range(n):
    for c in range(n):
        if r == 0 or r == n - 1 or r == c:
            print("X", end = "")
        else:
            print("O", end = "")
    print( )


