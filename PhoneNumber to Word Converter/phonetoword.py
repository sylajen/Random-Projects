# Convert Numbers to letters based on telephone numbers
# 2 - ABC | 3 - DEF | 4 - GHI | 5 - JKL | 6 - MNO | 7 - PQRS | 8 - TUV | 9 - WXYZ 
#create something for each alphanumeric association
varZero   = " "
varOne    = " "
arrTwo    = ["A", "B", "C"]
arrThree  = ["D", "E", "F"]
arrFour   = ["G", "H", "I"]
arrFive   = ["J", "K", "L"]
arrSix    = ["M", "N", "O"]
arrSeven  = ["P", "Q", "R", "S"]
arrEight  = ["T", "U", "V"]
arrNine   = ["W", "X", "Y", "Z"]

# 8 functions, one for each number
userInput = input("Convert from number to letters, phone style: ")
initialNumber = [int(i) for i in str(userInput)] #puts initial number into an array
totalLength = len(initialNumber) #total number of digits
totalPositions = totalLength - 1 #total positions = total digits - 1
ansPossibleArr = [] #empty array to house number of possibilites per number

#this function will look through all digits of the number inputted, then assigns the number of possibilities per digit, then calculcates the answers possible
def answersPossibleFunc():
    checker = 0
    #create an array with the number of possibilities for each number
    for checker in range(totalLength):
        if initialNumber[checker] == 7 or initialNumber[checker] == 9:
            ansPossibleArr.append(4) #4 letters for these numbers
        elif initialNumber[checker] == 2 or initialNumber[checker] == 3 or initialNumber[checker] == 4 or initialNumber[checker] == 5 or initialNumber[checker] == 6 or initialNumber[checker] == 8:
            ansPossibleArr.append(3) #3 letters for these numbers
        else:
            ansPossibleArr.append(0) #0 letters for these numbers

#call the previously defined function and insert everything we've gathered
answersPossibleFunc()
print("There are", totalLength, "total digits")
print("Possible number of letters per digit provided: ", ansPossibleArr)

#create a function to convert array into non-zero array
nonzeroArr = []
def nonzeroArrayFunc():
    checker2 = 0
    for checker2 in range(totalLength):
        if ansPossibleArr[checker2] != 0:
            nonzeroArr.append(ansPossibleArr[checker2])
        else:
            pass

#call the previously defined function and insert everything we've gathered
nonzeroArrayFunc()
print("Zeroes represent digits without letters; these will be represented as spaces")
print("The same array without 0 values is: ", nonzeroArr)

#create a function that will calculate the total number of outcomes from the user entered number
totalOutcomes = 1
def totalOutcomesFunc():
    #literally just have to multiply the the values in the nonzeroArr
    checker3 = 0
    global totalOutcomes
    for checker3 in range(len(nonzeroArr)):
        totalOutcomes = totalOutcomes * nonzeroArr[checker3]  #NOT CORRECT YET, it multiplies the first array value twice for some reason
        
#call the totalOutcome function and display the total outcomes
totalOutcomesFunc()
print("The total amount of outcomes possible from the provided number is", totalOutcomes)

#use the total outcomes to create the array of outcomes
totalOutcomesArr[totalOutcomes]

#go through all the possible options


