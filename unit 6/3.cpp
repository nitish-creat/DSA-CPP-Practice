#include <iostream>
#include <string>
using namespace std;

class InvalidInputException {};
class InvalidLengthException {};

int main() {
    string mobile;
    cin >> mobile;

    try {
        cout << mobile << endl;

        for (char c : mobile) {
            if (!isdigit(c)) {
                throw InvalidInputException();
            }
        }

        if (mobile.length() != 10) {
            throw InvalidLengthException();
        }

        cout << "The entered mobile number is valid";
    }
    catch (InvalidInputException) {
        cout << "Invalid input";
    }
    catch (InvalidLengthException) {
        cout << "The mobile number should have 10 digits";
    }

    return 0;
}
