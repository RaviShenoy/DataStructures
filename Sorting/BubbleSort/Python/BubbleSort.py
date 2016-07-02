

def swap(i):
    temp = inputLine[i]
    inputLine[i] = inputLine[i - 1]
    inputLine[i - 1] = temp

def bblsort(inputLine):
    bSwaped = True
    while(bSwaped):
        bSwaped = False
        for index in range(len(inputLine)):
            if(index == 0):
                continue
            if(int(inputLine[index - 1]) > int(inputLine[index])):
                swap(index)
                bSwaped = True



inputLine = input("Enter all the numbers in one line and then press ENTER: ").split(" ")
bblsort(inputLine)
print(inputLine)
                
    
