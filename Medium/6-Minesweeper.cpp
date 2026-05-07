#include <cctype>
#include <iostream>
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

int check_surrounding(int x, int y,
                      const std::vector<std::vector<char>> &grid) {
  int res = 0;
  int h = grid.size();
  int w = grid[0].size();
  for (int i = -1; i <= 1; i++) {
    for (int j = -1; j <= 1; j++) {
      if (i == 0 && j == 0)
        continue;
      auto nx = x + i;
      auto ny = y + j;
      if (nx >= 0 && nx < h && ny >= 0 && ny < w) {
        if (grid[nx][ny] == '#') {
          res += 1;
        }
      }
    }
  }
  return res;
}

int main() {
  int h, w;
  std::cin >> h >> w;
  std::string s;
  std::vector<std::vector<char>> grid(h, std::vector<char>(w));
  for (int i = 0; i < h; i++) {
    std::cin >> s;
    for (int j = 0; j < w; j++) {
      grid[i][j] = s[j];
    }
  }

  auto result = grid;

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (grid[i][j] == '.') {
        result[i][j] = check_surrounding(i, j, grid) + '0';
      }
    }
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      std::cout << result[i][j];
    }
    std::cout << std::endl;
  }

  return 0;
}