#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(int arr[], int size, int key)
{
    vector<int> indices;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            indices.push_back(i);
        }
    }

    return indices;
}

int main()
{
    // Test Case 1: Multiple occurrences
    int arr1[] = {5, 2, 7, 2, 9, 2, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int key1 = 2;

    vector<int> result = findIndices(arr1, size1, key1);

    cout << "Test Case 1 (Multiple occurrences): ";
    if (result.empty())
    {
        cout << "Key not found";
    }
    else
    {
        for (int index : result)
        {
            cout << index << " ";
        }
    }
    cout << endl;

    // Test Case 2: Key not present
    int arr2[] = {1, 3, 5, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int key2 = 4;

    result = findIndices(arr2, size2, key2);

    cout << "Test Case 2 (Key not present): ";
    if (result.empty())
    {
        cout << "Key not found";
    }
    else
    {
        for (int index : result)
        {
            cout << index << " ";
        }
    }
    cout << endl;

    // Test Case 3: Empty array
    int arr3[] = {};
    int size3 = 0;
    int key3 = 10;

    result = findIndices(arr3, size3, key3);

    cout << "Test Case 3 (Empty array): ";
    if (result.empty())
    {
        cout << "Array is empty or key not found";
    }
    else
    {
        for (int index : result)
        {
            cout << index << " ";
        }
    }
    cout << endl;

    return 0;
}