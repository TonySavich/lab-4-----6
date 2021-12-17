#include <iostream>
#include <string>

struct DataI
{
    int adress;
    int name;
    int data_t;
    int data_d;
};

namespace mt {

    class Ustroistv {

    public:
        Ustroistv(int i);
        ~Ustroistv();
        void Print();
        void Poll();




    private:
        DataI m_mas[5];
        int mario;
    };
}