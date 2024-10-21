#include <iostream>
using namespace std;
long A(long m, long n) {
        if (m == 0) {
            return n + 1;//回傳n+1
        }
        else if (n == 0) {
            return A(m - 1, 1);//回傳A(m-1,1)
        }
        else {
            return A(m - 1, A(m, n - 1));//回傳A(m - 1, A(m, n - 1))
        }
}

int main(void) {
    int m, n;
    cout << "輸入兩個數:" << endl;
    cin >> m >> n;  // 輸入的m和n值
    cout << A(m, n) << endl;  // 輸出A遞迴的結果
}
