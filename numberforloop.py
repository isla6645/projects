numb = (int(input("Enter a number between 5 and 10 inclusive: ")))
while numb < 5 or numb > 10:
    numb = (int(input("Enter a number between 5 and 10 inclusive: ")))
if numb >= 5 or numb <= 10:
    for i in range(numb):
        print("*", end = "")
        