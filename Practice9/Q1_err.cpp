#include <iostream>
using namespace std;
//Function prototype
int max(int scr[5]);
/*
int main_err() {
	int num, score[100][5];//score[�l��][�_��]
	cout << "���k�̐l������͂��Ă��������B" << endl;
	cin >> num;
	cout << "5���Ȃ̓_������͂��Ă�������" << endl;
	for (int i = 0; i < num; i++) {
		cout << i + 1 << "�l��" << endl;
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
	cout << "5���Ȃ̓��T����͂��Ă�������" << endl;
	int x[5];
	for (int i = 0;i < 5 ;i++)
	{
		cin >> x[i];
	}
	int result;
	result = max(x);
	cout << "�ō����_��" << result << endl;
	while (true)
	{
		//���[�v
	}
	return 0;
}