// 5科目の平均点
#include <iostream>

int main()
{
    int sum, score;
    sum = 0;
    std::cout << "科目1の点数" << std::endl;
    std::cin >> score;
    sum += score;
    std::cout << "科目2の点数" << std::endl;
    std::cin >> score;
    sum += score;
    std::cout << "科目3の点数" << std::endl;
    std::cin >> score;
    sum += score;
    std::cout << "科目4の点数" << std::endl;
    std::cin >> score;
    sum += score;
    std::cout << "科目5の点数" << std::endl;
    std::cin >> score;
    sum += score;
    std::cout << "平均点は" << (double)sum / 5 << "です" << std::endl;
}