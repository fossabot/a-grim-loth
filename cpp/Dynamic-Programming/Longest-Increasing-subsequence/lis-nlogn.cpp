#include <iterator>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <algorithm>
#include <bits/stdc++.h>
#include <chrono>
#include <cmath>
#include <complex>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                                                             \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void solve() {}
int main() {
  fast_cin();
  ll t;
  //   "Given a sequence s[0..n − 1], a subsequence is gotten by pick any subset
  //   of the sequence, but
  //       not changing the order of them.What is the longest sequence such that
  //       each
  //           element is bigger than the previous one
  //       ? "
  int a[] = {1,2,3,4,5,6,9,8};
  int n = sizeof(a)/sizeof(a[0]);
 set<int> st;
 set<int>::iterator it;
 st.clear();
 
 for(unsigned i = 0; i < n; ++i) {
     st.insert(a[i]);
     it = st.find(a[i]);
     it++;
     if(it!=st.end()) st.erase(it);
 }
 
  std::cout << "Longest Increasing subsequrence " << st.size() << std::endl;
}