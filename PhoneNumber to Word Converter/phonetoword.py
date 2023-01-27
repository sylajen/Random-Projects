# Convert Numbers to letters based on telephone numbers
# 2 - ABC | 3 - DEF | 4 - GHI | 5 - JKL | 6 - MNO | 7 - PQRS | 8 - TUV | 9 - WXYZ 
# 8 functions, one for each number
userInput = input("Convert from number to letters, phone style: ")
initialNumber = [int(i) for i in str(userInput)]
totalPos = len(initialNumber) - 1 #total positions = total numbers - 1
ansPossible = [] #empty array to house number of possibilites per number

#this function will look through all digits of the number inputted, then assigns the number of possibilities per digit, then calculcates the answers possible
def answersPossible(initialNumber, ansPossible, totalPos):
    checker = 0
    #create an array with the number of possibilities for each number
    for checker in range(totalPos):
        if initialNumber[checker] == 7 or initialNumber[checker] == 9:
            ansPossible.append(4) #4 letters for these numbers
        elif initialNumber[checker] == 2 or initialNumber[checker] == 3 or initialNumber[checker] == 4 or initialNumber[checker] == 5 or initialNumber[checker] == 6 or initialNumber[checker] == 8:
            ansPossible.append(3) #3 letters for these numbers
        else:
            ansPossible.append(0) #0 letters for these numbers
    

        
    
# def two():          #ABC
# def three():        #DEF
# def four():         #GHI

# def five():         #JKL
    
# def six():          #MNO

# def seven():        #PQRS
    
# def eight():        #TUV
    
# def nine():         #WXYZ
    
# def mainFunc(userInput):
    
#     #for xRuns < totalX:
        
#     print(convertedString)


# totalX = total[]

