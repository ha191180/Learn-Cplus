#include <iostream>
using namespace std;

int main()
{//PRACTICE1
	cout << "#######PRACTICE5-1########\n";

	double num1;
	double num2;
	int num3;

	cout << "��������͂��Ă��������B" << endl;
	cin >> num1;
	num3 = num1;
	if (num1 - num3 == 0) {
		num2 = num3 % 2;
		if (num2 == 1)
			cout << num1 << "�͊�ł��B\n";
		else if (num2 == 0)
			cout << num1 << "�͋����ł��B\n";
	}
	else if (num1 - num3 > 0)
		cout << "������\n";//���̑傫�Ȑ��͐����ƔF������Ȃ���肠��B
	//�p���̓��͂ɑΉ��ł��܂���B


	
	//PRACTICE2
	cout << "#######PRACTICE5-2#######\n";
	int num4;
	int num5;
	
	cout << "�����l���Q���͂��Ă��������B\n";
	cin >> num4;
	cin >> num5;
	if (num4 == num5)
		cout << num4 << "��" << num5 << "�͓����l�ł��B\n";
	else if (num4 > num5)
		cout << num4 << "��" << num5 << "�����傫���l�ł��B\n";
	else if (num4 < num5)
		cout << num5 << "��" << num4 << "�����傫�Ȓl�ł��B\n";
	//��L�̏����̂Ƃ��ɉp���𓖂Ă�Ƃ��̏������o�O��B

	
	//PRACTICE3
	cout << "#######PRACTICE7-3#######\n";
	int num6;

	cout << "1����5�̐����l����͂��Ă��������B\n";
	cin >> num6;
	switch (num6) {
	case 1:
		cout << "�撣��\n";
		break;
	case 2:
		cout << "�������傢�撣��\n";
		break;
	case 3:
		cout << "���ʂ���\n";
		break;
	case 4:
		cout << "������Ɗ撣����\n";
		break;
	case 5:
		cout << "�����Ԋ撣����\n";
		break;
	}








	return 0;


}
