//
// Created by Ater on 2019/09/18.
//
#include <iostream>
using namespace std;

int count(char str[10000], char ch){
    int counter = 0;
    for (int i = 0; i < 10000; ++i) {
        //while (str[i] != '¥0') {
            if (str[i] == ch) {
                ++counter;
            } else;
        //}
    }
    return counter;
}

int main() {
    char input[10000];
    cout << "文字列を入力してください" << endl;
    cin >> input;
    char x;
    cout << "数を調べる文字を入力してください" << endl;
    cin >> x;
    cout << count(input, x) << endl;
}
