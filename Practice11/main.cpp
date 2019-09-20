//
// Created by Ater on 2019/09/19.
//
#include <iostream>
using namespace std;

void aging(Person* p){

}

struct Person{
    int     age;
    double  weight;
    double  height;
};


int main(){
    Person psn1;
    cout << "年齢を入力してください。" << endl;
    cin >> psn1.age;
    cout << "体重を入力してください。" << endl;
    cin >> psn1.weight;
    cout << "身長を入力してください。" << endl;
    cin >> psn1.height;
    Person psn2;
    cout << "年齢を入力してください。" << endl;
    cin >> psn1.age;
    cout << "体重を入力してください。" << endl;
    cin >> psn1.weight;
    cout << "身長を入力してください。" << endl;
    cin >> psn1.height;
    cout << psn1.age << endl;

    //for文を用いて構造体を配列化して[1][2]で管理することもできる。
}