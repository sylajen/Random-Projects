#include <iostream>

using namespace std;

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
    char finalWord[5]; // wordle deciphers a 5 letter word, so a 5 space array

    /***************************FIND LETTERS USER HAS***************************/
    cout << "What correct letters do you have, and what position are they in?" << endl;
    cout << "(First letter would be position 1, last letter would be position 5)" << endl;
    cout << "EXAMPLE" << endl;
    cout << "P O W E R" << endl;
    cout << "1 2 3 4 5" << endl;
    
    // this while loop will fill the array with letters that are known to the user already
    string endCorrectLetters;
    char letterInput;
    int letterPosition;
    while (endCorrectLetters != "NO"){
        cout << endl << "Enter letter: ";
        cin >> letterInput;
        cout << endl << "Enter position: ";
        cin >> letterPosition;

        letterPosition = letterPosition - 1; // to fit it in the constraints of an array
        finalWord[letterPosition] = letterInput;

        cout << endl << "Do you know another letter? (YES/NO) ";
        cin >> endCorrectLetters;
    }

    char userInput;
    cout << endl << "Does this look correct? ";
    // display word as known at the moment to the user
    int checkWordCorrect = 0;
    while (checkWordCorrect != 4){
        if (finalWord[checkWordCorrect] == '0'){
            cout << "_";
        }
        else{
            cout << finalWord[checkWordCorrect];
        }
        checkWordCorrect++;
    }

    cin >> userInput;
    
    
    return 0;
}
