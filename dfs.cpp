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
//void dfs(int node, vector<int> adj[], vector<bool> &visited, vector<int> &ans) {
//    visited[node] = true;
//    for (int i = 0; i < adj[node].size(); i++) {
//        if (!visited[adj[node][i]]) {
//            dfs(adj[node][i], adj, visited, ans);
//        }
//    }
//    ans.push_back(node);
//}




void dfs(umap<char, vector<char>> &adj, char src) {

    stack<char> stk;
    stk.push(src);
    while (!stk.empty()) {
        char current = stk.top();

        cout << stk.top() << " ";
        stk.pop();


        for (char z: adj[current]) {
            stk.push(z);

        }




    }
}



void dfs_rec(umap<char, vector<char>> &adj, char src) {

    cout << src << " ";
    for (char x: adj[src]) {
        dfs(adj, x);

    }

}


// ====================================================
    // dfs ex 7.13 
bool visited[6] = {false};
void dfs_int(vector<int> adj[], int src) {

    if (visited[src]) { return; }

    cout << src << " ";
    visited[src] = true;

    for (auto x: adj[src]) {

        dfs_int(adj, x);

    }


}

// ====================================================
// has path

bool dfs_has_path(umap<char, vector<char>> &adj, char src, char target) {
    if (src == target) {
        return true;
    }

    for (char x: adj[src]) {
        if (dfs_has_path(adj, x, target)) {
            return true;
        }
    }

    return false;

}


// ====================================================


int main() {
//    FAST_AF

    //ex 7.13 
    vector<int> adj[6];
    adj[1] = {2, 4};
    adj[2] = {3,5};
    adj[3] = {5};
    adj[5] = {2};
    adj[4] = {};

    dfs_int(adj, 1);
    
    
//     umap<char, vector<char>> adj;
//     adj['a'] = {'b', 'c'};
//     adj['b'] = {'d'};
//     adj['c'] = {'e'};
//     adj['d'] = {'f'};
//     adj['e'] = {};
//     adj['f'] = {};

//     dfs(adj, 'a');


    return 0;
}
