/**
 * AUTHOR: FARIS ABUFARHA
 *
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef string String;

#define FAST_AF ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define mp make_pair
#define pb push_back
#define inF freopen("input.in", "r", stdin);
#define outF freopen("output.in", "w", stdout);
#define endl '\n'
#define el endl
#define EL el
#define COUT cout
#define MOD 1000000007
#define mm(arr) memset(arr, 0, sizeof(arr))
#define F first
#define S second
#define null NULL
#define umap unordered_map
#define  uset unordered_set
#define prioq priority_queue
#define heap priority_queue
#define min_heap     priority_queue <int, vector<int>, greater<int> >
#define zerof __builtin_clz
#define  zerol __builtin_ctzl
#define onecnt __builtin_popcount
#define parity __builtin_parity // even or odd parity (number of 1s bits) 0 if even else 1
#define toUPPER(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define toLOWER(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define  contains(z, s) (z.find(s) != std::string::npos)

const long double PI = atan(1) * 4.0;
const int N = 2e5 + 1;


umap<char, vector<char>> buildGraph(vector<pair<char, char>> edges) {
    umap<char, vector<char>> adj;
    for (auto edge: edges) {
//        pair<char, char> pr = edge;
        char a = edge.F;
        char b = edge.S;
//        if (adj.count(a) == 0) {
//            adj[a] = {};
//        }
//        if (adj.count(b) == 0) {
//            adj[b] = {};
//        }
        adj[a].push_back(b);
        adj[b].push_back(a);

    }


    return adj;
}

bool has_path(umap<char, vector<char>> &adj, char src, char dst, uset<char> visited) {
    if(src == dst) {
        return true;
    }
    if(visited.insert(src).second == 0) { // already visited
        return false;
    }
    visited.insert(src);
    for (char x: adj[src]) {
        if (has_path(adj, x, dst, visited)) {
            return  true;
        }

    }



    return false;
}



int main() {
//    FAST_AF

    vector<pair<char, char>> edges{
            {'i', 'j'},
            {'k', 'i'},
            {'m', 'k'},
            {'k', 'l'},
            {'o', 'n'}
    };

    auto adj = buildGraph(edges);
//    for (auto x: ans) {
//        cout << x.F << " : ";
//        for (auto y : x.S) {
//            cout << y << " ";
//
//        }
//        cout << el;
//    }
    uset<char> st;
    cout << has_path(adj, 'i', 'n', st) << el;

    return 0;
}