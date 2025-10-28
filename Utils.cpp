#include "Utils.h"
#include <cctype>
#include <iostream>
using namespace std;

string normalizeString(const string& str) {
string stringNormalisee = "";
for (char c : str){
    char lowercaseChar = tolower(c);
    if (isalnum(lowercaseChar)) {
        stringNormalisee += lowercaseChar;
    }
};
return stringNormalisee;
}