#include <iostream>
#include <fstream>
#include <string>
#include <exception>
#include <functional>

using namespace std;

/*  USER DEFINED EXCEPTION  */
class LoginException : public exception {
    string message;
public:
    LoginException(string msg) : message(msg) {}
    const char* what() const noexcept {
        return message.c_str();
    }
};

/*  PASSWORD HASHING  */
string hashPassword(const string& password) {
    hash<string> hasher;
    return to_string(hasher(password));
}

/* REGISTRATION  */
void registerUser() {
    string regNo, password;

    cout << "Enter Registration Number: ";
    cin >> regNo;

    cout << "Enter Password (min 6 chars): ";
    cin >> password;

    if (password.length() < 6)
        throw LoginException("Password too short!");

    ofstream file("users.txt", ios::app);
    if (!file)
        throw LoginException("Unable to open file!");

    file << regNo << " " << hashPassword(password) << endl;
    file.close();

    cout << "Registration successful.\n";
}

/*  LOGIN  */
bool loginUser() {
    string regNo, password, fileReg, fileHash;

    cout << "Enter Registration Number: ";
    cin >> regNo;

    cout << "Enter Password: ";
    cin >> password;

    string hashedInput = hashPassword(password);

    ifstream file("users.txt");
    if (!file)
        throw LoginException("User database not found!");

    while (file >> fileReg >> fileHash) {
        if (fileReg == regNo && fileHash == hashedInput) {
            file.close();
            return true;
        }
    }

    file.close();
    throw LoginException("Invalid registration number or password!");
}

/*  MAIN  */
int main() {
    int choice;

    try {
        cout << "1. Register\n2. Login\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            registerUser();
        }
        else if (choice == 2) {
            if (loginUser())
                cout << "Login successful. Access granted.\n";
        }
        else {
            throw LoginException("Invalid menu choice!");
        }
    }
    catch (LoginException& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
