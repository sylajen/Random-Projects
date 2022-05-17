#include <iostream>

using namespace std;

char* letterPositioning(char wordArr[5]); //
char* printLetterPositioning(char wordArr[5]);

char* charConv(int attemptNum, string attemptStr, char attemptArr[5]); // function to convert string to char

char* incorrectLetters(char alphabet[26], char incorrectArr[26]); //
char* printIncorrectLetters(char incorrectArr[26]);

int main()
{
    string userInput;
    char finalWord[5]; // array to hold the correct letters, in the right spot
    char correctLetters[5]; // array to hold the correct letters, in the wrong spot
    int attemptNum = 0;
    char attempt1[5], attempt1[5], attempt2[5], attempt3[5], attempt4[5], attempt5[5];
    string attempt1Str, attempt2Str, attempt3Str, attempt4Str, attempt5Str;
    char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char wrongLetters[26] = {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'};

    cout << "Hi there!" << endl;
    cout << "This program will help you solve your Wordle of the day if you're stuck!" << endl;
    cout << " " << endl;
    cout << "How does it work?" << endl;
    cout << "Enter the letters you have guessed correctly with their positions in the word," << endl;
    cout << " then enter the letters you have guessed incorrectly." << endl;
    cout << "The program will then output all the possibilities for your word." << endl;
    cout << "(First letter would be position 1, last letter would be position 5)" << endl;
    cout << "EXAMPLE" << endl;
    cout << "P O W E R" << endl;
    cout << "1 2 3 4 5" << endl;
    cout << "Letter P would be in position 1."

    /***************************FIND CORRECT LETTERS USER HAS IN THE CORRECT SPOT***************************/
    cout << "What CORRECT letters in the CORRECT position do you have, and what position are they in?" << endl;

    userInput = "NO";
    while (userInput == "NO"){
        finalWord[5]  = {'0','0','0','0','0'}; // wordle deciphers a 5 letter word, so a 5 space array
        letterPositioning(finalWord);
        printLetterPositioning(finalWord);
        cout << endl << "Does this look correct? (YES/NO) || ";
        cin >> userInput;
        // if user input == no, ask which position is incorrect, display the letter, and ask what to replace with
    }

    /***************************FIND CORRECT LETTERS USER HAS IN THE INCORRECT SPOT***************************/
    cout << "What CORRECT letters in the INCORRECT position do you have, and what position are they in?" << endl;
    
    userInput = "NO";
    while (userInput == "NO"){
        collectLetters[5]  = {'0','0','0','0','0'};
        theWord(correctLetters);
        printTheWord(correctLetters);
        cout << endl << "Does this look correct? (YES/NO) || ";
        cin >> userInput;
        // if user input == no, ask which position is incorrect, display the letter, and ask what to replace with
    }

    /***************************FIND INCORRECT LETTERS BY ASKING FOR WHAT THE ATTEMPTS WERE USED***************************/
    cout << "What attempts have you made so far? (Type 'END' when you're done)" << endl;
    
    userInput = "NO";
    while (userInput == "END" || attemptNum <=5){
        attemptNum = 1;
        cout << "Attempt number " << attemptNum << ": ";
        cin >> userInput;
        cout >> endl;

        for (userInput.size != 5){
            cout << "Incorrect number of letters. Re-enter attempt 1: ";
            cin >> userInput;
            cout << endl;
        }

        // store attempts as strings
        switch (attemptNum){
            case 1: attempt1Str = userInput;
            case 2: attempt2Str = userInput;
            case 3: attempt3Str = userInput;
            case 4: attempt4Str = userInput;
            case 5: attempt5Str = userInput;
        }

        char placeholderArr[5];
        charConv(attemptNum, userInput, placeholderArr[5]);

        // store attempts as chars
        switch (attemptNum){
            case 1: attempt1[5] = placeholderArr[5];
            case 2: attempt2[5] = placeholderArr[5];
            case 3: attempt3[5] = placeholderArr[5];
            case 4: attempt4[5] = placeholderArr[5];
            case 5: attempt5[5] = placeholderArr[5];
        }
        attemptNum++;
    }

    cout << "Your attempts are as follows:" << endl;
    cout << attempt1Str << endl;
    cout << attempt2Str << endl;
    cout << attempt3Str << endl;
    cout << attempt4Str << endl;
    cout << attempt5Str << endl;
    


}

/*******************************FUNCTIONS*************************************/
// gather user input as to what letters are known and where they are
char* letterPositioning(char wordArr[5]){
    string endCorrectLetters = "YES";
    char letterInput;
    int letterPosition;
    while (endCorrectLetters != "NO"){
        cout << endl << "Enter letter: ";
        cin >> letterInput;
        for (sizeof(letterInput) != 1){
            cout << "Incorrect number of letters. Re-enter letter: ";
            cin >> letterInput;
            cout << endl;
        }

        cout << endl << "Enter position: ";
        cin >> letterPosition;
        for (letterPosition < 1 || letterPosition > 5){
            cout << "Incorrect number of letters. Re-enter letter: ";
            cin >> letterInput;
            cout << endl;
        }


        letterPosition = letterPosition - 1; // to fit it in the constraints of an array
        wordArr[letterPosition] = letterInput;

        cout << endl << "Do you know another letter? (YES/NO) || ";
        cin >> endCorrectLetters;
    }
    return wordArr;
}

// display word as known at the moment to the user
char* printLetterPositioning(char wordArr[5]){
    int checkWordCorrect = 0;
    while (checkWordCorrect <= 4){
        if (wordArr[checkWordCorrect] == '0'){
            cout << "_ ";
        }
        else{
            cout << wordArr[checkWordCorrect] << " ";
        }
        checkWordCorrect++;
    }
    return wordArr;
}

char* charConv(attemptNum, userInput, placeholderArr[5]){

}

/* gather user input as to what letters are known and where they are
char* incorrectLetters(char alphabet[26], char incorrectArr[26]){
    string endIncorrectLetters = "YES";
    char letterInput;
    int counter = 0;
    while (endIncorrectLetters != "NO"){
        int letterPosition = 0;
        int verify = 0;
        cout << endl << "Enter letter: ";
        cin >> letterInput;

        incorrectArr[counter] = letterInput; // fills array with incorrect letters
        while (letterInput != alphabet[letterPosition]){
            letterPosition++;
        }
        alphabet[letterPosition] = '0'; // removes incorrect letters from alphabet

        cout << endl << "Do you know another incorrect letter? (YES/NO) || ";
        cin >> endIncorrectLetters;
        counter++;
    }
    return alphabet, incorrectArr;
}

// display word as known at the moment to the user
char* printIncorrectLetters(char incorrectArr[26]){
    int letterPosition = 0;
    char letter = 'A';
    cout << "Are these your incorrect letters?" << endl;
    while (letter != '0'){
        letter = incorrectArr[letterPosition];
        if (letter != '0'){
            cout << letter;   
        }
        else{
            return 0;
        }
        letterPosition++;
    }
    return incorrectArr;
} */

/*exitFunc(string input){
    if(input == "CANCEL"){

    }
    else{
        return 0;
    }
}*/
