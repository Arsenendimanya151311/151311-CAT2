#include <iostream>
#include <cctype> // for isalpha function
using namespace std;

int main() {
    // Declare variable to store user input
    char inputChar;

    // Get input from the user
    cout << "Enter a character: ";
    cin >> inputChar;

    // Check if the input is a letter using isalpha
    if (isalpha(inputChar)) {
        // Convert the input character to lowercase
        char lowerChar = tolower(inputChar);

        // Check if the lowercase character is a vowel or consonant
        switch (lowerChar) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cout << "The character is a vowel." << endl;
                break;
            default:
                cout << "The character is a consonant." << endl;
        }
    } else {
        // If the input is not a letter, print an error message
        cout << "Error: Not a valid letter." << endl;
    }

    return 0;
}
