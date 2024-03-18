#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Player {
    private:
        string name;
        int choice;
    public:
        Player();
        int setChoice();
        void winner();
};

#endif