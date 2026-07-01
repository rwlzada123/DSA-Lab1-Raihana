#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int findIndex(char text[], char pattern[]){
    int sizeOfText=strlen(text);
    int sizeOfPattern=strlen(pattern);
    if (sizeOfPattern == 0){
        return 0;
    }
    for (int i=0; i<sizeOfText; i++){
        int j=0;
        if(text[i]!=pattern[j]) continue;
        else if(text[i]==pattern[j]){
            while(j<sizeOfPattern){
                j++;
                if(text[i+j]!=pattern[j]){
                    break;
                }
                else continue;
            }
            if(j==sizeOfPattern){
                return i;
            }
        }
    }
    return -1;
}
int main()
{
    // Test Case 1: Pattern at the beginning
    char text1[] = "computer";
    char pattern1[] = "com";
    cout << findIndex(text1, pattern1) << endl;  

    // Test Case 2: Pattern at the end
    char text2[] = "computer";
    char pattern2[] = "ter";
    cout << findIndex(text2, pattern2) << endl; 

    // Test Case 3: Pattern in the middle
    char text3[] = "computer";
    char pattern3[] = "put";
    cout << findIndex(text3, pattern3) << endl;  

    // Test Case 4: Pattern not present
    char text4[] = "computer";
    char pattern4[] = "abc";
    cout << findIndex(text4, pattern4) << endl;  

    // Test Case 5: Empty pattern
    char text5[] = "computer";
    char pattern5[] = "";
    cout << findIndex(text5, pattern5) << endl;  

    // Test Case 6: Pattern equals text
    char text6[] = "hello";
    char pattern6[] = "hello";
    cout << findIndex(text6, pattern6) << endl; 

    // Test Case 7: Pattern longer than text
    char text7[] = "cat";
    char pattern7[] = "catalog";
    cout << findIndex(text7, pattern7) << endl;   

    // Test Case 8: First occurrence only
    char text8[] = "banana";
    char pattern8[] = "ana";
    cout << findIndex(text8, pattern8) << endl;  

    return 0;
}