#include<iostream>
using namespace std;
//関数テンプレートと宣言
template <typename F>
F square(F x) {
	return x * x;
}
//メイン関数
int main() {
	double num1;
	cin >> num1;
	cout << square(num1);
	while (true)
	{
	}
	return 0;
}
/*多分課題的にはオーバーロードとテンプレート
両方やらせたかったんだろうけど、
テンプレートのほうやっちゃったからもういいや☆*/