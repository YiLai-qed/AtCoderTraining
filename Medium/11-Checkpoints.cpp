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
    int N, M;
    std::cin >> N >> M;
    std::vector<std::pair<int, int>> students;
    std::vector<std::pair<int, int>> checkpoints;
    std::vector<int> des (N);
    for (int i = 0; i < N; i++)
    {
        int a, b;
        std::cin >> a >> b;
        students.push_back(std::make_pair(a, b));
    }

    for (int i = 0; i < M; i++)
    {
        int c, d;
        std::cin >> c >> d;
        checkpoints.push_back(std::make_pair(c, d));
    }

    for (int i = 0; i < N; i++)
    {
        int min = INF;
        auto [a, b] = students[i];
        for (int j = M-1; j >= 0; j--)
        {
            auto [c, d] = checkpoints[j];
            auto dist = std::abs(c-a) + std::abs(d-b);
            if (dist <= min)
            {
                des[i] = j+1;
                min = dist;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        std::cout << des[i] << std::endl;
    }
    return 0;
}