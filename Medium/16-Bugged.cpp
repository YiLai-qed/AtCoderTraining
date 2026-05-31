#include <iostream>
#include <cctype>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
#include <numeric>

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
  int N;
  std::cin >> N;
  std::vector<int> S (N); 
  for (int i = 0; i < N; i++)
  {
    std::cin >> S[i];
  }

  std::ranges::sort(S, std::less<int>());
  auto sum = std::accumulate(S.begin(), S.end(), 0);
  for (int i = 0; i < N; i++)
  {
    if (sum % 10 == 0)
    {
      if (S[i] % 10 != 0)
      {
        sum -= S[i];
      }
    }
    else
    {
      std::cout << sum << std::endl;
      return 0;
    }
  }
    std::cout << (sum % 10 == 0 ? 0 : sum)<< std::endl;
  return 0;
}