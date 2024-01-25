#ifndef GAME_H
#define GAME_H
#include <iostream>

using namespace std;

class Game
{

private:
    int etsittavaLuku;
    int alaraja;
    int ylaraja;

public:
    Game(int ala, int yla);
    ~Game();

    void aloitaPeli();
};

#endif // GAME_H
