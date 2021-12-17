#include <iostream>
#include <string>
#include "Header.hpp"


namespace mt {


    Ustroistv::Ustroistv(int i) {
        mario = i;
    }

    Ustroistv::~Ustroistv() {

    }

    void Ustroistv::Print() {
        std::cout << "Adress: " << m_mas[mario].adress << " Name: ";
        std::cout << m_mas[mario].name << std::endl << "Temperature: " << m_mas[mario].data_t << " Davlenie: " << m_mas[mario].data_d << std::endl;
    }
    void Ustroistv::Poll() {
        std::cout << "Adress" << std::endl;
        std::cin >> m_mas[mario].adress;
        std::cout << "name" << std::endl;
        std::cin >> m_mas[mario].name;
        std::cout << "Temperature" << std::endl;
        std::cin >> m_mas[mario].data_t;
        std::cout << "Davlenie" << std::endl;
        std::cin >> m_mas[mario].data_d;
    }



}