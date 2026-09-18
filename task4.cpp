#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);   // reads the entire line, including spaces

    int size = input.length();
    char *str = new char[size + 1];   // dynamically allocate memory

    // copy characters from the string into the dynamic array
    for (int i = 0; i < size; i++) {
        str[i] = input[i];
    }
    str[size] = '\0';   // null terminator

    // Reverse the string manually
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    cout << "Reversed string: " << str << endl;

    delete [] str;
    return 0;
}