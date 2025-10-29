#include "Utils.h"
#include <cctype>

std::string normalizeString(const std::string& str) {
std::string stringNormalisee = "";
for (char c : str){
    char lowercaseChar = tolower(c);
    if (isalnum(lowercaseChar)) {
        stringNormalisee += lowercaseChar;
    }
}
return stringNormalisee;
}