#include <iostream>
#include <string>

using namespace std;

int main() {
    string stringA;
    string stringB;

    // get string1
    cout << "Enter the first string: ";
    getline(cin, stringA);
    // get string2
    cout << "Enter the second string: ";
    getline(cin, stringB);

    // Concatenate string1 and string2
    string mergeString1 = stringA + " " + stringB;

    // get string3
    cout << "Enter the third string: ";
    getline(cin, stringA);
    // get string4
    cout << "Enter the fourth string: ";
    getline(cin, stringB);

    // Concatenate string3 and string4
    string mergeString2 = stringA + " " + stringB;

    // get string4
    cout << "Enter the fifth string: ";
    getline(cin, stringA);
    // get string5
    cout << "Enter the sixth string: ";
    getline(cin, stringB);

    // Concatenate string5 and string6
    string mergeString3 = stringA + " " + stringB;


    // Show mergeStrings(1)(2)(3)
    cout << "The combined strings are: " << mergeString1
    << "\n" << mergeString2  << "\n" << mergeString3 << endl;

    return 0;
}