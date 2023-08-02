#include "Referee.h"

Referee::Referee(){}

Player* Referee::refGame(Player * player1, Player * player2){
    char p1= player1->makeMove();
    char p2= player2->makeMove();

    if (p1 == p2)
    {
        return nullptr;
    }else if (p1=='P' && p2 =='R' )
    {
        return player1;
    } else if (p1=='S' && p2 =='R'){
        return player2;
    }else if (p2=='P' && p1 =='R' )
    {
        return player2;
    }else if (p2=='S' && p1 =='R'){
        return player1;
    }else if (p2=='S' && p1 =='P'){
        return player2;
    }else if (p1=='S' && p2 =='P'){
        return player1;
    }
}