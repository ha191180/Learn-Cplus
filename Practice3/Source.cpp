#include <iostream>
using namespace std;

int main()
{
	double pi; //int型は整数なので少数以下は採用できないはずだ。
	char a; // もしくはunsigned char が文字型
	double height;
	double weight;

	cout << "###PRACTICE1###" << endl;
	cout << "what is number of pi?\n";//coutは標準出力
	cin >> pi;//cinは標準入力
	cout << "the number is " << pi << endl << endl;


	cout << "###PRACTICE2###" << endl;
	cout << "what is the first figure in alphabets\n";
	cin >> a;
	cout << "your nswer is " << a << endl << endl;

	cout << "###PRACTICE3###" << endl;
	cout << "fill your weight and height" << endl;
	cin >> weight >> height;
	cout << "your weight is " << weight << endl;
	cout << "your heght is " << height << endl;
	cout << "I understood" << endl << endl;

	return 0;

}  