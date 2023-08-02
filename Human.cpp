#include <stdlib.h>
#include <iostream>
#include <string>
#include "Human.h"

using namespace std;

Human::Human(){
    this->Name="Human";
}

Human::Human(string n){
    this->Name=n;
}

char Human::makeMove(){
    //setting up move
    char c;
    cout << "Enter move: ";
    cin >> c;
    return c;
}