#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void generateGrayCode(int n) {
    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer for n." << endl;
        return;
    }
    for (int i = 0; i < pow(2, n); i++) {
        int grayCode = i ^ (i >> 1); 
        for (int j = n - 1; j >= 0; j--) {
            cout << ((grayCode & (1 << j)) ? '1' : '0');
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    generateGrayCode(n);
    return 0;
}

