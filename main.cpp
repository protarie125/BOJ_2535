#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

using vlll = vector<tuple<ll, ll, ll>>;

ll n;
vlll lst;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  while (0 < (n--)) {
    ll a, b, c;
    cin >> a >> b >> c;

    lst.push_back({c, a, b});
  }

  sort(lst.begin(), lst.end(), greater());

  vl alget(101, 0);

  auto i = 0;
  auto o = 0;
  while (o < 3) {
    const auto& [c, a, b] = lst[i];
    ++i;

    if (alget[a] < 2) {
      ++alget[a];
      ++o;
      cout << a << ' ' << b << '\n';
    } else {
      continue;
    }
  }

  return 0;
}