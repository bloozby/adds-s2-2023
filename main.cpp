#include <iostream>
#include "finder.h"

using namespace std;

int main(){
    Finder f;
    string in = "fil";
    string find = "defile";
    cout << "find " << find << " in " << in << "?" << endl;
    vector<int> found = f.findSubstrings(in, find);
    for (int i = 0; i < found.size(); i++){
            cout << found[i];
    }
    
    
    
    return 0;
}