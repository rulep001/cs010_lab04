//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab4.cpp
/// @brief Lab 4
///
/// @author Ryan Ulep [rulep001@ucr.edu]
/// @date April 21, 2015
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>

using namespace std;

int main()
{
    char character;

    cout << "Enter a character: ";
    cin >> character;
    cout << endl;
    cout << endl;

    if ((character >= 48) && (character <= 57)) {
        cout << "You entered a numeric digit.";
    }

    else if ((character >= 97) && (character <= 122)) {
        cout << "You entered a lowercase letter.";
    }

    else if ((character >= 65) && (character <= 90)) {
        cout << "You entered an uppercase letter.";
    }

    else {
        cout << "You entered an unknown character type.";
    }

    return 0;
}
