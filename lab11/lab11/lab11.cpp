#include <iostream>
#include "Header.hpp"
#include <string>

int main() {
    system("color 2");
    int i;
    std::string answer;
    std::string exit;
    std::string izmenit;
    exit = '1';
    izmenit = '2';
    while (1) {
        std::cout << "Vvedite nomer ustroistv" << std::endl;

        std::cin >> i;

        mt::Ustroistv Ustroistv(i);
        std::cout << "Vi hotite POLUCIT(1) ili izmeniti(2) data?" << std::endl;
        std::cin >> answer;
        if (answer == izmenit) {
            Ustroistv.Poll();
        }
        else {
            Ustroistv.Print();
        }

        std::cout << "Vi hotite exit(1)?" << std::endl;
        std::cin >> answer;
        if (answer == exit)
            break;
        system("cls");
    }
 }

