#include <cstring>
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
    int n;
    std::string s;
    std::cin >> n >> s;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int res = 0;
        int letters[26] = {0};
        for (int l = 0; l <= i; l++)
        {
            int n = s[l] - 'a';
            if (letters[n] == 0)
            {
                letters[n] = 1;
            }
        } 

        for (int r = i + 1; r < n; r++)
        {
            int n = s[r] - 'a';
            if (letters[n] == 1)
            {
                res += 1;
                letters[n] = 0;
            }
        }
        max = std::max(max, res);
    } 
    std::cout << max << std::endl;
    return 0;
}