#include <iostream>
#include <vector>

int main() {
    long long int n;
    std::cin >> n;

    std::vector<int> dp(n);

    long long int num = 0; 
    for (int i = 0; i < n ; i++) {
        std::cin >> dp[i];
    }
    for (int i = 0; i < n - 1 ; i++) {
        while (dp[i] > dp[i+1]){
            dp[i+1]++;
            num++;
        }
    }
    std::cout << num;
    return 0;
}
