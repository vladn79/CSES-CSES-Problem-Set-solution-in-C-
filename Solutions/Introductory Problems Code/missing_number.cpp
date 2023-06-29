#include<iostream>

int main(){
    long long int n{}, e{}, s;
    std::cin >> n;
    for (long long int i = 0; i < n - 1; i++){
        std::cin >> e;
        s += e;
    }
    std::cout << n * (n + 1) / 2 - s + 1;
    return 0;
}



    
