#include<iostream>
using namespace std;
//for���A���

int main() {
	int num = 1;
	int sum = 0;
	int cho = 0;
	char ast = '*';

	//selecter
	cout << "�{��������ԍ�����͂��Ă�������(from 1 to 3)";
	cin >> cho;
	

	//practice6-1
	if (cho == 1) {
		cout << "10000000����10000100�܂ł̋������o�͂��܂��B\n";
		for (int i = 10000000; i <= 10000100; i = i + 2)
			cout << i << endl;
	}

	//practice6-2
	if (cho == 2) {
		cout << "�e�X�g�̓_������͂��Ă�������(0�ŏI��)\n";
		for (int i = num; i != 0; i = num) {
			cin >> num;
			sum = (num + sum);
		}
		cout << "�e�X�g�̍��v�_��" << sum << "�_�ł��B\n";
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