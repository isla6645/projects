input = "programming"
length = len(input)
for i in range(0, length):
    for j in range(i + 1, length):
        if input[i] == input[j]:
            print(input[i])
            exit()