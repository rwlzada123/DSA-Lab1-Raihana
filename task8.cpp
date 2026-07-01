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