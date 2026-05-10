#include <iostream>
#include <cctype>
#include <string>
#include <utility>

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
    int A, B, C;
    std::cin >> A >> B >> C; 
    if (A == B)
    {
        std::cout << "NO" << std::endl;
        return 0;
    }
    for (int i = 1; i < 10000; i++)
    {
        if ((B * i + C) % A == 0)
        {
            std::cout << "YES" << std::endl;
            return 0;
        }
    }
    std::cout << "NO" << std::endl;
    return 0;
}