#include <iostream>

using namespace std;

int main()
{
    int a;
    a = 5;
    cout << "変数aの値は" << a << "です\n";
    cout << "変数aのアドレスは" << &a << "です\n";
    // 変数aの値は5です
    // 変数aのアドレスは0x7ffee3c666d8です
    // アドレスを使ってメモリ上の位置を表すことができる

    // ポインタ
    // アドレスを格納する特殊な変数
    // pAは変数aをさす

    int *pA;
    pA = &a;
    cout << "ポインタpAの値は" << pA << "です\n";

    // *演算子は関節参照演算子と呼ばれている
    // *ポインタ名
    cout << "pAの値は" << *pA << "です\n";

    // ポインタを使ってaの値を変更する
    *pA = 50;
    cout << "pAの値を50に変更" << endl;
    cout << "変数aの値は" << a << "です\n";

    return 0;
}