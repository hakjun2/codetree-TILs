#include <iostream>
using namespace std;
int NumA(int n, int m){
    int a = 1;
    int b;
    for(int i = 0 ; i < n ; i++){
        if(n % a == 0 && m % a == 0) b = a;
        a++;
    }
    return b;
}
int main() {
    int n,m;
    cin >> n >> m;
    cout << NumA(n,m);
    // 여기에 코드를 작성해주세요.
    return 0;
}