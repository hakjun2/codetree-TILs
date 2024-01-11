#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 1000
int grid[MAX_N][MAX_N];
int n,m;
int main() {
    for(int i = 0 ; i < MAX_N ; i++) {
        for(int j = 0 ; j < MAX_N ; j++)
        grid[i][j] = 0;
    }

    cin >> n >> m;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            cin >> grid[i][j];
        }
    }
    int cnt = 0; int maxc = 0;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            cnt = grid[i][j] + grid[i+1][j] + grid[i+1][j+1];
            maxc = max(cnt, maxc);
            cnt = grid[i][j+1] + grid[i+1][j+1] + grid[i+1][j];
            maxc = max(cnt, maxc);
            cnt = grid[i][j] + grid[i][j+1] + grid[i+1][j];
            maxc = max(cnt, maxc);
            cnt = grid[i][j] + grid[i][j+1] + grid[i+1][j+1];
            maxc = max(cnt, maxc);
            cnt = grid[i][j] + grid[i][j+1] + grid[i][j+2];
            maxc = max(cnt, maxc);
            cnt = grid[i][j] + grid[i+1][j] + grid[i+2][j];
            maxc = max(cnt, maxc);
        }
    }
    cout << maxc;
    return 0;
}