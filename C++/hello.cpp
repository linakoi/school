#include <bitset>
#include <iostream>
#include <cstdio>
using namespace std;

int Add(int x, int y) {
    return x + y;
}

int main() {
    int (*fp)(int, int) = Add;  // 関数 Add のアドレスを保持する関数ポインタ fp
    int result = fp(3, 5);      // 関数ポインタ fp を介して関数 Add が実行される
    cout << result << endl;  // 8

    return 0;
}
