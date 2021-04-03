#include <iostream>
#include <random>

// google の c++ コーディング規約で 定数の前には k をつけようと言われている
const double kTax = 0.8;

int main()
{
    std::random_device seed_gen;
    std::mt19937 engine(seed_gen);
    std::uniform_int_distribution<> dist(0, 9);
    int lucky = dist(engine);

    std::cout << "ラッキーナンバー = " << lucky << std::endl;

    // 倍精度浮動小数
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
    std::cout << "x+y=" << x + y << std::endl;
}