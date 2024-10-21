#include <iostream>
using namespace std;
void printSubset(char su[], int si) {// ��ƨӦC�L�l���X
    cout << "{ ";
    for (int i = 0; i < si; ++i) {
        cout << su[i] << " ";
    }
    cout << "}" << endl;
}
void generateSubsets(char set[], char su[], int in, int si, int subs) {// ���j�ͦ��Ҧ��l���X
    if (in == si) {
        printSubset(su, subs);
        return;
    }
    generateSubsets(set, su, in + 1, si, subs);    // ����ܷ�e����
    su[subs] = set[in];
    generateSubsets(set, su, in + 1, si, subs + 1);// ��ܷ�e����
}
int main(void) {
    int n;
    cout << "�п�J���X�������Ӽ�: ";
    cin >> n;
    char se[100], su[100];
    cout << "�п�J���X������: ";
    for (int i = 0; i < n; ++i) {
        cin >> se[i];
    }
    cout << "�Ҧ����l���X�p�U:" << endl;
    generateSubsets(se, su, 0, n, 0);
}
