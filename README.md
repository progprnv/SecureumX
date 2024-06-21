# SecureumX

**SecureumX** is an advanced, user-friendly password strength checker designed to enhance your security. This C++ tool evaluates password strength based on length, uppercase and lowercase letters, digits, and special characters. Whether you're a developer or a cybersecurity enthusiast, SecureumX provides detailed feedback to help you create robust, secure passwords. Keep your accounts safe with this powerful and intuitive password auditing tool.

## Table of Contents

- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Features

- Checks password strength based on:
  - Length
  - Uppercase letters
  - Lowercase letters
  - Digits
  - Special characters
- Provides detailed feedback on how to improve password strength
- Simple and intuitive command-line interface

## Installation

### Prerequisites

- C++ compiler (e.g., g++)

### Steps

1. Clone the repository:
    ```bash
    git clone https://github.com/progprnv/SecureumX.git
    ```
2. Navigate to the project directory:
    ```bash
    cd Secureumx
    ```
3. Compile the program:
    ```bash
    g++ -o SecureumX.cpp
    ```

## Usage

1. Run the compiled program:
    ```bash
    ./SecureumX
    ```
2. Follow the on-screen instructions to enter your password and receive feedback on its strength.

### Example

```plaintext
Welcome to SecureumX!
A strong password should have:
- At least 8 characters
- At least one uppercase letter
- At least one lowercase letter
- At least one digit
- At least one special character (e.g., !, @, #, $, etc.)

Enter your password: P@ssw0rd123

Password Strength: Strong
Your password is strong. Great job!
