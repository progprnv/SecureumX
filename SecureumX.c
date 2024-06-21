#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool hasUppercase(const string& password) {
    for (char ch : password) {
        if (isupper(ch)) return true;
    }
    return false;
}



bool hasLowercase(const string& password) {
    for (char ch : password) {
        if (islower(ch)) return true;
    }
    return false;
}



bool hasDigit(const string& password) {
    for (char ch : password) {
        if (isdigit(ch)) return true;
    }
    return false;
}




bool hasSpecialChar(const string& password) {
    for (char ch : password) {
        if (ispunct(ch)) return true;
    }
    return false;
}



string checkPasswordStrength(const string& password) {
    int length = password.length();
    bool upper = hasUppercase(password);
    bool lower = hasLowercase(password);
    bool digit = hasDigit(password);
    bool special = hasSpecialChar(password);

    if (length >= 8 && upper && lower && digit && special) {
        return "Strong";
    } else if (length >= 6 && ((upper && lower) || (lower && digit) || (digit && special))) {
        return "Medium";
    } else {
        return "Weak";
    }
}

void printFeedback(const string& password) {
    if (password.length() < 6) {
        cout << "Your password is too short. It should be at least 6 characters long." << endl;
    }
    if (!hasUppercase(password)) {
        cout << "Your password should include at least one uppercase letter." << endl;
    }
    if (!hasLowercase(password)) {
        cout << "Your password should include at least one lowercase letter." << endl;
    }
    if (!hasDigit(password)) {
        cout << "Your password should include at least one digit." << endl;
    }
    if (!hasSpecialChar(password)) {
        cout << "Your password should include at least one special character (e.g., !, @, #, $, etc.)." << endl;
    }
}

int main() {
    string password;

    cout << "Welcome to the Password Strength Checker!" << endl;
    cout << "A strong password should have:" << endl;
    cout << "- At least 8 characters" << endl;
    cout << "- At least one uppercase letter" << endl;
    cout << "- At least one lowercase letter" << endl;
    cout << "- At least one digit" << endl;
    cout << "- At least one special character (e.g., !, @, #, $, etc.)" << endl;
    cout << endl;
 cout << "Enter your password: ";
    cin >> password;

    string strength = checkPasswordStrength(password);
    cout << "Password Strength: " << strength << endl;

    if (strength != "Strong") {
        cout << "Here's how you can improve your password:" << endl;
        printFeedback(password);
    } else {
        cout << "Your password is strong. Great job!" << endl;
    }

    return 0;
}
