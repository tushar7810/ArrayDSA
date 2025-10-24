#include <iostream>
#include <string>
using namespace std;

int main() {
    
    // Creating a string
    string str = "Hello Geeks";

    // Traversing using index
    cout << "Using index: ";
    for (int i = 0; i < str.size(); i++) {
        cout << str[i] ;
    }
    cout << endl;

    // Traversing using range-based for loop
    cout << "Using range-based for loop: ";
    for (char ch : str) {
        cout << ch ;
    }
    cout << endl;

    // Traversing using iterator
    cout << "Using iterator: ";
    for (auto it = str.begin(); it != str.end(); it++) {
        cout << *it ;
    }
    cout << endl;

    // Access using index operator []
    cout << "First character: " << str[0] << endl;
    cout << "Fifth character: " << str[4] << endl;

    // Access using at()
    cout << "Character at index 6: " << str.at(6) << endl;

    // Using size()
    cout << "Length using size(): " << str.size() << endl;

    // Using length()
    cout << "Length using length(): " << str.length() << endl;

    string str1 = "Hello";
    string str2 = " Geeks";

    // Using + operator
    string result1 = str1 + str2;
    cout << "Concatenation using + : " << result1 << endl;

    // Using append() function
    string result2 = str1;
    result2.append(str2);
    cout << "Concatenation using append(): " << result2 << endl;

    // Adding a character at the end
    str.push_back('!');
    cout << "After push_back: " << str << endl;

    // Removing the last character
    str.pop_back();
    cout << "After pop_back: " << str << endl;

    // Inserting a substring
    str.insert(5, " C++");
    cout << "After insert: " << str << endl;

    // Erasing part of the string
    str.erase(5, 4); 
    cout << "After erase: " << str << endl;

    // Extract "Hello"
    string sub1 = str.substr(0, 5);   
    cout << "Substring 1: " << sub1 << endl;

    // Extract "Geeks"
    string sub2 = str.substr(6, 5);  
    cout << "Substring 2: " << sub2 << endl;

    size_t pos = str.find("Geeks");  

    if (pos < str.size()) {
        cout << "\"Geeks\" found at index: " << pos << endl;
    }

    return 0;
}
