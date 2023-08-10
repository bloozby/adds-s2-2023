#include "Reverser.h"

Reverser::Reverser(){

}

int Reverser::reverseDigit(int value){
    
    static int rev = 0;
    static int pos = 1;
    
    if (value <= 0)
    {
        return -1;
    }
    else {
        reverseDigit(value/10);
        rev += (value%10)*pos;
        pos *=10;
        return rev;
    }
}

std::string Reverser::reverseString(std::string characters){
    if (characters.length() - 1 < 0)
    {
        return "EMPTY STRING";
    } else if (characters.length() - 1 == 0)
    {
        return characters;
    }else if (characters.length() > 0){
        std::string c1 = characters.substr(0, 1);
        std::string c2 = characters.substr(characters.size() - 1, characters.size());
        std::string mid = characters.substr(1, characters.size() - 2);
        return c2 + reverseString(mid) + c1;
    } else
    {
        return "";
    }
}