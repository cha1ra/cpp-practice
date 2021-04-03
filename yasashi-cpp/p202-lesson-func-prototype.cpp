#include <iostream>

using namespace std;

// 関数プロトタイプ宣言
// 戻り値の型 関数名(引数リスト)
int max(int a, int b);

int main()
{
    int a, b;
    cout << "数字を2つ入力してください" << endl;
    cin >> a >> b;
    cout << max(a, b) << endl;
}

int max(int a, int b)
{
    return a < b ? b : a;
}