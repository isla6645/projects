n = int(input("Give me a positive integer < 10: "))
tries = 1

while not (0 < n < 10):
    tries += 1
    if tries == 4:
        break
    n = int(input("Give me a positive integer < 10: "))

if 0 < n < 10:
    sum = 0  
    for i in range(1, n + 1):
        sum += i ** 3
    if n == 1 : 
        print("1^3 is: ", sum)
    else:
        print("1^3 + ... + ", n, "^3 is:", sum)

        