#include <filesystem>
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
    std::vector<std::vector<char>> grid = std::vector<std::vector<char>>(H, std::vector<char>(W));
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            std::cin >> grid[i][j];
        }
    } 

    // If any # square is isolated, reject
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (grid[i][j] == '#')
            {
                auto has_adj_black = false;

                for (int dx = -1; dx <= 1; dx++)
                {
                    for (int dy = -1; dy <= 1; dy++)
                    {
                        if (std::abs(dx + dy) != 1) continue;
                        auto ni = i + dx;
                        auto nj = j + dy;
                        if (ni >= 0 && ni < H && nj >= 0 && nj < W)
                        {
                            has_adj_black |= grid[ni][nj] == '#';
                        }
                    }
                }

                if (!has_adj_black)
                {
                    std::cout << "No" << std::endl;
                    return 0;
                }
            }
        }
    }

    std::cout << "Yes" << std::endl;
    return 0;
}