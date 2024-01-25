#include <iostream>
#include <cstdlib>  // sisältää rand- ja srand-funktiot
#include <ctime>    // sisältää time-funktion

int main() {
    // Alusta satunnainen luku generaattori
    srand(time(0));

    // Määritä pelin rajat
    //int alaraja = 1;
   // int ylaraja = 20;


    // Generoi satunnainen luku annetulta väliltä
    int etsittavaLuku = rand() % 20;

    // Muuttujat pelaajan arvauksen ja pelitilanteen seuraamiseksi
    int arvaus;
    int yritykset = 0;

    std::cout << "Arvaa luku välillä 1-20 " << std::endl;

    do {
        std::cout << "Syötä arvauksesi: ";
        std::cin >> arvaus;

        yritykset++;

        if (arvaus < etsittavaLuku) {
            std::cout << "Arvauksesi on liian pieni." << std::endl;
        } else if (arvaus > etsittavaLuku) {
            std::cout << "Arvauksesi on liian suuri." << std::endl;
        } else {
            std::cout << "Onneksi olkoon! Arvasit oikein" << std::endl;
            std::cout << "Tarvitsit " << yritykset << " yritystä." << std::endl;
        }

    } while (arvaus != etsittavaLuku);

    return 0;
}

