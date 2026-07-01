#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

// Function prototypes
vector<int> findIndices(int arr[], int size, int key);
int findIndex(char text[], char pattern[]);

int main()
{
    cout << "========== TASK 7 TESTS ==========\n";

    // Test 1: Multiple occurrences
    int arr1[] = {5, 2, 7, 2, 9, 2, 4};
    vector<int> result = findIndices(arr1, 7, 2);

    cout << "Test 1: ";
    for (int x : result)
        cout << x << " ";
    cout << "\nExpected: 1 3 5\n\n";

    // Test 2: Key not present
    int arr2[] = {1, 3, 5, 7};
    result = findIndices(arr2, 4, 4);

    cout << "Test 2: ";
    if (result.empty())
        cout << "Key not found";
    else
        for (int x : result)
            cout << x << " ";
    cout << "\nExpected: Key not found\n\n";

    // Test 3: Empty array
    int arr3[] = {};
    result = findIndices(arr3, 0, 10);

    cout << "Test 3: ";
    if (result.empty())
        cout << "Array is empty or key not found";
    else
        for (int x : result)
            cout << x << " ";
    cout << "\nExpected: Array is empty or key not found\n\n";



    cout << "========== TASK 8 TESTS ==========\n";

    char text1[] = "computer";
    char pattern1[] = "com";
    cout << "Beginning: " << findIndex(text1, pattern1)
         << " (Expected: 0)\n";

    char text2[] = "computer";
    char pattern2[] = "ter";
    cout << "End: " << findIndex(text2, pattern2)
         << " (Expected: 5)\n";

    char text3[] = "computer";
    char pattern3[] = "put";
    cout << "Middle: " << findIndex(text3, pattern3)
         << " (Expected: 3)\n";

    char text4[] = "computer";
    char pattern4[] = "abc";
    cout << "Not Present: " << findIndex(text4, pattern4)
         << " (Expected: -1)\n";

    char text5[] = "computer";
    char pattern5[] = "";
    cout << "Empty Pattern: " << findIndex(text5, pattern5)
         << " (Expected: 0)\n";

    char text6[] = "hello";
    char pattern6[] = "hello";
    cout << "Equal Strings: " << findIndex(text6, pattern6)
         << " (Expected: 0)\n";

    char text7[] = "cat";
    char pattern7[] = "catalog";
    cout << "Pattern Longer: " << findIndex(text7, pattern7)
         << " (Expected: -1)\n";

    char text8[] = "banana";
    char pattern8[] = "ana";
    cout << "First Occurrence: " << findIndex(text8, pattern8)
         << " (Expected: 1)\n";

    return 0;
}