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

bool can_get_to(int t0, int x0, int y0,
                int t, int x, int y)
{
    auto dist = std::abs(x - x0) + std::abs(y - y0);
    if (dist > (t - t0))
    {
        return false;
    } 

    if (dist == (t - t0))
    {
        return true;
    }
    // t - t0 > dist
    auto r = (t - t0) - dist;
    if (r % 2 == 0) return true;
    return false
}

int main() {
    int N;
    std::cin >> N;
    int t0, x0, y0;
    t0 = 0;
    x0 = 0;
    y0 = 0;
    for (int i = 0; i < N; i++)
    {
        int t, x, y;
        std::cin >> t >> x >> y;
        if (!can_get_to(t0, x0, y0, t, x, y))
        {
            std::cout << "No" << std::endl;
            return 0;
        }

        t0 = t, x0 = x, y0 = y;
    } 
    std::cout << "Yes" << std::endl;
    return 0;
}