#include<iostream>
using namespace std;
//�֐��e���v���[�g�Ɛ錾
template <typename F>
F square(F x) {
	return x * x;
}
//���C���֐�
int main() {
	double num1;
	cin >> num1;
	cout << square(num1);
	while (true)
	{
	}
	return 0;
}
/*�����ۑ�I�ɂ̓I�[�o�[���[�h�ƃe���v���[�g
������点���������񂾂낤���ǁA
�e���v���[�g�̂ق�����������������������⁙*/