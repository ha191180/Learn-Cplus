#include<iostream>
using namespace std;
//for文、苦手

int main() {
	int num = 1;
	int sum = 0;
	int cho = 0;
	char ast = '*';

	//selecter
	cout << "閲覧する問題番号を入力してください(from 1 to 3)";
	cin >> cho;
	

	//practice6-1
	if (cho == 1) {
		cout << "10000000から10000100までの偶数を出力します。\n";
		for (int i = 10000000; i <= 10000100; i = i + 2)
			cout << i << endl;
	}

	//practice6-2
	if (cho == 2) {
		cout << "テストの点数を入力してください(0で終了)\n";
		for (int i = num; i != 0; i = num) {
			cin >> num;
			sum = (num + sum);
		}
		cout << "テストの合計点は" << sum << "点です。\n";
	}
	
	//practice6-3
	if (cho == 3){
		for (int j = 1; j <= 5; j++) {
			for (int k = 1; j >= k; k++) {
				cout << ast;
			}
			cout << endl;
		}
	}
	
	return 0;
}