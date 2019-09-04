#include <iostream>
using namespace std;
//Function prototype
int max(int scr[5]);
/*
int main_err() {
	int num, score[100][5];//score[人数][点数]
	cout << "生徒の人数を入力してください。" << endl;
	cin >> num;
	cout << "5教科の点数を入力してください" << endl;
	for (int i = 0; i < num; i++) {
		cout << i + 1 << "人目" << endl;
		for (int j = 0; j < 5; j++) {
			cin >> score[i][j];
		}
	}
	int maxtmp[100], maxall;
	for (int i = 0; i < num; i++) {
		int scr[5] = score[i][5];
		maxtmp[i] = max(scr[5]);
	}
}
*/
int max(int scr[]) {
	int max = scr[0];
	for (int i = 1; i < 5; i++) {
		if (max < scr[i])max = scr[i];
	}
	return max;
}


int main() {
	cout << "5教科の特典を入力してください" << endl;
	int x[5];
	for (int i = 0;i < 5 ;i++)
	{
		cin >> x[i];
	}
	int result;
	result = max(x);
	cout << "最高得点は" << result << endl;
	while (true)
	{
		//ループ
	}
	return 0;
}