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
    
    int common = 0;

    for(int i = 1; i <= s2.size(); i++) {
        int found = s1.find(s2.substr(0, i), common);
        if (found != std::string::npos) {
            result.push_back(found);
            common = found;
        } else {
            result.push_back(-1);
            return result;
        }
    }
    return result;
}
