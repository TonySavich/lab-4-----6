// лабораторная работа 4, вариант 8, 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    const int n = 3;
    const int m = 3;
    int maxch, maxmat, p, l;
    p = 1;
    maxmat = 0;
    maxch = 0;
    l = 0;
    int matrix[n][m];
    for (int i = 0; i < n;i++) {
        for (int j = 0;j < m;j++) {
            std::cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n;i++) {
        for (int j = 0;j < m;j++) {
            p = matrix[j][i] * p;
                l = i;
        }

        if (maxmat < p) {
            maxmat = p;
            maxch = l;
        }
        p = 1;
    }
    for (int i = 0; i < n;i++) {
        for (int j = 0;j < m;j++) {
            if (j == maxch) {
                matrix[i][j] = matrix[i][j] - 3;
                std::cout << matrix[i][j]  << " ";
            }
            else {
                std::cout << matrix[i][j] << " ";
            }
            
        }
            std::cout << "\n";
        
    }
}


