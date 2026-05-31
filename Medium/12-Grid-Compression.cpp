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
    int H, W;
    std::cin >> H >> W;
    auto grid = std::vector<std::vector<char>>(H, std::vector<char>(W)); 

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            char c;
            std::cin >> c;
            grid[i][j] = c;
        }
    }

    for (int i = 0; i < H; i++)
    {
        bool all_white = true;
        for (int j = 0; j < W; j++)
        {
            all_white &= (grid[i][j] == '.' || grid[i][j] == 'x');
        }

        if (all_white)
        {
            for (int j = 0; j < W; j++)
            {
                grid[i][j] = 'x';
            }
        }
    }

    for (int j = 0; j < W; j++)
    {
        bool all_white = true;
        for (int i = 0; i < H; i++)
        {
            all_white &= (grid[i][j] == '.' || grid[i][j] == 'x');
        }

        if (all_white)
        {
            for (int i = 0; i < H; i++)
            {
                grid[i][j] = 'x';
            }
        }
    }

    for (int i = 0; i < H; i++)
    {
        bool printed = false;
        for (int j = 0; j < W; j++)
        {
            if (grid[i][j] != 'x')
            {
                std::cout << grid[i][j];
                printed = true;
            }
        }
        if (printed) std::cout << std::endl;
    }

    return 0;
}