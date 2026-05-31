#include "utils.hpp"
#include <iostream>

using namespace std;

#include <string>

string getStringInput() {
    string temp;
    cout << "Insert the text to encrypt: ";
    cin.clear();
    cin >> temp;
    return temp;
}

char getKeyCharInput() {
    char temp;
    cout << "Enter the character to use in the key";
    cin.clear();
    cin >> temp;
    return temp;
}

int getMenuIntInput() {
    int temp;
    cout << "Enter an option: ";
    cin.clear();
    cin >> temp;
    return temp;
}