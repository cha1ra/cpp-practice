#include <iostream>

int main() {
    int x, y;
    // x, y に値を宣言しないと 何が代入されるわからない
    x = 63;
    y = 18;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    // 18や63は整数リテラルと呼ぶ
    std::cout << "x+y=" << (x+y) << std::endl;
    // int型で宣言しているので切り捨てられる
    std::cout << "(x+y)/2=" << (x+y)/2 << std::endl;
}