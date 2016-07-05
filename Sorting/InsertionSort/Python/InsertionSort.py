def insertionsort(inp):
    for index1 in range(len(inp) - 1):
        index2 = index1
        index1 = index1 + 1
        temp = inp[index1]
        
        while index2 >= 0 and temp < inp[index2]:
            inp[index2 + 1] = inp[index2]
            index2 = index2 - 1
        inp[index2 + 1] = temp



inputLine = input("Enter all the numbers in one line and then press ENTER: ").split(" ")
insertionsort(inputLine)
print(inputLine)
