def swap(index1, index2):
    temp = inputLine[index2]
    inputLine[index2] = inputLine[index1]
    inputLine[index1] = temp
    

def selectionSort(inputLine):
    for index1 in range(len(inputLine)):
        minIndex = index1
        for i in range(len(inputLine[index1:])):
            index2 = index1 + i
            if inputLine[minIndex] > inputLine[index2]:
                minIndex = index2
        swap(minIndex, index1)
            

inputLine = input("Enter all the numbers in one line and then press ENTER: ").split(" ")
selectionSort(inputLine)
print(inputLine)
 
