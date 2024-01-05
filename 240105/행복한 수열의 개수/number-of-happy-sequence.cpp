#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 100

int grid[MAX_N][MAX_N];

int main() {
    int n, m;
    cin >> n >> m;
    if(m==1) {
        cout << 2*n;
        return 0;
    }
    for(int i = 0 ; i < n ; i++) {
        for( int j = 0 ; j < n ; j++) {
            cin >> grid[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0 ; i < n ; i++) {
        int cnt_same = 0;
        for(int j = 0 ; j<n-1 ; j++) {
            if(grid[i][j] == grid[i][j+1]) {
                cnt_same++;
            }
            if(cnt_same == m-1) {
                cnt++;
                break;
            }
        }
    }
    for(int j = 0 ; j < n ; j++) {
        int cnt_same = 0;
        for(int i = 0 ; i<n-1 ; i++) {
            if(grid[i][j] == grid[i+1][j]) {
                cnt_same++;
            }
            if(cnt_same == m-1) {
                cnt++;
                break;
            }
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}