#include <bitset>
#include <iostream>
#include <cstdio>
using namespace std;

int Add(int x, int y) {
    return x + y;
}

int main() {
    int (*fp)(int, int) = Add;  // �֐� Add �̃A�h���X��ێ�����֐��|�C���^ fp
    int result = fp(3, 5);      // �֐��|�C���^ fp ����Ċ֐� Add �����s�����
    cout << result << endl;  // 8

    return 0;
}
