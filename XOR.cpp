#include "XOR.hpp"

using namespace std;

string XOR_encrypt(const string& s, const char& key) {
    string result = s;

    for(int i=0; i< s.size(); i++) {
        result[i] ^= key;
    }

    return result;
}


