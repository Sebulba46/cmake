//
// Created by egors on 10/17/2022.
//
#include <iostream>
#include "Blah.h"
#include <string>


using namespace std;


int main () {
    cout << "Hello World!" << endl;

    cout << Blah::boo(12423525254, 43363483846983) << endl;
    if (to_string(Blah::boo(12423525254, 43363483846983)) == "538727336674414372208682") {
        cout << "True Answer" << endl;
    }
    else {
        cout << "Wrong Answer" << endl;
    }

    cout << "---------------------------------" << endl;

    cout << Blah::boo(9832757184397, 348525737503275) << endl;
    if (to_string(Blah::boo(9832757184397, 348525737503275)) == "3426968949382590197566400175") {
        cout << "True Answer" << endl;
    }
    else {
        cout << "Wrong Answer" << endl;
    }
    return 0;
};