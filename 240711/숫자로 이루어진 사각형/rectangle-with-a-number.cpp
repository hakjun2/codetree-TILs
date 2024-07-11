#include <iostream>
using namespace std;
void printN(int n){
    int i=1;
    for(int j = 0 ; j < n ; j++){
        for(int w = 0 ; w < n ; w++){
            cout << i << " ";
            i++;
            if(i>9) i=1;
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    printN(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}