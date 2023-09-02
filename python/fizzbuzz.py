userin = (int(input("Enter a integer: ")))
if userin % 5 == 0 and userin % 3 == 0:
    print("fizz buzz")
elif userin % 3 == 0:
    print("fizz")
elif userin % 5 == 0:
    print("buzz")
else:
    print(userin)