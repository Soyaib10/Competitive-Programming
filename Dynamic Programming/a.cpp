#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
const int N = 105, inf = 1e9;
string s[N];
bool vis[N][N];
int p[] = {0, -1, 0, 1};
int r[] = {1, 0, -1, 0};

int par[105][105];
 
void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> s[i];
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    pair <int, int> start, end;
    start = {a, b};
    end = {c, d};
    
    queue <pair <int, int>> q;
    q.push(start);
    vis[start.first][start.second] = true;
    int cnt = 0;
    par[a][b] = 0;
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        cnt++;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int row = p[i] + x;
            int col = r[i] + y;
            if (row >= 0 and row < n and col >= 0 and col < n and s[row][col] != 'X' and !vis[row][col]) {
                vis[row][col] = true;
                q.push({row, col});
                par[row][col] = par[x][y] + 1;
            }
        }
    }
    cout << par[c][d] << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
 
    solve();
}
   