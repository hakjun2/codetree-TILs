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
        int cnt_same2 = 0;
        int same = 0;
        int same2 = 0;
        for(int j = 0 ; j<n-1 ; j++) {
            if(grid[i][j] == grid[i][j+1] && same == 0) {
                cnt_same++;
                same = grid[i][j];
                if(cnt_same == m-1) {
                cnt++;
                break;
            }
            if(cnt_same2 == m-1) {
                cnt++;
                break;
            }
                continue;
            }
            if(grid[i][j] == grid[i][j+1] && grid[i][j] == same) {
                cnt_same++;
                if(cnt_same == m-1) {
                cnt++;
                break;
            }
            if(cnt_same2 == m-1) {
                cnt++;
                break;
            }
                continue;
            }
            if(grid[i][j] == grid[i][j+1] && same2 == 0) {
                cnt_same2++;
                same2 = grid[i][j];
                if(cnt_same == m-1) {
                cnt++;
                break;
            }
            if(cnt_same2 == m-1) {
                cnt++;
                break;
            }
                continue;
            }
            if(grid[i][j] == grid[i][j+1] && grid[i][j] == same2) {
                cnt_same2++;
                if(cnt_same == m-1) {
                cnt++;
                break;
            }
            if(cnt_same2 == m-1) {
                cnt++;
                break;
            }
                continue;
            }
        }
    }
    for(int j = 0 ; j < n ; j++) {
        int cnt_same = 0;
        int cnt_same2 = 0;
        int same = 0;
        int same2 = 0;
        for(int i = 0 ; i<n-1 ; i++) {
            
            if(grid[i][j] == grid[i+1][j] && same == 0) {
                cnt_same++;
                same = grid[i][j];
                if(cnt_same == m-1) {
                cnt++;
                break;
            }
            if(cnt_same2 == m-1) {
                cnt++;
                break;
            }
                continue;
            }
            if(grid[i][j] == grid[i+1][j] && grid[i][j] == same) {
                cnt_same++;
                if(cnt_same == m-1) {
                cnt++;
                break;
            }
            if(cnt_same2 == m-1) {
                cnt++;
                break;
            }
                continue;
            }
            if(grid[i][j] == grid[i+1][j] && same2 == 0) {
                cnt_same2++;
                same2 = grid[i][j];
                if(cnt_same == m-1) {
                cnt++;
                break;
            }
            if(cnt_same2 == m-1) {
                cnt++;
                break;
            }
                continue;
            }
            if(grid[i][j] == grid[i+1][j] && grid[i][j] == same2) {
                cnt_same2++;
                if(cnt_same == m-1) {
                cnt++;
                break;
            }
            if(cnt_same2 == m-1) {
                cnt++;
                break;
            }
                continue;
            }
            
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}