#include "Finder.h"

std::vector<int> Finder::findSubstrings(std::string s1, std::string s2) {
    std::vector<int> result;
    if (s1 == s2)
    {
        for (size_t i = 0; i < s2.size(); i++)
        {
            result.push_back(1);
        }
        return result;
    }
    

    for(size_t i = 1; i <= s2.size(); i++) {
        size_t found = s1.find(s2, i);
        if (found != std::string::npos) {
            result.push_back(found);
        } else {
            result.push_back(-1);
            return result;
        }
    }
    return result;
}
