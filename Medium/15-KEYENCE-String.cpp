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
   std::string s;
   std::cin >> s;
   if (s == std::string {"keyence"})
   {
     std::cout << "YES" << std::endl;
     return 0; 
   }
   for (int i = 0; i < s.size() ; i++)
   {
    for (int j = i+1; j < s.size(); j++)
    {
      auto res = s.substr(0, i) + s.substr(j, s.size() - j);
      if (res == std::string {"keyence"})
      {
        std::cout << "YES" << std::endl;
        return 0;
      }
    }
   }

   std::cout << "NO" << std::endl;
   return 0;
}