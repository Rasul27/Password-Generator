/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h> 
using namespace std;

static const char digits[] = "0123456789";
static const char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
static const char uppercaseLetters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";  // 
static const char symbols[] = "!@#$%^&*()-_+=[]{}|;:,.<>?";

int main() {
    srand(time(0));

    int digitCount, lowercaseCount, uppercaseCount, symbolCount;

    cout << "Enter the number of digits: ";
    cin >> digitCount;

    cout << "Enter the number of lowercase letters: ";
    cin >> lowercaseCount;

    cout << "Enter the number of uppercase letters: ";
    cin >> uppercaseCount;

    cout << "Enter the number of symbols: ";
    cin >> symbolCount;

    int totalLength = digitCount + lowercaseCount + uppercaseCount + symbolCount;

    if (totalLength == 0) {
        cout << "Error: At least one character type should be included." << endl;
        return 1;
    }

    string password;

    for (int i = 0; i < totalLength; ++i) {
        char c;
        if (digitCount > 0) {
            c = digits[rand() % 10];
            digitCount--;
        } else if (lowercaseCount > 0) {
            c = lowercase[rand() % 26];
            lowercaseCount--;
        } else if (uppercaseCount > 0) {
            c = uppercaseLetters[rand() % 26];
            uppercaseCount--;
        } else if (symbolCount > 0) {
            c = symbols[rand() % (sizeof(symbols) - 1)];
            symbolCount--;
        }

        password += c;
    }

   
    random_shuffle(password.begin(), password.end());

    cout << "Your Password is: " << password << endl;

    cout << "Your password has been generated! :)" << endl;

    return 0;
}
