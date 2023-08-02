#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
protected:
    std::string Name;
public:
    virtual char makeMove();
    std::string getName();
};

#endif