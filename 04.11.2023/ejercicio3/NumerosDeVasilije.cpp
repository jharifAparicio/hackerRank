#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>

using namespace std;

void recibirNumeros(int &a, int &b, int &c) {
    std::cin >> a >> b >> c;
}

vector<int> find_numbers(int n, int x, int m) {
    vector<int> nums(x);
    iota(nums.begin(), nums.end(), 1); // Rellenar nums con [1, 2, ..., x]
    
    queue<pair<vector<int>, int>> q;
    q.push({{}, 0});

    while (!q.empty()) {
        auto [comb, start] = q.front();
        q.pop();

        if (comb.size() == n) {
            if (accumulate(comb.begin(), comb.end(), 0) == m) {
                return comb;
            }
            continue;
        }

        for (int i = start; i < nums.size(); ++i) {
            if (accumulate(comb.begin(), comb.end(), 0) + nums[i] > m) {
                break; // Poda: no considerar números que superen la suma deseada
            }

            vector<int> new_comb = comb;
            new_comb.push_back(nums[i]);
            q.push({new_comb, i + 1});
        }
    }

    return {};
}

int main() {
    int numcase;
    std::cin >> numcase;
    int num1, num2, num3;
    for (int i = 0; i < numcase; ++i) {
        recibirNumeros(num1, num2, num3);
        vector<int> result = find_numbers(num1, num2, num3);
        if (!result.empty()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
