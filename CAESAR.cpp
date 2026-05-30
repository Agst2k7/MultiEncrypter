#include "CAESAR.hpp"

#include <string>

using namespace std;

string CAESAR_encrypt(string& s, const int& key) {
    
    for (char& c : s) {
        if (c >= 'A' && c <= 'Z') {

            c = ((c - 'A' + key) % 26) + 'A';

        }
        
        else if (c >= 'a' && c <= 'z') {

            c = ((c - 'a' + key) % 26) + 'a';

        }
    }

    return s;
}