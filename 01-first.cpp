// https://www.youtube.com/watch?v=pLuZOUusBYI

// input output stram <> ... コンパイラがどこにあるか勝手に探してくれる
// c++ [ファイル名] && ./a.out
#include <iostream>

// 名前空間
using namespace std;

int main()
{
    // cmd + shift + l で同じ文字列の複数選択 (VSCode

    // ストリームにデータを流し込む console out 的な？
    // stream ... 流れの意味。標準出力ストリーム
    cout << "初めてのプログラム \n";
    cout << "画面に出力 \n";
    // 名前空間つければ↓↓のように書かなくてOK
    // std::cout << "初めてのプログラム \n";
    // std::cout << "画面に出力 \n";
}

// $ file 01-first.cpp
// 01-first.cpp: c program text, UTF-8 Unicode text
// $ file ./a.out
// ./a.out: Mach-O 64-bit executable x86_64

// 逆アセンブラ
// objdump -d -M intel -C a.out | less
// https://nxmnpg.lemoda.net/ja/1/objdump
// [-M options|--disassembler-options=options]
// [-d|--disassemble]
// intelだと動かなかった。macだから？
// [-C|--demangle[=style] ]

// objdump -d a.out | less  これなら動いた
// hexdump a.out | less めっちゃ数字の羅列
