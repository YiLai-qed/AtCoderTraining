// https://atcoder.jp/contests/abc060/tasks/abc060_b
#include <iostream>
#include <cctype>
#include <string>
#include <utility>
#include <vector>

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
    std::vector<int> a;
    a.reserve(n);

    int b[10] = {0};
    for (int i = 0; i < n; i++)
    {
        int x;
        std::cin >> x;
        if (x <= 399)
        {
            b[0] = 1;
        }
        else if (x <= 799)
        {
            b[1] = 1;
        }
        else if (x <= 1199)
        {
            b[2] = 1;
        }
        else if (x <= 1599)
        {
            b[3] = 1;
        }
        else if (x <= 1999)
        {
            b[4] = 1;
        }
        else if (x <= 2399)
        {
            b[5] = 1;
        }
        else if (x <= 2799)
        {
            b[6] = 1;
        }
        else if (x <= 3199)
        {
            b[7] = 1;
        }
        else
        {
            b[8] += 1;
        }
    }

    int min = 0;
    int max = 0;
    for (int i = 0; i < 8; i++)
    {
        min += b[i];
        max += b[i];
    }
    min = std::max(1, min);
    max += b[8];
    std::cout << min << " " << max << std::endl;
    return 0;

}