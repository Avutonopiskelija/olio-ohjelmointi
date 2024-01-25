#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int ala, int yla) : alaraja(ala), ylaraja(yla)
{
    srand((time(0)));
    etsittavaLuku = rand() % 20;

    cout << "Maksimiarvoksi on asetettu 20"<< endl;
}

Game::~Game()
{
    cout << "Destruktori: " << "Tuhotaan muisti!"<< endl;
}

void Game::aloitaPeli() {

    int arvaus;
    do {
        cout << "Arvaa luku välillä 1-20: ";
        cin >> arvaus;

        if (arvaus < etsittavaLuku) {
            cout << "Luku on suurempi." << endl;
        } else if (arvaus > etsittavaLuku) {
            cout << "Luku on pienempi." << endl;
        } else {
            cout << "Onneksi olkoon! Arvasit oikein." << endl;
        }
    } while (arvaus != etsittavaLuku);
}

