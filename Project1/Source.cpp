#include <iostream>
using namespace std;
long A(long m, long n) {
        if (m == 0) {
            return n + 1;//�^��n+1
        }
        else if (n == 0) {
            return A(m - 1, 1);//�^��A(m-1,1)
        }
        else {
            return A(m - 1, A(m, n - 1));//�^��A(m - 1, A(m, n - 1))
        }
}

int main(void) {
    int m, n;
    cout << "��J��Ӽ�:" << endl;
    cin >> m >> n;  // ��J��m�Mn��
    cout << A(m, n) << endl;  // ��XA���j�����G
}
