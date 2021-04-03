#include <iostream>

int main()
{
    double x, y;
    std::cout << "x:";
    // character in ... キーボードから値の入力
    // 右シフト ... extractor 抽出子 と呼ぶ
    std::cin >> x;
    std::cout << "y:";
    std::cin >> y;

    // std::cin >> x >> y; このようにまとめることもできる

    std::cout << "x=" << x << std::endl;
    std::cout << "y=" << y << std::endl;
    std::cout << "x+y=" << x+y << std::endl;
}