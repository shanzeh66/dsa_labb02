#include <iostream>
#include <cassert>
using namespace std;


bool isSorted(const int* arr, const int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {   
            return false;
        }
    }
    return true;
}

void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    bool result = isSorted(arr, 5);
    assert(result == true);
    cout << "testSortedArray passed\n";
}

void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    bool result = isSorted(arr, 5);
    assert(result == false);
    cout << "testUnsortedArray passed\n";
}

void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    bool result = isSorted(arr, 5);
    assert(result == true);
    cout << "testDuplicateValues passed\n";
}

void testSingleElement() {
    int arr[] = {7};
    bool result = isSorted(arr, 1);
    assert(result == true);
    cout << "testSingleElement passed\n";
}

void testDescendingArray() {
    int arr[] = {9, 7, 5, 3, 1};
    bool result = isSorted(arr, 5);
    assert(result == false);
    cout << "testDescendingArray passed\n";
}

void testNegativeValues() {
    int arr[] = {-5, -3, -1, 0, 2};
    bool result = isSorted(arr, 5);
    assert(result == true);
    cout << "testNegativeValues passed\n";
}


void testEmptyArray() {
    int arr[] = {};
    bool result = isSorted(arr, 0);
    assert(result == true);   
    cout << "testEmptyArray passed\n";
}

void testAllEqualElements() {
    int arr[] = {4, 4, 4, 4};
    bool result = isSorted(arr, 4);
    assert(result == true);   
    cout << "testAllEqualElements passed\n";
}

int main() {
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testEmptyArray();
    testAllEqualElements();

    cout << "\nAll tests passed!\n";
    return 0;
}