#include <iostream>
using namespace std;

int main()
{//PRACTICE1
	cout << "#######PRACTICE5-1########\n";

	double num1;
	double num2;
	int num3;

	cout << "整数を入力してください。" << endl;
	cin >> num1;
	num3 = num1;
	if (num1 - num3 == 0) {
		num2 = num3 % 2;
		if (num2 == 1)
			cout << num1 << "は奇数です。\n";
		else if (num2 == 0)
			cout << num1 << "は偶数です。\n";
	}
	else if (num1 - num3 > 0)
		cout << "整数を\n";//桁の大きな数は整数と認識されない問題あり。
	//英字の入力に対応できません。


	
	//PRACTICE2
	cout << "#######PRACTICE5-2#######\n";
	int num4;
	int num5;
	
	cout << "整数値を２つ入力してください。\n";
	cin >> num4;
	cin >> num5;
	if (num4 == num5)
		cout << num4 << "と" << num5 << "は同じ値です。\n";
	else if (num4 > num5)
		cout << num4 << "は" << num5 << "よりも大きい値です。\n";
	else if (num4 < num5)
		cout << num5 << "は" << num4 << "よりも大きな値です。\n";
	//上記の処理のときに英字を当てるとこの処理がバグる。

	
	//PRACTICE3
	cout << "#######PRACTICE7-3#######\n";
	int num6;

	cout << "1から5の整数値を入力してください。\n";
	cin >> num6;
	switch (num6) {
	case 1:
		cout << "頑張れ\n";
		break;
	case 2:
		cout << "もうちょい頑張れ\n";
		break;
	case 3:
		cout << "普通かな\n";
		break;
	case 4:
		cout << "ちょっと頑張った\n";
		break;
	case 5:
		cout << "だいぶ頑張った\n";
		break;
	}








	return 0;


}
