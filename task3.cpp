#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
    cout << "Memory location: " << ptr << endl;
    cout << "Value stored: " << *ptr << endl;
}

int main() {
    // Part 2(1)
    int iValue = 10;
    cout << "Stack variable" << endl;
    analyze_pointer(&iValue);  

    // Part 2(2)
    int *hValue = new int;
    *hValue = 25;
    cout << "Heap variable" << endl;
    analyze_pointer(hValue);    
    delete hValue;   
    
    return 0;
}