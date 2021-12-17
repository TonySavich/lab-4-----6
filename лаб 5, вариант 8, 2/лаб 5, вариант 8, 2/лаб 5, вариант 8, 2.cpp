
#include <iostream>
#include <fstream>




int main()
{
    setlocale(LC_ALL, "Rus");
    std::ifstream in("input.txt");
    std::ofstream out("output.txt");
    std::string s;
    int N, k, l, e;
    l = 1;
    k = 0;
    in >> N;
    std::string mas[100];
    std::string mass[100];
    e = 0;



    while (!in.eof()) {
        in >> s;
        for (int i = 0; i < s.length(); i++) {
            for (int j = i + 1; j < s.length(); j++) {
                if (s[i] == s[j]) {
                    l = l + 1;
                }
            }
            if (l < 3) {
                l = 1;
            }
            else {
                mas[e] = s;
                e = e + 1;
                l = 1;
                
            }
        }
    }
    int  a;
    
    std::string vin;
    vin = 'vin';
    
    a = 0;

    for (int i = 0; i <e;i++) {
        for (int j = i + 1; j < e; j++) {
            if (mas[i] == mas[j]) {
                mas[j] = 'vin';
            }
        }
        if (mas[i] == vin) {

        }
        else {
            mass[a] = mas[i];
            a = a + 1;
        }
    }
    std::string ki;
    std::string kj;

    for (int i = 0; i < a; i++) {
        for (int j = i + 1; j < a; j++) {
            ki = mass[i].length();
            kj = mass[j].length();
            if (ki > kj) {
                std::string tmp = mass[i];
                mass[i] = mass[j];
                mass[j] = tmp;

            }
        }
    }





    for (int i = 0; i < N; i++) {
        std::cout << mass[i] << " ";
    }


}

