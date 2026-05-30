#include <iostream>
#include "XOR.hpp"

using namespace std;

enum Page {
    MENU,
    XOR,
    CAESAR,
    EXIT
};

int main(int argc, char** argv) {

    if(argc < 2) {
        Page now;

        
        now = MENU;

        int int_input;
        string s_input;
        char key;
        
        while (now != EXIT) {
    
            switch (now) {
    
                case MENU: {
                    cout << "MultiEncrypter by Agst" << endl;
                    cout << "[1]-XOR" << endl;
                    cout << "[2]-CAESAR" << endl;
                    cout << "[3]-EXIT" << endl;

                    cin >> int_input;

                    switch(int_input) {

                        case 1: { now = XOR; break; }

                        case 2: { now = CAESAR; break; }

                        case 3: { now = EXIT; break; }

                        default: { cout << "Invalid option" << endl; break; }
                    }

                    break;
                }


                case XOR: {
                    cout << "XOR MENU" << endl;
                    now = EXIT;
                    break;
                }


                case CAESAR: {
                    cout << "CAESAR MENU" << endl;
                    
                    now = EXIT;
                    break;
                }
    
            }
        }
    }



    return 0;
}