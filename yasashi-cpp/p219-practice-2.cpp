// 関数オーバーロードと関数テンプレート
#include <iostream>

// 二乗をする関数 square を int, double で作成する
int square(int x)
{
    return x * x;
}

double square(double x)
{
    return x * x;
}

// 関数テンプレート
// template <classs テンプレート引数のリスト>
template <class T>
T squaret(T x)
{
    return x * x;
}

int main()
{
    double num;
    for (int i = 0; i < 2; i++)
    {
        std::cin >> num;
        // std::cout << square(num) << std::endl;
        std::cout << squaret(num) << std::endl;
    }
}