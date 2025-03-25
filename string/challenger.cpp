#include <iostream>
#include <string>

using namespace std;

string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

void replaceAll(string &str, const char from, const char to) {
    for (char &c : str) {
        if (c == from) {
            c = to;
        }
    }
}

string encrypt(const string &str) {
    string encrypted (str);
    for (int i = 0; i < alphabet.size(); ++i) {
        const char c = str[i];
        if (const size_t index = alphabet.find_first_of(c); index != string::npos) {
            const char r = key[index];
            replaceAll(encrypted, c, r);
        }
    }
    return encrypted;
}

string decrypt(const string &str) {
    string decrypted (str);
    for (int i = 0; i < key.size(); ++i) {
        const char c = str[i];
        if (const size_t index = key.find_first_of(c); index != string::npos) {
            const char r = alphabet[index];
            replaceAll(decrypted, c, r);
        }
    }
    return decrypted;
}

int main() {
    string message;
    cout << "Enter a secret message: ";
    getline(cin, message);
    const string encrypted = encrypt(message);
    const string decrypted = decrypt(encrypted);
    cout << "Encrypt: " << encrypted << endl;
    cout << "Decrypt: " << decrypted << endl;
    return 0;
}