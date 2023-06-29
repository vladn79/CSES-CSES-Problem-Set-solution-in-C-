#include <iostream>
#include <string>

int main() {
    std::string s{};
    std :: cin >> s;

    char currentChar = s[0];
    int currentLength = 1;
    int maxLength = 1;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == currentChar) {
            currentLength++;
        } else {
            currentChar = s[i];
            currentLength = 1;
        }

        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    std::cout << maxLength << std::endl;

    return 0;
}
