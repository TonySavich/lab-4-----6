

#include <iostream>

int main()
{
    std::string s;
    std::cin >> s;
    int k, q;
    q = 0;
    k = s.length();
    for (int i = 0; i < k; i++) {
        if ((s[i] == 46)||(s[i]== ';')||(s[i]==',')||(s[i] == ':')||(s[i] == '-')||(s[i] == '?')||(s[i] == '!')||(s[i] == '(')||(s[i] == ')')||(s[i] == '"')||(s[i] == 39)) {
            q = q + 1;

        }
    }
    std::cout << q;

}

