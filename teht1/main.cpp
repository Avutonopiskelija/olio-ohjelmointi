#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    srand(time(0));


    int etsittavaLuku = rand() % 20;

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

