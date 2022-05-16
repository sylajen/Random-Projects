#include <iostream>

using namespace std;

char* dilemmaWord(char dilemmaArr [5]);
char* printDilemmaWord(char dilemmaArr [5]);

int main()
{
    cout << "Hi there!" << endl;
    cout << "This program will help you solve your Wordle of the day if you're stuck!" << endl;
    cout << " " << endl;
    cout << "How does it work?" << endl;
    cout << "Enter the letters you have guessed correctly with their positions in the word," << endl;
    cout << " then enter the letters you have guessed incorrectly." << endl;
    cout << "The program will then output all the possibilities for your word." << endl;

    char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char finalWord[5]  = {'0','0','0','0','0'}; // wordle deciphers a 5 letter word, so a 5 space array

    /***************************FIND LETTERS USER HAS***************************/
    cout << "What correct letters do you have, and what position are they in?" << endl;
    cout << "(First letter would be position 1, last letter would be position 5)" << endl;
    cout << "EXAMPLE" << endl;
    cout << "P O W E R" << endl;
    cout << "1 2 3 4 5" << endl;
    
    // gather user's word and see if it looks correct
    string userInput = "NO";
    while (userInput == "NO"){
        dilemmaWord(finalWord);
        printDilemmaWord(finalWord);
        cout << endl << "Does this look correct? (YES/NO) || ";
        cin >> userInput;
    }
   
    if (userInput == "NO"){
        cout << "YAAAY";
    }
    else{
        cout << "OKAYYY";
    }
    
    return 0;
}

// gather user input as to what letters are known and where they are
char* dilemmaWord(char dilemmaArr[5]){
    string endCorrectLetters = "YES";
    char letterInput;
    int letterPosition;
    while (endCorrectLetters != "NO"){
        cout << endl << "Enter letter: ";
        cin >> letterInput;
        cout << endl << "Enter position: ";
        cin >> letterPosition;

        letterPosition = letterPosition - 1; // to fit it in the constraints of an array
        dilemmaArr[letterPosition] = letterInput;

        cout << endl << "Do you know another letter? (YES/NO) || ";
        cin >> endCorrectLetters;
    }
    return dilemmaArr;
}

// display word as known at the moment to the user
char* printDilemmaWord(char dilemmaArr[5]){
    int checkWordCorrect = 0;
    while (checkWordCorrect <= 4){
        if (dilemmaArr[checkWordCorrect] == '0'){
            cout << "_ ";
        }
        else{
            cout << dilemmaArr[checkWordCorrect] << " ";
        }
        checkWordCorrect++;
    }
    return dilemmaArr;
}
