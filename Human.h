#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <string>

class Human : public Player
{
private:
    
public:
    Human();
    Human(std::string n);
    char makeMove();
};

#endif