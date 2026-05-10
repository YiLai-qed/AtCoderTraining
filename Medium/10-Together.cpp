#include <iostream>
#include <cctype>
#include <string>
#include <utility>
#include <vector>
#include <set>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef std::pair<int, int> pii;
typedef std::pair<ll, ll> pll;
typedef std::pair<ll, int> plli;
typedef std::pair<int, ll> pill;
typedef std::pair<std::pair<int, int>, int> piii;

const int INF = 0x3f3f3f3f;
const ll INFL = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1e9 + 7;

int main() {
    int n;
    std::cin >> n;
    std::vector<int> A;
    for (int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        A.push_back(a);
    } 

    std::set<int> seen;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int base = A[i];
        if (seen.contains(base)) continue;
        seen.insert(base);

        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (std::abs(base - A[j]) <= 1)
            {
                count += 1;
            }
        }
        max = std::max(max, count);
    }   

    std::cout << max << std::endl;
    return 0;
}