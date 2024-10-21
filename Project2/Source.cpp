#include <iostream>
using namespace std;
void printSubset(char su[], int si) {// 函數來列印子集合
    cout << "{ ";
    for (int i = 0; i < si; ++i) {
        cout << su[i] << " ";
    }
    cout << "}" << endl;
}
void generateSubsets(char set[], char su[], int in, int si, int subs) {// 遞迴生成所有子集合
    if (in == si) {
        printSubset(su, subs);
        return;
    }
    generateSubsets(set, su, in + 1, si, subs);    // 不選擇當前元素
    su[subs] = set[in];
    generateSubsets(set, su, in + 1, si, subs + 1);// 選擇當前元素
}
int main(void) {
    int n;
    cout << "請輸入集合的元素個數: ";
    cin >> n;
    char se[100], su[100];
    cout << "請輸入集合的元素: ";
    for (int i = 0; i < n; ++i) {
        cin >> se[i];
    }
    cout << "所有的子集合如下:" << endl;
    generateSubsets(se, su, 0, n, 0);
}
