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
//

void bfs(umap<char, vector<char>> &adj, char src) {
    queue<char> q;
    q.push(src);
    while (!q.empty()) {
        char current = q.front();
        q.pop();
        cout << current << " ";
        for (char x: adj[current]) {
            q.push(x);

        }

    }


}



int main() {
//    FAST_AF

    umap<char, vector<char>> adj;
    adj['a'] = {'b', 'c'};
    adj['b'] = {'d'};
    adj['c'] = {'e'};
    adj['d'] = {'f'};
    adj['e'] = {};
    adj['f'] = {};

    bfs(adj, 'a');


    return 0;
}