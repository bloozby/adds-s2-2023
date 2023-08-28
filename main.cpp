#include <iostream>
#include "finder.h"

using namespace std;

int main(){
    Finder f;
    string find = "fil";
    string in = "defile";
    cout << "find " << find << " in " << in << "?" << endl;
    vector<int> found = f.findSubstrings(find, in);
    if (found[0] != -1)
    {
        cout << "yes" << endl;
        for (int i = 0; i < found.size(); i++)
        {
            cout << found[i];
        }
        
    } else {
        cout << "no" << endl;
    }
    
    
    return 0;
}