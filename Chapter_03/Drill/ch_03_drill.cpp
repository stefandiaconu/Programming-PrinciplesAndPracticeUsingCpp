//
// Created by Stefan Diaconu on 13/05/2025.
//

#include "../../std_lib_facilities.h"

int main()
{
    cout << "Enter the name of the person you want to write to:\n";
    string first_name;
    cin >> first_name;

    cout << "Enter the name of another friend:\n";
    string friend_name;
    cin >> friend_name;

    cout << "Is the friend male or female?\n";
    char friend_sex = 0;
    cin >> friend_sex;

    cout << "What is the age of the recipient?\n";
    int age;
    cin >> age;

    cout << "\tDear " << first_name << ",\n";
    cout << "How are you? I am fine. I miss you.\n";
    cout << "Have you seen " << friend_name << " lately?\n";
    if (friend_sex == 'm') {
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    }
    if (friend_sex == 'f') {
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    }
    if (age <= 0 || age >= 110) {
        simple_error("you're kidding");
    }
    cout << "I hear you just had a birthday and you are " << age << " years old.\n";
    if (age < 12) {
        cout << "Next year you will be " << age+1 << ".\n";
    }
    if (age == 17) {
        cout << "Next year you will be able to vote.\n";
    }
    if (age > 70) {
        cout << "I hope you are enjoying retirement.\n";
    }
    cout << "Your sincerely,\n\n\n";
    cout << "Stefan\n";

    return 0;
}