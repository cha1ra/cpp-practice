#include <iostream>
#include <random>
using namespace std;

const int N = 10;

int createRandomNum();
void BubbleSort(int *pT);

int main()
{
    int numbers[N];

    cout << "ランダムな配列を作成" << endl;
    for (int i = 0; i < N; i++)
    {
        numbers[i] = createRandomNum();
    }

    for (int i = 0; i < N; i++)
    {
        cout << numbers[i] << ",";
    }
    cout << endl;

    BubbleSort(numbers);

    for (int i = 0; i < N; i++)
    {
        cout << numbers[i] << ",";
    }
    cout << endl;

    return 0;
}

// ランダムな数の生成
int createRandomNum()
{
    std::random_device seed_gen;
    std::mt19937 engine(seed_gen());
    std::uniform_int_distribution<> dist(0, 9);
    return dist(engine);
}

// バブルソート
void BubbleSort(int *pT)
{
    bool flag = false;
    int tmp;

    do
    {
        flag = false;
        for (int i = 0; i < N - 1; i++)
        {
            // 先頭から順番に数を比較していく
            if (pT[i] > pT[i + 1])
            {
                flag = true;
                tmp = pT[i];
                pT[i] = pT[i + 1];
                pT[i + 1] = tmp;
            }
        }
    } while (flag);
}