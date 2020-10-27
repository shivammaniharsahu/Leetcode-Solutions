#include <cmath>
#include <functional>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <list>
#include <time.h>
#include <math.h>
#include <random>
#include <deque>
#include <queue>
#include <cassert>
#include <unordered_map>
#include <unordered_set>
#include <iomanip>
#include <bitset>
#include <sstream>
#include <chrono>
#include <cstring>

using namespace std;

typedef long long ll;

#ifdef iq
  mt19937 rnd(228);
#else
  mt19937 rnd(chrono::high_resolution_clock::now().time_since_epoch().count());
#endif

vector <int> need;

int n, m;

bool in(vector <int> a) {
  if (a.size() > need.size()) return false;
  int ptr = (int) need.size() - (int) a.size();
  for (int i = 0; i < (int) a.size(); i++) {
    if (ptr == (int) need.size()) return true;
    if (a[i] <= need[ptr]) {
      ptr++;
    }
  }
  return (ptr == (int) need.size());
}

map <vector <int>, double> mp;
double iv;

double ans(vector <int> a, int tot) {
  sort(a.begin(), a.end());
  if (!in(a)) {
    return 1e18;
  }
  if (mp.count(a)) return mp[a];
  if (tot == n) {
    return 0;
  } else {
    vector <pair <int, double> > go;
    for (int i = 0; i < (int) a.size(); i++) {
      a[i]++;
      double ret = ans(a, tot + 1);
      go.push_back({1, ret});
      a[i]--;
    }
    if ((int) a.size() != m) {
      auto b = a;
      b.insert(b.begin(), 1);
      go.push_back({m - (int) a.size(), ans(b, tot + 1)});
    }
    auto check = [&] (double x) {
      double sum = 1;
      for (auto c : go) {
        sum += min(c.second, x) * c.first / m;
      }
      return sum <= x;
    };
    double sum = 1;
    for (auto c : go) sum += c.second * c.first / m;
    double vl = 0, vr = sum;
    int it = 100;
    while (it--) {
      double vm = (vl + vr) / 2;
      if (check(vm)) vr = vm;
      else vl = vm;
    }
    return mp[a] = vr;
  }
}

int main() {
#ifdef iq
  freopen("a.in", "r", stdin);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 5;
  cin >> t;
  auto solve = [&] () {
    mp.clear();
    cin >> n >> m;
    iv = 1 / (double) m;
    int k;
    cin >> k;
    need.resize(k);
    for (int i = 0; i < k; i++) cin >> need[i];
    sort(need.begin(), need.end());
    vector <int> go;
    cout << fixed << setprecision(20) << ans(go, 0);
  };
  for (int tc = 1; tc <= t; tc++) {
    cout << "Case #" << tc << ": ";
    solve();
    cout << '\n';
  }
}
